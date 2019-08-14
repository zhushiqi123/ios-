#ifndef H_course
#define H_course
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
class course
{public:
    void setCourse(string cName, string cNo,char grade, int credits);//���ÿγ���Ϣ
    void print(bool isGrade);  				//��ӡ�γ���Ϣ
    int getCredits()					{return courseCredits;} 	//��ʾѧ����
    void getCourseNumber(string& cNo)	{cNo = courseNo;}		//��ʾ�γ̺�
    char getGrade()						{	return courseGrade;} //��ʾ�ɼ�
	//���������
	bool operator==(const course& right) const	{	return (courseNo == right.courseNo);}
	bool operator!=(const course& right) const	{	return (courseNo != right.courseNo);}
	bool operator<=(const course& right) const	{	return (courseNo <= right.courseNo);}
	bool operator<(const course& right) const	{	return (courseNo < right.courseNo);}
	bool operator>=(const course& right) const	{	return (courseNo >= right.courseNo);}
	bool operator>(const course& right) const	{	return (courseNo > right.courseNo);}
	//��Ĭ��ֵ�Ĺ��캯��
	course(string cName = "", string cNo = "", char grade = '*', int credits = 0);
private:
    string courseName; 	//�洢�γ���
    string courseNo; 		//�洢�γ̱��
    char courseGrade;		//�洢�γ�ѧ��
    int courseCredits;		//�洢�γ̳ɼ�
};
#endif
