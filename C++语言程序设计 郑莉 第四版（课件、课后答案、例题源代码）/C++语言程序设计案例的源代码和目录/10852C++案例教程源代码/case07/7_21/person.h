//Person��Ķ����ļ�person.h
#if !defined  _PERSON_H
#define     _PERSON_H
#include <iostream>
using namespace std;
class  Person 						//��Ա��Ϣ��
{	char  		*Name;				//����
	unsigned    	Age : 7;				//����
	unsigned     Gender : 1;			//�Ա�
	void  CopyName(char*);				//�����������ڿ�������
public:
	Person(char*, int, char);			//���캯��
	Person(Person&);					//�������캯��
	Person()	{Name = 0; Age = 0; Gender = 0;} //Ĭ�Ϲ��캯��
	~Person() { delete Name; }			//��������
    void  SetName(char*);				//������������
    void  SetAge(int age) {Age = age;} 	//�������亯��
    void  SetGender(char gender)  		//�����Ա���
    {Gender = (gender == 'm' ? 0 : 1);}
    char  *GetName(char*);				//��ȡ��������
    int   GetAge() {return Age; }		//��ȡ���亯��
    char  GetGender(){return(Gender == 0 ?'m':'f');} //��ȡ�Ա���
    void  Show();						//��ʾ��Ա��Ϣ
};
#endif
