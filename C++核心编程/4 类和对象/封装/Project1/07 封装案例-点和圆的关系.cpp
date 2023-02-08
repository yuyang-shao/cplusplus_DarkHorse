#include<iostream>
using namespace std;
#include<string>
#include"point.h"
#include"circle.h"


void isInCircle(Circle &c, Point &p)
{
	int distance2 = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX())+
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	int p2 = c.getR() * c.getR();
	if(distance2==p2)
	{
		cout << "点在圆上" << endl;
	}
	else if(distance2>p2)
	{
		cout << "点在圆外" << endl;
	}
	else
	{
		cout << "点在圆内" << endl;
	}
}
int main()
{
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	Point p;
	p.setX(10);
	p.setY(9);
	isInCircle(c, p);

	Point p2;
	p2.setX(10);
	p2.setY(11);
	isInCircle(c, p2);

	Point p3;
	p3.setX(10);
	p3.setY(10);
	isInCircle(c, p3);
	return 0;
}