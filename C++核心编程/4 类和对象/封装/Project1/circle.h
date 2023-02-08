#pragma once
#include<iostream>

#include "point.h"
using namespace std;

class Circle
{
public:
	//设置半径
	void setR(int r);
	
	int getR();
	

	void setCenter(Point center);
	

	Point getCenter();
	


private:
	int m_R; //半径

	//在类中可以让另一个类作为成员
	Point m_Center;

};
