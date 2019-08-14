#ifndef H_course
#define H_course
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
class course
{public:
    void setCourse(string cName, string cNo,char grade, int credits);//设置课程信息
    void print(bool isGrade);  				//打印课程信息
    int getCredits()					{return courseCredits;} 	//显示学分数
    void getCourseNumber(string& cNo)	{cNo = courseNo;}		//显示课程号
    char getGrade()						{	return courseGrade;} //显示成绩
	//重载运算符
	bool operator==(const course& right) const	{	return (courseNo == right.courseNo);}
	bool operator!=(const course& right) const	{	return (courseNo != right.courseNo);}
	bool operator<=(const course& right) const	{	return (courseNo <= right.courseNo);}
	bool operator<(const course& right) const	{	return (courseNo < right.courseNo);}
	bool operator>=(const course& right) const	{	return (courseNo >= right.courseNo);}
	bool operator>(const course& right) const	{	return (courseNo > right.courseNo);}
	//带默认值的构造函数
	course(string cName = "", string cNo = "", char grade = '*', int credits = 0);
private:
    string courseName; 	//存储课程名
    string courseNo; 		//存储课程编号
    char courseGrade;		//存储课程学分
    int courseCredits;		//存储课程成绩
};
#endif
