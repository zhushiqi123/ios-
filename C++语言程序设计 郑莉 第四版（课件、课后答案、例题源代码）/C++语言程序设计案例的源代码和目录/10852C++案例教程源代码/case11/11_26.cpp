#include <iostream>
#include <fstream>
#include <string>
using namespace std;
const int N=2;
class Student
{	int no;  	char name [10] ;	int degree;           //学号/姓名/成绩
public :
	Student () { }
	void setvalue(int n, char na[],int d)	{	no=n; strcpy (name, na) ; degree=d;	}
	void disp()	{	cout << no << '\t'<< name << '\t' << degree << endl;     }
};
void main()
{	int i, n,d;	char na[10];	Student obj [N],s;
	fstream iofile;	iofile.open("data.dat",ios::in|ios::out) ;
	for (i=0 ; i<N; i++)
	{	cout << "Input " << i+1 << " Student data:" << endl;
		cout << "number, name ,score:";cin >> n >> na >> d;
		obj [i].setvalue(n,na,d) ;
	}
	for (i=0 ; i<N; i++)		iofile.write((char *) &obj [i],sizeof(obj [i])) ;
	iofile.seekp(0,ios::beg);			//使用函数seekp()将文件指针置于文件头
	cout << "number\t name\t score" << endl;
	for (i=0; i<N; i++)	{ iofile.read((char *) &s,sizeof(s)) ; s.disp () ;	}
	iofile.close() ;
}
