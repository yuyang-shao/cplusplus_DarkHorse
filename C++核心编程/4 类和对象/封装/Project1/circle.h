#pragma once
#include<iostream>

#include "point.h"
using namespace std;

class Circle
{
public:
	//���ð뾶
	void setR(int r);
	
	int getR();
	

	void setCenter(Point center);
	

	Point getCenter();
	


private:
	int m_R; //�뾶

	//�����п�������һ������Ϊ��Ա
	Point m_Center;

};
