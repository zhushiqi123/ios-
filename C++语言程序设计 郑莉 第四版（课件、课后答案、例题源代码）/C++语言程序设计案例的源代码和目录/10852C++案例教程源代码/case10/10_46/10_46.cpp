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
	string fName;		int ID;			//�洢ѧ������ID
	int noOfCourses;	char isPaid;	    //�洢�γ����洢Y/N,���ڱ�ʾ�Ƿ񽻹�ѧ��
	bool isTuitionPaid;	string cName;		//�洢true/false�Ϳγ���
	string cNo;	int credits;			//�洢�γ̺źͳɼ�
	char grade;						//�洢ѧ��
	vector<course> courses;	  			//�洢�γ���Ϣ����������
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
