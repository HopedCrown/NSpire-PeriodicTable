#ifndef UI_HPP
#define UI_HPP

#include <string>

#include <ngc.h>
typedef std::string str;

auto GC = gui_gc_global_GC();

void save(){
   gui_gc_blit_to_screen(GC);
}

void rect(unsigned int points[], int count){
   gui_gc_drawPoly(GC, points, count);
   save();
}

void line(int x1, int y1, int x2, int y2){
   gui_gc_drawLine(GC, x1, y1, x2-x1, y2-y1);
   save();
}

void text(int x, int y, char *text){
   gui_gc_drawString(GC, text, x, y, gui_gc_StringMode::GC_SM_NORMAL);
   save();
}

void cls(){
   gui_gc_setColorRGB(GC, 0, 0, 0);
   rect(0,0,320,240);
   save();
}

#endif