#include <iostream >
#include <ctime >
#include <conio.h>
using namespace std;
void main(void)
{	time_t start,end;
	start = time(NULL);
	cout << "�밴Enter��!\n";
	for (;;)  { if (getch()=='\r') break; }
	end = time(NULL);
	cout << "����ǰ�����:"<<difftime(end,start)<<" ��";
}
