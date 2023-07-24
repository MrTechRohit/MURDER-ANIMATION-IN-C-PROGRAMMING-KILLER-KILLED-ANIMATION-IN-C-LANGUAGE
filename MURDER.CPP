//____/____ WELCOME ALL OF YOU ON COMPUTER SOFT SKILLS CHANNEL _____\______//

//----------------- C++ PROGRAM TO CREATE MURDER ANIMATION ---------------\\
/*________________________________________________________________________*/

#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>

void man();
void man2();

void main()
{
int a,b;
int gdriver = DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\TC\\BGI");

man();
man2();

delay(2000);
b=0;
for(a=0;a<43;a++)
{

//....bullet.....
b=b+6;
setcolor(14);
line(130+b,315,137+b,315);
line(130+b,316,137+b,316);
delay(50);
setcolor(15);
cleardevice();
man();
man2();
}

{
//_____killed man______//
setcolor(15);
ellipse(410,375,0,360,7,9);
circle(413,372,1);
circle(413,380,1);
line(406,373,406,378);
line(380,375,403,375);
line(350,365,380,375);
line(380,375,350,390);
line(400,375,380,400);
line(380,365,395,375);
setcolor(15);

cleardevice();
man();
}

//----killed man----//

setcolor(12);
ellipse(410,375,0,360,7,9);
circle(413,372,1);
circle(413,380,1);
line(406,373,406,378);
setcolor(15);
line(380,375,403,375);
line(350,365,380,375);
line(380,375,350,390);
line(400,375,380,400);
line(380,365,395,375);
setcolor(15);
getch();
}

void man()
{

//-----killer man ---//
ellipse(100,300,0,360,7,9);
circle(102,298,1);
line(103,303,105,303);
rectangle(99,310,102,315);
rectangle(97,315,105,335);
line(97,335,97,355);
line(105,335,101,355);
ellipse(101,357,0,360,5,2);
line(102,322,107,327);
line(103,326,108,330);
line(107,327,110,320);
line(108,330,111,321);

//....GUN
setcolor(11);
line(97,324,127,319);
line(104,320,129,316);
line(97,324,102,329);
line(104,320,102,329);
line(108,317,110,320);
line(126,320,127,316);

//sun
setcolor(14);
setfillstyle(SOLID_FILL,14);
circle(295,60,20);
floodfill(296,70,14);
setcolor(15);

//  ground //
setfillstyle(1,7);             //footpath starts
  setcolor(7);
  rectangle(0,200,640,220);
  rectangle(80,200,40,220);
  bar(40,200,0,220);
  rectangle(0,200,40,220);
  bar(40,200,80,220);
  rectangle(80,200,120,220);
  bar(120,200,160,220);
  rectangle(160,200,200,220);
  bar(200,200,240,220);
  rectangle(240,200,280,220);
  bar(280,200,320,220);
  rectangle(320,200,360,220);
  bar(360,200,400,220);
  rectangle(400,200,440,220);
  bar(440,200,480,220);
  rectangle(480,200,520,220);
  bar(520,200,560,220);
  rectangle(560,200,600,220);
  bar(600,200,640,220);

  setfillstyle(1,6);               //Pole starts
  setcolor(6);
  bar(0,155,640,160);
  setfillstyle(1,6);
  bar(100,140,95,200);
  bar(0,140,5,200);
  bar(100,140,105,200);
  bar(200,140,205,200);
  bar(300,140,305,200);
  bar(400,140,405,200);
  bar(500,140,505,200);
  bar(600,140,605,200);

  setfillstyle(1,7);                  //2footpath starts
  setcolor(7);
  rectangle(0,400,640,420);
  rectangle(80,400,40,420);
  bar(40,400,0,420);
  rectangle(0,400,40,420);
  bar(40,400,80,420);
  rectangle(80,400,120,420);
  bar(120,400,160,420);
  rectangle(160,400,200,420);
  bar(200,400,240,420);
  rectangle(240,400,280,420);
  bar(280,400,320,420);
  rectangle(320,400,360,420);
  bar(360,400,400,420);
  rectangle(400,400,440,420);
  bar(440,400,480,420);
  rectangle(480,400,520,420);
  bar(520,400,560,420);
  rectangle(560,400,600,420);
  bar(600,400,640,420);

					  //2footpath ends
  setcolor(2);                              //Grass starts
  setfillstyle(9,2);
  line(0,421,640,421);
  floodfill(0,470,2);                       //Grass ends

  setcolor(15);
   outtextxy(50,30,"I FORGIVE");
   outtextxy(65,45,"BUT");
   outtextxy(50,60,"NEVER FORGOT");
   outtextxy(435,430,"Created by :- ");
   outtextxy(435,445,"COMPUTER SOFT SKILLS");
   outtextxy(435,460,"(ROHIT)");
}

void man2()
{
//---alive man
setcolor(15);
ellipse(400,300,0,360,7,9);
circle(398,298,1);
circle(403,298,1);
line(398,303,403,303);
line(399,310,399,333);
line(399,333,384,360);
line(399,333,416,360);
line(399,320,420,335);
line(399,320,390,335);
}


/*------------------ I HOPE YOU LIKE THIS PROGRAMMING ---------------------*/
/*_____________= LIKE =_______= SHARE =_________= SUBSCRIBE =_____________*/







