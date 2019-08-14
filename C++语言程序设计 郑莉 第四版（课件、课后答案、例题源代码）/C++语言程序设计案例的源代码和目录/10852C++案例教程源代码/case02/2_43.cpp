#include <iostream>
using namespace std;
struct Time					//计时结构体
{	short year;	short month;	short day;	 short hour;	short minute;	short second;};
int main()
{	Time time1;
	cout << "Input the year:";	cin >> time1.year;
	cout << "Input the month:";	cin >> time1.month;
	cout << "Input the day:";		cin >> time1.day;
	cout << "Input the hour:";	cin >> time1.hour;
	cout << "Input the minute:";	cin >> time1.minute;
	cout << "Input the second:";	cin >> time1.second;
	cout << "Now it is " << time1.year << " year " << time1.month 
		<< " month " << time1.day << " day " << time1.hour << " hour " 
		<< time1.minute << " minute " << time1.second << " second " << endl;
	return 0;
}
