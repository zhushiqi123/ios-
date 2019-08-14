#include <iostream>
#include <fstream>
using namespace std;
class CStudent
{	struct student 
     {  char name[20];	
        char gender;		
        int age;		
        float avescore;
	}srec;
	fstream file;
public:
	CStudent();
	~CStudent();
	void printfile();
};
CStudent::CStudent()
{	file.open("student.bin",ios::in|ios::binary);
	if(file.fail())	{	cout<<"can not create file"<<endl;		return;	}
}
CStudent::~CStudent(){	file.close();}
void CStudent::printfile()
{	file.read((char*)&srec,sizeof(srec));
	while(!file.eof())
	{	cout<<"Name:"<<srec.name<<"," <<"Gender :"<<srec.gender<<",";
		cout<<"Age :"<<srec.age<<"," <<"Average Score:"<<srec.avescore<<endl;
		file.read((char*)&srec,sizeof(srec));
	}
}
void main(){	CStudent student;	student.printfile();}
