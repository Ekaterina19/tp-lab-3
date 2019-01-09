
#include "Circle.h"
#define Pi 3.14
using namespace std;
Circle::Circle()
	:Radius(0.0), Ference(0.0), Area(0.0)
{}
Circle::Circle(double R)
{
	setRadius(R);
}
void Circle::setRadius(double R)
{
	this->Radius = R;
	this->Ference = 2 * Pi * R;
	this->Area = Pi * R * R;
}
void Circle::setFerence(double C)
{
	this->Ference = C;
	this->Radius = C / (2 * Pi);
	this->Area = Pi*(Radius*Radius);
}
void Circle::setArea(double S)
{
	this->Area = S;
	this->Radius = sqrt(S / (Pi));
	this->Ference = 2 * Pi*Radius;
}
double Circle::getArea()
{
	 return this->Area;
}
double Circle::getFerence()
{
	return this->Ference;
}
double Circle::getRadius()
{
	return this->Radius;
}
