#ifndef H_student
#define H_student
#include <iostream>
#include <iomanip>
#include <fstream>
#include <algorithm>
#include <string>
#include <vector>
#include "course.h"
using namespace std;
class person
{public:
	void print() const				{	cout<<names;} 	//输出姓名
	void setName(string namestr)		{	names = namestr;}	//设置姓名
	void getName(string& namestr)	{	namestr = names;}	//获取姓名
	person(string namestr)			{	names = namestr;}	//构造函数
  	person()						{	names = "";	} 	//默认构造函数
private:
	string names; //存储名
};
class student: public person //公有继承
{public:
    void setInfo(string fname, int ID,bool isTPaid,vector<course> courses);//设置学生信息
    void print(double tuitionRate);			//输出信息
    student();								//默认构造函数
    int getHoursEnrolled();					//获取注册信息
    double getGpa();						//获取GPA
    double billingAmount(double tuitionRate);	//计算应交学费
private:
    int sId;				//存储学生ID
    int numberOfCourses;	//存储课程编号 
    bool isTuitionPaid;		//是否交过学费
    vector<course> coursesEnrolled; //存储注册的课程 
};
#endif
