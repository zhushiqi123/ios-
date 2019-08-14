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
	void print() const				{	cout<<names;} 	//�������
	void setName(string namestr)		{	names = namestr;}	//��������
	void getName(string& namestr)	{	namestr = names;}	//��ȡ����
	person(string namestr)			{	names = namestr;}	//���캯��
  	person()						{	names = "";	} 	//Ĭ�Ϲ��캯��
private:
	string names; //�洢��
};
class student: public person //���м̳�
{public:
    void setInfo(string fname, int ID,bool isTPaid,vector<course> courses);//����ѧ����Ϣ
    void print(double tuitionRate);			//�����Ϣ
    student();								//Ĭ�Ϲ��캯��
    int getHoursEnrolled();					//��ȡע����Ϣ
    double getGpa();						//��ȡGPA
    double billingAmount(double tuitionRate);	//����Ӧ��ѧ��
private:
    int sId;				//�洢ѧ��ID
    int numberOfCourses;	//�洢�γ̱�� 
    bool isTuitionPaid;		//�Ƿ񽻹�ѧ��
    vector<course> coursesEnrolled; //�洢ע��Ŀγ� 
};
#endif
