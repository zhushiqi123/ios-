#include <iostream>  
using namespace std;
int main()
{	enum Day { SUN, MON, TUE, WED, THU, FRI, SAT };		//����ö������
	float high[SAT+1] = {80.0, 90.0, 91.0, 80.9, 90.4, 90.5, 80.7};	//ʹ��ö������
	for (int day = SUN; day <= SAT; day++)
		cout << "The high temperature for day " << day<< " was " << high[day] << endl;
	return 0;
}
