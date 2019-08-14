#include <iostream>
#include <iomanip>
using namespace std;
struct student   					     //学生信息结构体
{   int num;
    char name[20];
    char gender;
    int age; 
}stu1={1001,"Zhang San",'M',19};
int main()
{	student stu2={1002,"Li Si",'M',20};		//声明结构体变量并初始化
	student stu3={1003,"Wang Hong",'F',22};	//声明结构体变量并初始化
   cout<<setw(7)<<stu1.num<<setw(20)<<stu1.name<<setw(3)<<stu1.gender<<setw(3)<<stu1.age<<endl;
	cout<<setw(7)<<stu2.num<<setw(20)<<stu2.name<<setw(3)<<stu2.gender<<setw(3)<<stu2.age<<endl;
	cout<<setw(7)<<stu3.num<<setw(20)<<stu3.name<<setw(3)<<stu3.gender<<setw(3)<<stu3.age<<endl;
	return 0;
}
