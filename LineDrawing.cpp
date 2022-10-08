#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, (char*)"");
	
	int x, y, r, d=0, xc, yc;
	cout<<"Enter center of circle ";
	cin>>xc>>yc;
	cout<<endl;
	
	cout<<"Enter redius of circle \n";
	cin>>r;
	
	x = 0;
	y = r;
	
	while(x<=y)
	{
		putpixel(x+xc, y+yc, RED);
		putpixel(y+xc, x+yc, RED);
		putpixel(y+xc, -x+yc, RED);
		putpixel(x+xc, -y+yc, RED);
		putpixel(-x+xc, -y+yc, RED);
		putpixel(-y+xc, -x+yc, RED);
		putpixel(-y+xc, x+yc, RED);
		putpixel(-x+xc, y+yc, RED);
		if(d<=0)
		{
			x = x + 1;
			d = d + 2*x + 1;
		}
		else
		{
			x = x + 1;
			y = y - 1;
			d = d + 2*x +1 -2*y;
		}
	}
	
	getch();
	closegraph();
}
