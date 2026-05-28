#include<graphics.h>
#include <conio.h>
int main() {
    int gd=DETECT, gm, i;
    initgraph(&gd,&gm,"");
    for(i=0;i<400;i+=10) {
        cleardevice();
        circle(100+i,300,30);   // back wheel
        circle(200+i,300,30);   // front wheel
        line(100+i,300,150+i,250); // frame
        line(150+i,250,200+i,300);
        line(150+i,250,150+i,200); // handle
        delay(100);
    }
    getch();
    closegraph();
    return 0;
}