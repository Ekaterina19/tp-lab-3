#include"Circle.h"
#include "task1.h"

double calcDelta()
{
	Circle first_rope;
	double R = 6378.1 * 1000;//в метрах
	first_rope.setRadius(R * 1000);// считает все данные

	Circle second_rope;
	second_rope.setFerence(first_rope.getFerence() + 1);
	double res = second_rope.getRadius() - first_rope.getRadius();
	res= round(res * 1000) / 1000;
	return res;
}

double calcCost()
{
	Circle road1;
	road1.setRadius(3.0);
	Circle road2;
	road2.setRadius(4.0);

	double Cost_will = road2.getFerence()* 2000;

	double Cost_road= (road2.getArea()-road1.getArea())*1000;

	return Cost_road + Cost_will+11;

}