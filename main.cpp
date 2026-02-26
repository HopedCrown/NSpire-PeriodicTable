#include <ngc.h>
#include "elements.hpp"
#include "ui.hpp"

void drawPoly(unsigned int *points, unsigned int count){
    gui_gc_drawPoly(GC, points, count);
    save();
}

void DrawTable(str size){
    if (strcmp(size.c_str(),"small") == 1 || strcmp(size.c_str(),"Small") == 1) {
        // draw smaller table
    } else {
        drawPoly((unsigned int[]){16,0, 32,0, 32,24, 48,24, 48,72, 208,72, 208,24, 288,24, 288,0, 304,0, 304,168, 16,168},1);
        rect((unsigned int[]){48,192, 272,192, 272,240, 48,240}, 1);
        line(48,216, 272,216);
        line(32,24, 32,168);
        line(48,24, 48,168);
        line(208,24, 208, 168);
        drawPoly((unsigned int[]){208, 48, });
    }
}


void main() {
    // set bg to White
    gui_gc_setColor(GC, 0xFFFFFF);
    // fill the screen with bg color
    gui_gc_fillRect(GC, 0, 0, 320, 240);
    gui_gc_blit_to_screen(GC);
    DrawTable("Large");
}