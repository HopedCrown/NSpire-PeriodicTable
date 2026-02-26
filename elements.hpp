#ifndef ELEMENTS_HPP
#define ELEMENTS_HPP

#include <string>

typedef std::string str;
typedef long double ldbl;
typedef unsigned int uint;

typedef enum {
    Alkali = 0x01,
    AlkalineEarth = 0x02,
    Transition = 0x04,
    PostTransition = 0x08,
    Metalloid = 0x10,
    Halogen = 0x40,
    NobleGas = 0x80,
    Lanthanides = 0x100,
    Actinides = 0x200,
    Nonmetals = 0x00
} e_Family;

class Element {
public:
    str name;
    str symbol;
    uint group;
    uint period;
    e_Family family;
    ldbl avgmass;
    ldbl radius;
    ldbl electronegativity;
    ldbl IonizationEnergy;
   ldbl density;    str ElectronConfig;
  ldbl MeltingPoint;
    uint ProtonNumber;
};

namespace PeriodicTable {
    const Element H = {
        "Hydrogen", "H", 1, 1, Nonmetal,
        1.008L, 25.0L, 2.2L, 13.598434599702L, 8.2e-05L, "1s", 13.989999999999952L, 1
    };

    const Element He = {
        "Helium", "He", 18, 1, NobleGas,
        4.002602L, 120.0L, 0.0L, 24.587389011L, 0.000164L, "1s2", 0.0L, 2
    };

    const Element Li = {
        "Lithium", "Li", 1, 2, Alkali,
        6.94L, 145.0L, 0.98L, 5.391714996L, 0.534L, "[He] 2s", 453.65L, 3
    };

    const Element Be = {
        "Beryllium", "Be", 2, 2, AlkalineEarth,
        9.0121831L, 105.0L, 1.57L, 9.322699L, 1.85L, "[He] 2s2", 1560.15L, 4
    };

    const Element B = {
        "Boron", "B", 13, 2, Metalloid,
        10.81L, 85.0L, 2.04L, 8.298019L, 2.34L, "[He] 2s2 2p", 2350.15L, 5
    };

    const Element C = {
        "Carbon", "C", 14, 2, Nonmetal,
        12.011L, 70.0L, 2.55L, 11.260288L, 2.2L, "[He] 2s2 2p2", 0.0L, 6
    };

    const Element N = {
        "Nitrogen", "N", 15, 2, Nonmetal,
        14.007L, 65.0L, 3.04L, 14.53413L, 0.001145L, "[He] 2s2 2p3", 63.14999999999998L, 7
    };

    const Element O = {
        "Oxygen", "O", 16, 2, Nonmetal,
        15.999L, 60.0L, 3.44L, 13.618055L, 0.0013080000000000001L, "[He] 2s2 2p4", 54.359999999999985L, 8
    };

    const Element F = {
        "Fluorine", "F", 17, 2, Halogen,
        18.998403163L, 50.0L, 3.98L, 17.42282L, 0.001553L, "[He] 2s2 2p5", 53.47999999999999L, 9
    };

    const Element Ne = {
        "Neon", "Ne", 18, 2, NobleGas,
        20.1797L, 160.0L, 0.0L, 21.564541L, 0.000825L, "[He] 2s2 2p6", 24.559999999999974L, 10
    };

    const Element Na = {
        "Sodium", "Na", 1, 3, Alkali,
        22.98976928L, 180.0L, 0.93L, 5.13907696L, 0.97L, "[Ne] 3s", 370.94399999999996L, 11
    };

    const Element Mg = {
        "Magnesium", "Mg", 2, 3, AlkalineEarth,
        24.305L, 150.0L, 1.31L, 7.646236L, 1.74L, "[Ne] 3s2", 923.15L, 12
    };

    const Element Al = {
        "Aluminum", "Al", 13, 3, Nonmetal,
        26.9815385L, 125.0L, 1.61L, 5.985769L, 2.7L, "[Ne] 3s2 3p", 933.473L, 13
    };

    const Element Si = {
        "Silicon", "Si", 14, 3, Metalloid,
        28.085L, 110.0L, 1.9L, 8.15168L, 2.3296L, "[Ne] 3s2 3p2", 1687.15L, 14
    };

    const Element P = {
        "Phosphorus", "P", 15, 3, Nonmetal,
        30.973761998L, 100.0L, 2.19L, 10.486686L, 1.823L, "[Ne] 3s2 3p3", 0.0L, 15
    };

    const Element S = {
        "Sulfur", "S", 16, 3, Nonmetal,
        32.06L, 100.0L, 2.58L, 10.36001L, 2.07L, "[Ne] 3s2 3p4", 0.0L, 16
    };

    const Element Cl = {
        "Chlorine", "Cl", 17, 3, Halogen,
        35.45L, 100.0L, 3.16L, 12.967633L, 0.002898L, "[Ne] 3s2 3p5", 171.64999999999998L, 17
    };

    const Element Ar = {
        "Argon", "Ar", 18, 3, NobleGas,
        39.948L, 71.0L, 0.0L, 15.7596119L, 0.001633L, "[Ne] 3s2 3p6", 83.80999999999997L, 18
    };

    const Element K = {
        "Potassium", "K", 1, 4, Alkali,
        39.0983L, 220.0L, 0.82L, 4.34066373L, 0.89L, "[Ar] 4s", 336.65L, 19
    };

    const Element Ca = {
        "Calcium", "Ca", 2, 4, AlkalineEarth,
        40.078L, 180.0L, 1.0L, 6.11315547L, 1.54L, "[Ar] 4s2", 1115.15L, 20
    };

    const Element Sc = {
        "Scandium", "Sc", 3, 4, Transition,
        44.955908L, 160.0L, 1.36L, 6.56149L, 2.99L, "[Ar] 3d 4s2", 1814.15L, 21
    };

    const Element Ti = {
        "Titanium", "Ti", 4, 4, Transition,
        47.867L, 140.0L, 1.54L, 6.82812L, 4.506L, "[Ar] 3d2 4s2", 1943.15L, 22
    };

    const Element V = {
        "Vanadium", "V", 5, 4, Transition,
        50.9415L, 135.0L, 1.63L, 6.746187L, 6.0L, "[Ar] 3d3 4s2", 2183.15L, 23
    };

    const Element Cr = {
        "Chromium", "Cr", 6, 4, Transition,
        51.9961L, 140.0L, 1.66L, 6.76651L, 7.15L, "[Ar] 3d5 4s", 2180.15L, 24
    };

    const Element Mn = {
        "Manganese", "Mn", 7, 4, Transition,
        54.938044L, 140.0L, 1.55L, 7.434038L, 7.3L, "[Ar] 3d5 4s2", 1519.15L, 25
    };

    const Element Fe = {
        "Iron", "Fe", 8, 4, Transition,
        55.845L, 140.0L, 1.83L, 7.9024681L, 7.87L, "[Ar] 3d6 4s2", 1811.15L, 26
    };

    const Element Co = {
        "Cobalt", "Co", 9, 4, Transition,
        58.933194L, 135.0L, 1.88L, 7.88101L, 8.86L, "[Ar] 3d7 4s2", 1768.15L, 27
    };

    const Element Ni = {
        "Nickel", "Ni", 10, 4, Transition,
        58.6934L, 135.0L, 1.91L, 7.639878L, 8.9L, "[Ar] 3d8 4s2", 1728.15L, 28
    };

    const Element Cu = {
        "Copper", "Cu", 11, 4, Transition,
        63.546L, 135.0L, 1.9L, 7.72638L, 8.96L, "[Ar] 3d10 4s", 1357.77L, 29
    };

    const Element Zn = {
        "Zinc", "Zn", 12, 4, Transition,
        65.38L, 135.0L, 1.65L, 9.394197L, 7.134L, "[Ar] 3d10 4s2", 692.6769999999999L, 30
    };

    const Element Ga = {
        "Gallium", "Ga", 13, 4, Nonmetal,
        69.723L, 130.0L, 1.81L, 5.999302L, 5.91L, "[Ar] 3d10 4s2 4p", 302.91459999999995L, 31
    };

    const Element Ge = {
        "Germanium", "Ge", 14, 4, Metalloid,
        72.63L, 125.0L, 2.01L, 7.899435L, 5.3234L, "[Ar] 3d10 4s2 4p2", 1211.4L, 32
    };

    const Element As = {
        "Arsenic", "As", 15, 4, Metalloid,
        74.921595L, 115.0L, 2.18L, 9.78855L, 5.75L, "[Ar] 3d10 4s2 4p3", 1090.15L, 33
    };

    const Element Se = {
        "Selenium", "Se", 16, 4, Nonmetal,
        78.971L, 115.0L, 2.55L, 9.752368L, 4.809L, "[Ar] 3d10 4s2 4p4", 0.0L, 34
    };

    const Element Br = {
        "Bromine", "Br", 17, 4, Halogen,
        79.904L, 115.0L, 2.96L, 11.81381L, 3.1028L, "[Ar] 3d10 4s2 4p5", 265.95L, 35
    };

    const Element Kr = {
        "Krypton", "Kr", 18, 4, NobleGas,
        83.798L, 0.0L, 0.0L, 13.9996055L, 0.0034249999999999997L, "[Ar] 3d10 4s2 4p6", 115.77999999999997L, 36
    };

    const Element Rb = {
        "Rubidium", "Rb", 1, 5, Alkali,
        85.4678L, 235.0L, 0.82L, 4.1771281L, 1.53L, "[Kr] 5s", 312.45L, 37
    };

    const Element Sr = {
        "Strontium", "Sr", 2, 5, AlkalineEarth,
        87.62L, 200.0L, 0.95L, 5.69486745L, 2.64L, "[Kr] 5s2", 1050.15L, 38
    };

    const Element Y = {
        "Yttrium", "Y", 3, 5, Transition,
        88.90584L, 180.0L, 1.22L, 6.21726L, 4.47L, "[Kr] 4d 5s2", 1795.15L, 39
    };

    const Element Zr = {
        "Zirconium", "Zr", 4, 5, Transition,
        91.224L, 155.0L, 1.33L, 6.634126L, 6.52L, "[Kr] 4d2 5s2", 2127.15L, 40
    };

    const Element Nb = {
        "Niobium", "Nb", 5, 5, Transition,
        92.90637L, 145.0L, 1.6L, 6.75885L, 8.57L, "[Kr] 4d4 5s", 2750.15L, 41
    };

    const Element Mo = {
        "Molybdenum", "Mo", 6, 5, Transition,
        95.95L, 145.0L, 2.16L, 7.09243L, 10.2L, "[Kr] 4d5 5s", 2895.15L, 42
    };

    const Element Tc = {
        "Technetium", "Tc", 7, 5, Transition,
        97.90721L, 135.0L, 2.1L, 7.11938L, 11.0L, "[Kr] 4d5 5s2", 2430.15L, 43
    };

    const Element Ru = {
        "Ruthenium", "Ru", 8, 5, Transition,
        101.07L, 130.0L, 2.2L, 7.3605L, 12.1L, "[Kr] 4d7 5s", 2606.15L, 44
    };

    const Element Rh = {
        "Rhodium", "Rh", 9, 5, Transition,
        102.9055L, 135.0L, 2.28L, 7.4589L, 12.4L, "[Kr] 4d8 5s", 2236.15L, 45
    };

    const Element Pd = {
        "Palladium", "Pd", 10, 5, Transition,
        106.42L, 140.0L, 2.2L, 8.336839L, 12.0L, "[Kr] 4d10", 1827.9499999999998L, 46
    };

    const Element Ag = {
        "Silver", "Ag", 11, 5, Transition,
        107.8682L, 160.0L, 1.93L, 7.576234L, 10.5L, "[Kr] 4d10 5s", 1234.9299999999998L, 47
    };

    const Element Cd = {
        "Cadmium", "Cd", 12, 5, Transition,
        112.414L, 155.0L, 1.69L, 8.99382L, 8.69L, "[Kr] 4d10 5s2", 594.219L, 48
    };

    const Element In = {
        "Indium", "In", 13, 5, Nonmetal,
        114.818L, 155.0L, 1.78L, 5.7863558L, 7.31L, "[Kr] 4d10 5s2 5p", 429.7485L, 49
    };

    const Element Sn = {
        "Tin", "Sn", 14, 5, Nonmetal,
        118.71L, 145.0L, 1.96L, 7.343918L, 7.287L, "[Kr] 4d10 5s2 5p2", 0.0L, 50
    };

    const Element Sb = {
        "Antimony", "Sb", 15, 5, Metalloid,
        121.76L, 145.0L, 2.05L, 8.608389L, 6.68L, "[Kr] 4d10 5s2 5p3", 903.778L, 51
    };

    const Element Te = {
        "Tellurium", "Te", 16, 5, Metalloid,
        127.6L, 140.0L, 2.1L, 9.009808L, 6.232L, "[Kr] 4d10 5s2 5p4", 722.66L, 52
    };

    const Element I = {
        "Iodine", "I", 17, 5, Halogen,
        126.90447L, 140.0L, 2.66L, 10.451236L, 4.933L, "[Kr] 4d10 5s2 5p5", 386.84999999999997L, 53
    };

    const Element Xe = {
        "Xenon", "Xe", 18, 5, NobleGas,
        131.293L, 0.0L, 2.6L, 12.1298437L, 0.005365999999999999L, "[Kr] 4d10 5s2 5p6", 161.39999999999998L, 54
    };

    const Element Cs = {
        "Cesium", "Cs", 1, 6, Alkali,
        132.90545196L, 260.0L, 0.79L, 3.89390572743L, 1.873L, "[Xe] 6s", 301.65L, 55
    };

    const Element Ba = {
        "Barium", "Ba", 2, 6, AlkalineEarth,
        137.327L, 215.0L, 0.89L, 5.2116646L, 3.62L, "[Xe] 6s2", 1000.15L, 56
    };

    const Element La = {
        "Lanthanum", "La", 3, 6, Lanthanides,
        138.90547L, 195.0L, 1.1L, 5.5769L, 6.15L, "[Xe] 5d 6s2", 1193.15L, 57
    };

    const Element Ce = {
        "Cerium", "Ce", 0, 6, Lanthanides,
        140.116L, 185.0L, 1.12L, 5.5386L, 6.77L, "[Xe] 4f 5d 6s2", 1072.15L, 58
    };

    const Element Pr = {
        "Praseodymium", "Pr", 0, 6, Lanthanides,
        140.90766L, 185.0L, 1.13L, 5.4702L, 6.773L, "[Xe] 4f3 6s2", 1204.15L, 59
    };

    const Element Nd = {
        "Neodymium", "Nd", 0, 6, Lanthanides,
        144.242L, 185.0L, 1.14L, 5.525L, 7.01L, "[Xe] 4f4 6s2", 1289.15L, 60
    };

    const Element Pm = {
        "Promethium", "Pm", 0, 6, Lanthanides,
        144.91276L, 185.0L, 0.0L, 5.58187L, 7.26L, "[Xe] 4f5 6s2", 1315.15L, 61
    };

    const Element Sm = {
        "Samarium", "Sm", 0, 6, Lanthanides,
        150.36L, 185.0L, 1.17L, 5.643722L, 7.52L, "[Xe] 4f6 6s2", 1345.15L, 62
    };

    const Element Eu = {
        "Europium", "Eu", 0, 6, Lanthanides,
        151.964L, 185.0L, 0.0L, 5.670385L, 5.24L, "[Xe] 4f7 6s2", 1095.15L, 63
    };

    const Element Gd = {
        "Gadolinium", "Gd", 0, 6, Lanthanides,
        157.25L, 180.0L, 1.2L, 6.1498L, 7.9L, "[Xe] 4f7 5d 6s2", 1586.15L, 64
    };

    const Element Tb = {
        "Terbium", "Tb", 0, 6, Lanthanides,
        158.92535L, 175.0L, 0.0L, 5.8638L, 8.23L, "[Xe] 4f9 6s2", 1632.15L, 65
    };

    const Element Dy = {
        "Dysprosium", "Dy", 0, 6, Lanthanides,
        162.5L, 175.0L, 1.22L, 5.939061L, 8.55L, "[Xe] 4f10 6s2", 1685.15L, 66
    };

    const Element Ho = {
        "Holmium", "Ho", 0, 6, Lanthanides,
        164.93033L, 175.0L, 1.23L, 6.0215L, 8.8L, "[Xe] 4f11 6s2", 1745.15L, 67
    };

    const Element Er = {
        "Erbium", "Er", 0, 6, Lanthanides,
        167.259L, 175.0L, 1.24L, 6.1077L, 9.07L, "[Xe] 4f12 6s2", 1802.15L, 68
    };

    const Element Tm = {
        "Thulium", "Tm", 0, 6, Lanthanides,
        168.93422L, 175.0L, 1.25L, 6.184402L, 9.321L, "[Xe] 4f13 6s2", 1818.15L, 69
    };

    const Element Yb = {
        "Ytterbium", "Yb", 0, 6, Lanthanides,
        173.045L, 175.0L, 0.0L, 6.25416L, 6.9L, "[Xe] 4f14 6s2", 1097.15L, 70
    };

    const Element Lu = {
        "Lutetium", "Lu", 0, 6, Transition,
        174.9668L, 175.0L, 1.0L, 5.425871L, 9.84L, "[Xe] 4f14 5d 6s2", 1936.15L, 71
    };

    const Element Hf = {
        "Hafnium", "Hf", 4, 6, Transition,
        178.49L, 155.0L, 1.3L, 6.82507L, 13.3L, "[Xe] 4f14 5d2 6s2", 2506.15L, 72
    };

    const Element Ta = {
        "Tantalum", "Ta", 5, 6, Transition,
        180.94788L, 145.0L, 1.5L, 7.549571L, 16.4L, "[Xe] 4f14 5d3 6s2", 3290.15L, 73
    };

    const Element W = {
        "Tungsten", "W", 6, 6, Transition,
        183.84L, 135.0L, 1.7L, 7.86403L, 19.3L, "[Xe] 4f14 5d4 6s2", 3687.15L, 74
    };

    const Element Re = {
        "Rhenium", "Re", 7, 6, Transition,
        186.207L, 135.0L, 1.9L, 7.83352L, 20.8L, "[Xe] 4f14 5d5 6s2", 3458.15L, 75
    };

    const Element Os = {
        "Osmium", "Os", 8, 6, Transition,
        190.23L, 130.0L, 2.2L, 8.43823L, 22.5872L, "[Xe] 4f14 5d6 6s2", 3306.15L, 76
    };

    const Element Ir = {
        "Iridium", "Ir", 9, 6, Transition,
        192.217L, 135.0L, 2.2L, 8.96702L, 22.5622L, "[Xe] 4f14 5d7 6s2", 2719.15L, 77
    };

    const Element Pt = {
        "Platinum", "Pt", 10, 6, Transition,
        195.084L, 135.0L, 2.2L, 8.95883L, 21.5L, "[Xe] 4f14 5d9 6s", 2041.35L, 78
    };

    const Element Au = {
        "Gold", "Au", 11, 6, Transition,
        196.966569L, 135.0L, 2.4L, 9.225554L, 19.3L, "[Xe] 4f14 5d10 6s", 1337.33L, 79
    };

    const Element Hg = {
        "Mercury", "Hg", 12, 6, Transition,
        200.592L, 150.0L, 1.9L, 10.437504L, 13.5336L, "[Xe] 4f14 5d10 6s2", 234.32099999999997L, 80
    };

    const Element Tl = {
        "Thallium", "Tl", 13, 6, Nonmetal,
        204.38L, 190.0L, 1.8L, 6.1082873L, 11.8L, "[Xe] 4f14 5d10 6s2 6p", 577.15L, 81
    };

    const Element Pb = {
        "Lead", "Pb", 14, 6, Nonmetal,
        207.2L, 180.0L, 1.8L, 7.4166799L, 11.3L, "[Xe] 4f14 5d10 6s2 6p2", 600.612L, 82
    };

    const Element Bi = {
        "Bismuth", "Bi", 15, 6, Nonmetal,
        208.9804L, 160.0L, 1.9L, 7.285516L, 9.79L, "[Xe] 4f14 5d10 6s2 6p3", 544.5519999999999L, 83
    };

    const Element Po = {
        "Polonium", "Po", 16, 6, Metalloid,
        209.0L, 190.0L, 2.0L, 8.41807L, 9.2L, "[Xe] 4f14 5d10 6s2 6p4", 527.15L, 84
    };

    const Element At = {
        "Astatine", "At", 17, 6, Halogen,
        210.0L, 0.0L, 2.2L, 9.31751L, 7.0L, "[Xe] 4f14 5d10 6s2 6p5", 575.15L, 85
    };

    const Element Rn = {
        "Radon", "Rn", 18, 6, NobleGas,
        222.0L, 0.0L, 0.0L, 10.7485L, 0.009074L, "[Xe] 4f14 5d10 6s2 6p6", 202.14999999999998L, 86
    };

    const Element Fr = {
        "Francium", "Fr", 1, 7, Alkali,
        223.0L, 0.0L, 0.7L, 4.0727411L, 1.87L, "[Rn] 7s", 294.15L, 87
    };

    const Element Ra = {
        "Radium", "Ra", 2, 7, AlkalineEarth,
        226.0L, 215.0L, 0.9L, 5.2784239L, 5.0L, "[Rn] 7s2", 969.15L, 88
    };

    const Element Ac = {
        "Actinium", "Ac", 3, 7, Actinides,
        227.0L, 195.0L, 1.1L, 5.380235L, 10.0L, "[Rn] 6d 7s2", 1323.15L, 89
    };

    const Element Th = {
        "Thorium", "Th", 0, 7, Actinides,
        232.0377L, 180.0L, 1.3L, 6.3067L, 11.7L, "[Rn] 6d2 7s2", 2023.15L, 90
    };

    const Element Pa = {
        "Protactinium", "Pa", 0, 7, Actinides,
        231.03588L, 180.0L, 1.5L, 5.89L, 15.4L, "[Rn] 5f2 6d 7s2", 1845.15L, 91
    };

    const Element U = {
        "Uranium", "U", 0, 7, Actinides,
        238.02891L, 175.0L, 1.7L, 6.19405L, 19.1L, "[Rn] 5f3 6d 7s2", 1408.15L, 92
    };

    const Element Np = {
        "Neptunium", "Np", 0, 7, Actinides,
        237.0L, 175.0L, 1.3L, 6.26554L, 20.2L, "[Rn] 5f4 6d 7s2", 917.15L, 93
    };

    const Element Pu = {
        "Plutonium", "Pu", 0, 7, Actinides,
        244.0L, 175.0L, 1.3L, 6.02576L, 19.7L, "[Rn] 5f6 7s2", 913.15L, 94
    };

    const Element Am = {
        "Americium", "Am", 0, 7, Actinides,
        243.0L, 175.0L, 0.0L, 5.97381L, 12.0L, "[Rn] 5f7 7s2", 1449.15L, 95
    };

    const Element Cm = {
        "Curium", "Cm", 0, 7, Actinides,
        247.0L, 0.0L, 0.0L, 5.992241L, 13.51L, "[Rn] 5f7 6d 7s2", 1618.15L, 96
    };

    const Element Bk = {
        "Berkelium", "Bk", 0, 7, Actinides,
        247.0L, 0.0L, 0.0L, 6.19785L, 14.78L, "[Rn] 5f9 7s2", 1259.15L, 97
    };

    const Element Cf = {
        "Californium", "Cf", 0, 7, Actinides,
        251.0L, 0.0L, 0.0L, 6.281878L, 15.1L, "[Rn] 5f10 7s2", 1173.15L, 98
    };

    const Element Es = {
        "Einsteinium", "Es", 0, 7, Actinides,
        252.0L, 0.0L, 0.0L, 6.3684L, 8.84L, "[Rn] 5f11 7s2", 1133.15L, 99
    };

    const Element Fm = {
        "Fermium", "Fm", 0, 7, Actinides,
        257.0L, 0.0L, 0.0L, 6.5L, 9.7L, "[Rn] 5f12 7s2", 1800.15L, 100
    };

    const Element Md = {
        "Mendelevium", "Md", 0, 7, Actinides,
        258.0L, 0.0L, 0.0L, 6.58L, 10.3L, "[Rn] 5f13 7s2", 1100.15L, 101
    };

    const Element No = {
        "Nobelium", "No", 0, 7, Actinides,
        259.0L, 0.0L, 0.0L, 6.62621L, 9.9L, "[Rn] 5f14 7s2", 1100.15L, 102
    };

    const Element Lr = {
        "Lawrencium", "Lr", 0, 7, Transition,
        262.0L, 0.0L, 0.0L, 4.96L, 15.6L, "[Rn] 5f14 7s2 7p1", 1900.15L, 103
    };

    const Element Rf = {
        "Rutherfordium", "Rf", 4, 7, Transition,
        267.0L, 0.0L, 0.0L, 6.02L, 23.3L, "[Rn] 5f14 6d2 7s2", 0.0L, 104
    };

    const Element Db = {
        "Dubnium", "Db", 5, 7, Transition,
        268.0L, 0.0L, 0.0L, 6.8L, 29.3L, "[Rn] 5f14 6d3 7s2", 0.0L, 105
    };

    const Element Sg = {
        "Seaborgium", "Sg", 6, 7, Transition,
        271.0L, 0.0L, 0.0L, 7.8L, 35.0L, "[Rn] 5f14 6d4 7s2", 0.0L, 106
    };

    const Element Bh = {
        "Bohrium", "Bh", 7, 7, Transition,
        274.0L, 0.0L, 0.0L, 7.7L, 37.1L, "[Rn] 5f14 6d5 7s2", 0.0L, 107
    };

    const Element Hs = {
        "Hassium", "Hs", 8, 7, Transition,
        269.0L, 0.0L, 0.0L, 7.6L, 40.7L, "[Rn] 5f14 6d6 7s2", 0.0L, 108
    };

    const Element Mt = {
        "Meitnerium", "Mt", 9, 7, Transition,
        276.0L, 0.0L, 0.0L, 0.0L, 37.4L, "[Rn] 5f14 6d7 7s2", 0.0L, 109
    };

    const Element Ds = {
        "Darmstadtium", "Ds", 10, 7, Transition,
        281.0L, 0.0L, 0.0L, 0.0L, 34.8L, "[Rn] 5f14 6d9 7s1", 0.0L, 110
    };

    const Element Rg = {
        "Roentgenium", "Rg", 11, 7, Transition,
        281.0L, 0.0L, 0.0L, 0.0L, 28.7L, "[Rn] 5f14 6d10 7s1", 0.0L, 111
    };

    const Element Cn = {
        "Copernicium", "Cn", 12, 7, Transition,
        285.0L, 0.0L, 0.0L, 0.0L, 14.0L, "[Rn] 5f14 6d10 7s2", 0.0L, 112
    };

    const Element Nh = {
        "Nihonium", "Nh", 13, 7, Nonmetal,
        286.0L, 0.0L, 0.0L, 0.0L, 16.0L, "[Rn] 5f14 6d10 7s2 7p1", 0.0L, 113
    };

    const Element Fl = {
        "Flerovium", "Fl", 14, 7, Nonmetal,
        289.0L, 0.0L, 0.0L, 0.0L, 9.928L, "[Rn] 5f14 6d10 7s2 7p2", 0.0L, 114
    };

    const Element Mc = {
        "Moscovium", "Mc", 15, 7, Nonmetal,
        288.0L, 0.0L, 0.0L, 0.0L, 13.5L, "[Rn] 5f14 6d10 7s2 7p3", 0.0L, 115
    };

    const Element Lv = {
        "Livermorium", "Lv", 16, 7, Nonmetal,
        293.0L, 0.0L, 0.0L, 0.0L, 12.9L, "[Rn] 5f14 6d10 7s2 7p4", 0.0L, 116
    };

    const Element Ts = {
        "Tennessine", "Ts", 17, 7, Halogen,
        294.0L, 0.0L, 0.0L, 0.0L, 7.2L, "[Rn] 5f14 6d10 7s2 7p5", 0.0L, 117
    };

    const Element Og = {
        "Oganesson", "Og", 18, 7, NobleGas,
        294.0L, 0.0L, 0.0L, 0.0L, 7.0L, "[Rn] 5f14 6d10 7s2 7p6", 0.0L, 118
    };

}

#endif