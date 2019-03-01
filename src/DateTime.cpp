
#include "DateTime.h"

//Функция,которая строит строку
std::string DateTime::construct_str(time_t tmp)
{
	using namespace std;
	string str;
	
	tm * local;
	local = localtime(&tmp);

	str += to_string(local->tm_mday) + " ";
	switch (local->tm_mon)
	{
	case 0:
		str += "january ";
		break;
	case 1:
		str += "february ";
		break;
	case 2:
		str += "march ";
		break;
	case 3:
		str += "april ";
		break;
	case 4:
		str += "may ";
		break;
	case 5:
		str += "june ";
		break;
	case 6:
		str += "july ";
		break;
	case 7:
		str += "august ";
		break;
	case 8:
		str += "september ";
		break;
	case 9:
		str += "october ";
		break;
	case 10:
		str += "november ";
		break;
	case 11:
		str += "december ";
		break;
	}

	str += to_string(local->tm_year + 1900) + ", ";
	switch (local->tm_wday)
	{
	case 0:
		str += "sunday ";
		break;
	case 1:
		str += "monday ";
		break;
	case 2:
		str += "tuesday";
		break;
	case 3:
		str += "wednesday ";
		break;
	case 4:
		str += "thursday ";
		break;
	case 5:
		str += "friday ";
		break;
	case 6:
		str += "saturday ";
		break;
	}
	return str;

}
//Оператор копирования
DateTime::DateTime()
{
	time(&_Time);
}
//Конструктор даты
 DateTime::DateTime(int day,int month,int year)
{
	 tm tmTime;
	
	 tmTime.tm_mday = day;
	 tmTime.tm_mon = month-1;
	 tmTime.tm_year = year-1900;

	 tmTime.tm_hour = 0;
	 tmTime.tm_min = 0;
	 tmTime.tm_sec = 0;

	 _Time = mktime(&tmTime);
}

 std::string DateTime::getToday()
 {
	 return construct_str(_Time);	 
 }
 std::string DateTime::getYesterday()
 {	

	 return construct_str(_Time-24*3600);
 }
 std::string DateTime::getTomorrow()
 {
	 return construct_str(_Time + 24 * 3600);
 }
 std::string DateTime::getFuture(unsigned int N) 
 {

	 return construct_str(_Time + 24 * 3600*N);
 }
 std::string DateTime::getPast(unsigned int N)
 {
	 return construct_str(_Time - 24 * 3600*N);
 }
 int DateTime::getDifference(DateTime &dt)
 {
	 time_t result;
	 if ((*this)._Time >= dt._Time)
	 {
		 result = (*this)._Time - dt._Time;
	 }
	 else
		 result = dt._Time - (*this)._Time;
	 return result / (24 * 3600);
 }