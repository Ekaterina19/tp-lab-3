#pragma once
#include <cmath>

class Circle
{
public:
	Circle();
	Circle(double);
	void setRadius(double R);
	void setFerence(double C);
	void setArea(double S);
	double getArea();
	double getFerence();
	double getRadius();

private:
	double Radius;
	double Ference;
	double	Area;
};