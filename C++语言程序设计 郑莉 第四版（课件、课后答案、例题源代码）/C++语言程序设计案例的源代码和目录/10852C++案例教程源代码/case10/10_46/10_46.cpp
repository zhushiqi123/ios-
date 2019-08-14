#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include "student.h"
using namespace std;
int main()
{	vector<student> stuList;	double tuitionRate;	ifstream infile;
	infile.open("GradeData.txt");
	if(!infile)	{  cout<<"Input file does not exist."<<endl; return 1;	}
	infile>>tuitionRate;	
	string fName;		int ID;			//存储学生名和ID
	int noOfCourses;	char isPaid;	    //存储课程数存储Y/N,用于表示是否交过学费
	bool isTuitionPaid;	string cName;		//存储true/false和课程名
	string cNo;	int credits;			//存储课程号和成绩
	char grade;						//存储学分
	vector<course> courses;	  			//存储课程信息的向量对象
	course cTemp;		student sTemp;
	infile>>fName;
	while(infile) 
	{	infile>>ID>>isPaid;
		if(isPaid == 'Y')	isTuitionPaid = true;
		else 			isTuitionPaid = false;
		infile>>noOfCourses; courses.clear();
		for(int i = 0; i < noOfCourses; i++)
		{	infile>>cName>>cNo>>credits>>grade;	
			cTemp.setCourse(cName, cNo, grade, credits);	
			courses.push_back(cTemp);
		}
		sTemp.setInfo(fName, ID, isTuitionPaid, courses);
		stuList.push_back(sTemp);
		infile>>fName;	
   }
    for(int count = 0; count < stuList.size(); count++)  
       stuList[count].print(tuitionRate);
	infile.close();
	return 0;
}
