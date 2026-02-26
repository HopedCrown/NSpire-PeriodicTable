import os
from mendeleev import element

# Mapping mendeleev series names to your C++ enum members
FAMILY_MAP = {
    'Alkali metals': 'Alkali',
    'Alkaline earth metals': 'AlkalineEarth',
    'Transition metals': 'Transition',
    'Post-transition metals': 'PostTransition',
    'Metalloids': 'Metalloid',
    'Halogens': 'Halogen',
    'Noble gases': 'NobleGas',
    'Lanthanides': 'Lanthanides',
    'Actinides': 'Actinides',
    'Reactive nonmetals': 'Metalloid' # Approximation for non-metals like C, N, O
}
def ui():
    print("Process 2: Generate ui.hpp as shortcut.")
    with open("ui.hpp", "w") as f:
        f.write("#ifndef UI_HPP\n#define UI_HPP\n\n")
        f.write("#include <string>\n\n")
        f.write("#include <ngc.h>\n")
        print("Include structure created")
        f.write("typedef std::string str;\n\n")
        f.write("auto GC = gui_gc_global_GC();\n\n")
        f.write("void save(){\n")
        f.write("   gui_gc_blit_to_screen(GC);\n}\n\n")
        print("Save function created")
        f.write("""void rect(unsigned int points[], int count){\n""")
        f.write("   gui_gc_drawPoly(GC, points, count);\n")
        f.write("   save();\n")
        f.write("}\n\n")
        print("Rect function created")
        f.write("void line(int x1, int y1, int x2, int y2){\n")
        f.write("   gui_gc_drawLine(GC, x1, y1, x2-x1, y2-y1);\n")
        f.write("   save();\n")
        f.write("}\n\n")
        print("Line function created")
        f.write("void text(int x, int y, char *text){\n")
        f.write("   gui_gc_drawString(GC, text, x, y, gui_gc_StringMode::GC_SM_NORMAL);\n")
        f.write("   save();\n")
        f.write("}\n\n")
        print("Text function created")
        f.write("void cls(){\n")
        f.write("   gui_gc_setColorRGB(GC, 0, 0, 0);\n")
        f.write("   rect(0,0,320,240);\n")
        f.write("   save();\n")
        f.write("}\n\n")
        f.write("#endif")
    print("ui.hpp created successfully.")


def generate_hpp():
    # Fetch elements 1 to 118
    elements = [element(i) for i in range(1, 119)]
    
    with open("elements.hpp", "w") as f:
        print("Creating Base Syntax...")
        # 1. Header and Typedefs
        f.write("#ifndef ELEMENTS_HPP\n#define ELEMENTS_HPP\n\n")
        f.write("#include <string>\n\n")
        f.write("typedef std::string str;\n")
        f.write("typedef long double ldbl;\n")
        f.write("typedef unsigned int uint;\n\n")
        print("Base Syntax Created")
        print("Creating enum of element families...")
        # 2. Family Enum
        f.write("typedef enum {\n")
        f.write("    Alkali = 0x01,\n    AlkalineEarth = 0x02,\n    Transition = 0x04,\n")
        f.write("    PostTransition = 0x08,\n    Metalloid = 0x10,\n    Halogen = 0x40,\n")
        f.write("    NobleGas = 0x80,\n    Lanthanides = 0x100,\n    Actinides = 0x200,\n")
        f.write("    Nonmetals = 0x00\n")
        f.write("} e_Family;\n\n")
        print("Enum Created and Written")
        print("Starting Element class creation")
        # 3. Element Class
        f.write("class Element {\npublic:\n")
        f.write("    str name;\n    str symbol;\n")
        f.write("    uint group;\n    uint period;\n")
        f.write("    e_Family family;\n    ldbl avgmass;\n")
        f.write("    ldbl radius;\n    ldbl electronegativity;\n")
        f.write("    ldbl IonizationEnergy;\n   ldbl density;")
        f.write("    str ElectronConfig;\n  ldbl MeltingPoint;\n    uint ProtonNumber;\n};\n\n")

        # 4. Periodic Table Namespace
        f.write("namespace PeriodicTable {\n")
        for e in elements:
            # Data extraction with fallbacks for missing values
            print(f"Processing element: {e.name} ({e.symbol}) Iteration no. {e.atomic_number} of 118")
            group = e.group_id if e.group_id else 0
            period = e.period if e.period else 0
            mass = e.atomic_weight if e.atomic_weight else 0.0
            radius = e.atomic_radius if e.atomic_radius else 0.0
            density = e.density if e.density else 0.0
            electronconfig = e.econf if e.econf else "Unknown"
            meltingpoint = e.melting_point if e.melting_point else 0.0
            PNumber = e.atomic_number if e.atomic_number else 0
            en = e.electronegativity() if e.electronegativity() else 0.0
            # Get first ionization energy (key 1 in the dictionary)
            ie = e.ionenergies.get(1, 0.0) if e.ionenergies else 0.0
            
            family = FAMILY_MAP.get(e.series, "Nonmetal")

            f.write(f"    const Element {e.symbol} = {{\n")
            f.write(f'        "{e.name}", "{e.symbol}", {group}, {period}, {family},\n')
            f.write(f'        {mass}L, {radius}L, {en}L, {ie}L, {density}L, "{electronconfig}", {meltingpoint}L, {PNumber}\n')
            f.write(f"    }};\n\n")
        
        f.write("}\n\n#endif")
    print("elements.hpp created successfully.")
    ui()
    input("Press Enter to exit...")
    os.system("clear")

generate_hpp()
