#include "course.h"
void course::setCourse(string cName, string cNo, char grade, int credits)
{	courseName = cName;	courseNo = cNo;
	courseGrade = grade;	courseCredits = credits;
}
void course::print(bool isGrade)
{	cout<<left <<setw(8)<<courseNo<<"   " <<setw(15)<<courseName;	
	cout.unsetf(ios::left);		cout<<setw(3)<<courseCredits<<"   ";	
	if(isGrade)				cout<<setw(4)<<courseGrade<<endl;
	else						cout<<setw(4)<<"***"<<endl;
}
course::course(string cName, string cNo, char grade, int credits)
{	courseName = cName;	courseNo =  cNo;
	courseGrade = grade;	courseCredits = credits;
}
