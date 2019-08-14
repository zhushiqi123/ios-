#include <iostream>
using namespace std;
int main()
{	int year,month,days=0;
	cout<<"Input year and month:";  cin>>year>>month;
	switch (month) 							//每个case分支均没有break语句 
	{	case 12: days +=31;
		case 11: days +=30; 
		case 10: days +=31;
		case  9: days +=30;
		case  8: days +=31;
		case  7: days +=31;
		case  6: days +=30;
		case  5: days +=31;
		case  4: days +=30;
		case  3: days +=31; 
		case  2: 								//判断是否为闰年
			if (year % 4==0 && year % 100!=0 || year %400==0)
           days +=29;
			else
           days +=28;
		case  1: days +=31;
	}
	if (days==0)	  	cout<< "Wrong month"<<endl;
	else	  		cout << "Total days is:" <<days<< endl;
	return 0;
}
