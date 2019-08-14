#include <iostream >
#include <ctime >
#include <conio.h>
using namespace std;
void main(void)
{	time_t start,end;
	start = time(NULL);
	cout << "请按Enter键!\n";
	for (;;)  { if (getch()=='\r') break; }
	end = time(NULL);
	cout << "按键前后相差:"<<difftime(end,start)<<" 秒";
}
