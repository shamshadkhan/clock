#include<stdio.h>
#include<dos.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
void main()
{
	int gdriver,gmode;
	detectgraph(&gdriver,&gmode);
	initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
	float x1,y1,y2,x2,x=getmaxx()/2,y=getmaxy()/2;
	int i=0,j=0,k=0,l=0,m=0,n=0,o,p;
	int a[61]={0,10,27,40,52,61,71,80,88,95,101,108,112,115,118,100,118,115,112,108,101,95,88,80,71,61,52,40,27,10,0,-10,-27,-40,-52,-61,-71,-80,-88,-95,-101,-108,-112,-115,-118,-100,-118,-115,-112,-108,-101,-95,-88,-80,-71,-61,-52,-40,-27,-10};
	int b[61]={-100,-118,-115,-112,-108,-101,-95,-88,-80,-71,-61,-52,-40,-27,-10,0,10,27,40,52,61,71,80,88,95,101,108,112,115,118,100,118,115,112,108,101,95,88,80,71,61,52,40,27,10,0,-10,-27,-40,-52,-61,-71,-80,-88,-95,-101,-108,-112,-115,-118};
	int c[61]={0,5,13,20,26,30,36,40,44,47,55,52,57,59,60,60,60,59,57,55,52,47,44,40,36,30,26,20,13,5,0,-5,-13,-20,-26,-30,-36,-40,-44,-47,-55,-52,-57,-59,-60,-60,-60,-59,-57,-55,-52,-47,-44,-40,-36,-30,-26,-20,-13,-5};
	int d[61]={-60,-60,-59,-57,-55,-50,-49,-46,-40,-35,-28,-32,-21,-14,-5,0,5,14,21,28,32,35,40,46,49,50,55,57,59,60,60,60,59,57,55,50,49,46,40,35,28,32,21,14,5,0,-5,-14,-21,-28,-32,-35,-40,-46,-49,-50,-55,-57,-59,-60};
	struct time t;
	 gettime(&t);
	i=t.ti_sec;
	j=t.ti_min ;
	if(t.ti_hour>12)
		t.ti_hour=t.ti_hour-12;
	m=(j/6)/2;
	k=(5*t.ti_hour)+m;
	if(j%6!=0)
		l=1;
	else
		l=0;
	while(!kbhit())
	{
    while(k<60)//hrs
	{

	 while(j<60)//minute
		 {

	     while(i<60)//seconds
			 {

				gettime(&t);
				n=t.ti_hour;
				o=t.ti_min;
				p=t.ti_sec;
				gotoxy(28,5);
				printf("TIME IS NOW>>>>>>%02d:%02d:%02d",n,o,p);
				//type
				setcolor(4);
				outtextxy(x-63,y-50,"SHAMSHAD AKTHER");
				outtextxy(x-30,y+50,"2011-2012");
				setcolor(14);
				circle(x,y,120);
				//hour
				line(x,y-120,x,y-100);
				line(x+52,y-87,x+61,y-101);
				line(x+87,y-52,x+101,y-61);
				//
				line(x+120,y,x+100,y);
				line(x+87,y+52,x+101,y+61);
				line(x+52,y+87,x+61,y+101);
				//
				line(x,y+120,x,y+100);
				line(x-52,y+87,x-61,y+101);
				line(x-87,y+52,x-101,y+61);
				//
				line(x-120,y,x-100,y);
				line(x-52,y-87,x-61,y-101);
				line(x-87,y-52,x-101,y-61);
				//sec
				line(x+10,y-112,x+10, y-118);
				line(x+25,y-109,x+27,y-115);
				line(x+38,y-106,x+40,y-112);
				line(x+50,y-102,x+52,y-108);
				line(x+66,y-90,x+71,y-95);
				line(x+75,y-83,x+80,y-88);
				line(x+83,y-75,x+88,y-80);
				line(x+90,y-66,x+95,y-71);
				line(x+102,y-50,x+108,y-52);
				line(x+106,y-38,x+112,y-40);
				line(x+109,y-25,x+115,y-27);
				line(x+112,y-10,x+118,y-10);
				//
				line(x+10,y+112,x+10, y+118);
				line(x+25,y+109,x+27,y+115);
				line(x+38,y+106,x+40,y+112);
				line(x+50,y+102,x+52,y+108);
				line(x+66,y+90,x+71,y+95);
				line(x+75,y+83,x+80,y+88);
				line(x+83,y+75,x+88,y+80);
				line(x+90,y+66,x+95,y+71);
				line(x+102,y+50,x+108,y+52);
				line(x+106,y+38,x+112,y+40);
				line(x+109,y+25,x+115,y+27);
				line(x+112,y+10,x+118,y+10);
				//
				line(x-10,y+112,x-10, y+118);
				line(x-25,y+109,x-27,y+115);
				line(x-38,y+106,x-40,y+112);
				line(x-50,y+102,x-52,y+108);
				line(x-66,y+90,x-71,y+95);
				line(x-75,y+83,x-80,y+88);
				line(x-83,y+75,x-88,y+80);
				line(x-90,y+66,x-95,y+71);
				line(x-102,y+50,x-108,y+52);
				line(x-106,y+38,x-112,y+40);
				line(x-109,y+25,x-115,y+27);
				line(x-112,y+10,x-118,y+10);
				//
				line(x-10,y-112,x-10, y-118);
				line(x-25,y-109,x-27,y-115);
				line(x-38,y-106,x-40,y-112);
				line(x-50,y-102,x-52,y-108);
				line(x-66,y-90,x-71,y-95);
				line(x-75,y-83,x-80,y-88);
				line(x-83,y-75,x-88,y-80);
				line(x-90,y-66,x-95,y-71);
				line(x-102,y-50,x-108,y-52);
				line(x-106,y-38,x-112,y-40);
				line(x-109,y-25,x-115,y-27);
				line(x-112,y-10,x-118,y-10);

				//calculate
				line(x,y,x+a[i],y+b[i]);
				if((i>=30)&&(i<60))
				{
					if(j==59)
					{
						line(x,y,(((x+a[j])+(x+a[0]))/2),(((y+b[j])+(y+b[0]))/2));
					}
					else
					{
						line(x,y,(((x+a[j])+(x+a[j+1]))/2),(((y+b[j])+(y+b[j+1]))/2));
					}
				}
				if(i<30)
				{
					line(x,y,x+a[j],y+b[j]);
				}
				if(i==59)
					{
					       line(x,y,x+a[j+1],y+b[j+1]);
					}

				 if(l==1)
				 {
					 line(x,y,(((x+c[k])+(x+c[k+1]))/2),(((y+d[k])+(y+d[k+1]))/2));
				}
				 if(l==0)
				 {

					 line(x,y,x+c[k],y+d[k]);
				 }
				i++;
				delay(1000);
	  cleardevice();

			 }
			 i=0;
			 if((j%6==0)&&(j%4!=0)&&(j!=0))
			 {
				l=1;
			 }
			 if((j%4==0)&&(j%6==0)&&(j!=0))
			 {
				l=0;
				k++;
			 }
			 j++;
		 }
		 k++;
		 l=0;
		 j=0;
	 }
	 }//kbhit
		getch();
}