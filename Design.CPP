#include <graphics.h>
#include <math.h>
#include <conio.h>
void main(void)
{
   int driver = DETECT,mode;
   int x[10],y[10];
   int xc=360,yc=180,rad=100;
   int i,j;
   initgraph(&driver,&mode,"C:\\tc||bgi");
   for(i=0;i<10;i++)
   {
    x[i]=xc+rad*cos(36*i*3.14159/180);
    y[i]=yc+rad*sin(36*i*3.14159/180);
   }
   for(i=0;i<10;i++)
     for(j=0;j<10;j++)
       line(x[i],y[i],x[j],y[j]);
   getch();
   closegraph();
   }
