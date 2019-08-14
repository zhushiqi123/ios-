//Person类的定义文件person.h
#if !defined  _PERSON_H
#define     _PERSON_H
#include <iostream>
using namespace std;
class  Person 						//人员信息类
{	char  		*Name;				//姓名
	unsigned    	Age : 7;				//年龄
	unsigned     Gender : 1;			//性别
	void  CopyName(char*);				//辅助函数用于拷贝姓名
public:
	Person(char*, int, char);			//构造函数
	Person(Person&);					//拷贝构造函数
	Person()	{Name = 0; Age = 0; Gender = 0;} //默认构造函数
	~Person() { delete Name; }			//析构函数
    void  SetName(char*);				//设置姓名函数
    void  SetAge(int age) {Age = age;} 	//设置年龄函数
    void  SetGender(char gender)  		//设置性别函数
    {Gender = (gender == 'm' ? 0 : 1);}
    char  *GetName(char*);				//获取姓名函数
    int   GetAge() {return Age; }		//获取年龄函数
    char  GetGender(){return(Gender == 0 ?'m':'f');} //获取性别函数
    void  Show();						//显示人员信息
};
#endif
