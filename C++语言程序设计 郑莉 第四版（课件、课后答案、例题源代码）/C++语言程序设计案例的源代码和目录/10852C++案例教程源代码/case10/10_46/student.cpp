#include "student.h"
using namespace std;
//设置学生信息
void student::setInfo(string fName, int ID, bool isTPaid, vector<course> courses)
{	person::setName(fName); 			//设置姓名 
	sId = ID;							//设置学生ID
	isTuitionPaid = isTPaid;				//设置是否交过学费
	numberOfCourses = courses.size();	//设置课程数
	coursesEnrolled = courses;			//设置注册的课程
	sort(coursesEnrolled.begin(), coursesEnrolled.end());//根据课程排序
}
student::student(){	numberOfCourses = 0; sId = 0; isTuitionPaid = false;}
void student::print(double tuitionRate)
{	cout<<"Student Name: ";		person::print();
	cout<<"\t ID: "<<sId<<endl;	
	cout<<"Number of courses enrolled: "<<numberOfCourses<<endl;
	cout<<left<<"Course No"<<setw(15)<<"  Course Name"
<<setw(8)<<"Credits"<<setw(6)<<"Grade"<<endl;	
	cout.unsetf(ios::left);
	for(int i = 0; i < numberOfCourses; i++)
	      coursesEnrolled[i].print(isTuitionPaid);
	cout<<"Total number of credit hours: "<<getHoursEnrolled()<<endl;	
	cout<<fixed<<showpoint<<setprecision(2);
	if(isTuitionPaid)	   cout<<"Midsemester GPA: "<<getGpa()<<endl;
	else
	{   cout<<"*** Grades are being held for not paying "<<"the tuition. ***"<<endl;
	    cout<<"Amount Due: "<<billingAmount(tuitionRate)<<" Yuan\n";
	}
	cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"<<endl;
}
int student::getHoursEnrolled()
{	int totalCredits = 0, i;
	for(i = 0; i < numberOfCourses; i++)
       totalCredits += coursesEnrolled[i].getCredits();
	return totalCredits;
}
double student::billingAmount(double tuitionRate)
{	return tuitionRate * getHoursEnrolled();}
double student::getGpa()
{	double sum = 0.0;
	for(int i = 0; i < numberOfCourses; i++)
	{	switch(coursesEnrolled[i].getGrade())
		{case 'A': sum += coursesEnrolled[i].getCredits() * 4;  break;
		case 'B': sum += coursesEnrolled[i].getCredits() * 3;  break;
		case 'C': sum += coursesEnrolled[i].getCredits() * 2;  break;
		case 'D': sum += coursesEnrolled[i].getCredits() * 1;  break;
		case 'F': sum += coursesEnrolled[i].getCredits() * 0;  break;
		default: cout<<"Invalid Course Grade"<<endl;
		}
	}
	return sum / getHoursEnrolled();
}
