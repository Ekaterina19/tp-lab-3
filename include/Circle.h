#pragma once
#include <cmath>
using namespace std;

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
