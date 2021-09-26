#include<graphics.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
setcolor(BLUE);
settextstyle(4,0,7);
outtextxy(130,400,"DORAEMON");

//eyes
setcolor(WHITE);
setfillstyle(SOLID_FILL,WHITE);
ellipse(290,100,0,360,19,30);    // right eye  outer
ellipse(330,100,0,360,19,30);    // left eye  outer
floodfill(290,100,WHITE);
floodfill(330,100,WHITE);
setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
fillellipse(295,110,5,10);  // right eye  inner
fillellipse(325,110,5,10);  //left eye inner
floodfill(295,210,BLACK);
floodfill(325,210,BLACK);

//nose
setcolor(WHITE);
setfillstyle(SOLID_FILL,RED);
circle(309,135,9);
floodfill(309,135,WHITE);
//line which connect nose to lip
line(309,145,309,200);
//lip
arc(309,153,200,340,50);
line(295,149,260,135);
line(295,157,260,157);
line(295,164,260,174);

line(324,149,360,135);
line(324,157,360,157);
line(324,164,360,174);

//face
setcolor(BLUE);
//inner ellipse
ellipse(270,175,90,220,33,80);
ellipse(350,175,320,90,33,80);
//outer ellipse
ellipse(310,155,310,230,80,120);

//bell
setcolor(RED);
setfillstyle(SOLID_FILL,RED);
line(250,247,369,247);
line(250,257,369,257);
line(250,247,250,257);
line(369,247,369,257);
//floodfill(250,350,Y);

//ring
setcolor(WHITE);
setfillstyle(SOLID_FILL,YELLOW);
circle(309,262,10);
floodfill(309,262,WHITE);
setcolor(BLACK);
circle(309,264,2);
line(295,258,320,258) ;
line(293,260,322,260) ;
line(308,267,308,313) ;
line(310,267,310,313) ;
//pocket
setcolor(WHITE);
line(270,300,350,300);    //pocket line
arc(310,300,180,360,40);
//body  and leg
setcolor(BLUE);
line(250,257,250,382);   //right body line
line(369,257,369,382);  //left body line
setcolor(WHITE);
setfillstyle(SOLID_FILL,WHITE);
ellipse(273,390,0,360,30,10);     //left leg
ellipse(347,390,0,360,30,10);    //right leg
floodfill(250,395,WHITE);
floodfill(370,395,WHITE);
setcolor(BLUE);
arc(310,370,0,180,10);
line(300,370,295,382);  //right leg body line
line(320,370,325,382);  //left leg body line
// hand
line(250,257,200,310);
line(250,292,215,330);
setcolor(BLUE);

line(369,257,419,310);
line(369,292,404,330);
setcolor(WHITE);
setfillstyle(SOLID_FILL,WHITE);
circle(195,330,20);
circle(424,330,20);
floodfill(195,330,WHITE);
floodfill(424,330,WHITE);
getch();
closegraph();
}