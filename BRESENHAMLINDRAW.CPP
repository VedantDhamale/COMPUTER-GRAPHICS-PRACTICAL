#include<graphics.h>
#include<iostream>

using namespace std;

void drawline(int x0, int y0, int x1, int y1)
{
    int dx, dy, p, x, y;
 
	dx=x1-x0;
	dy=y1-y0;
 
	x=x0;
	y=y0;
 
	//calulating the decision parameter (p)
	p=2*dy-dx;
 	
	while(x<x1)
	{
		//case 1:
		if(p>=0)
		{
			putpixel(x,y,7);
			//cout<<x<<y<<"\n";
			y=y+1;
			p=p+2*dy-2*dx;
		}
		//for case 2
		else
		{
			putpixel(x,y,7);
			//cout<<x<<y<<"\n";
			p=p+2*dy;
		}
		x=x+1;
		delay(100);
	}
}
 
int main()
{
	int gd=DETECT, gm, error, x0, y0, x1, y1;
	initgraph(&gd, &gm, NULL);
 	
	cout<<"Enter co-ordinates of first point: ";
	cin>>x0>>y0;
 
	cout<<"Enter co-ordinates of second point: ";
	cin>>x1>>y1;
	
	drawline(x0, y0, x1, y1);
 
	getch();
	closegraph();
}
