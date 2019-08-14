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
	void createfile();
};
CStudent::CStudent()
{	file.open("student.bin",ios::out|ios::binary);
	if(file.fail()){ cout<<"can not create file"<<endl;	 return;	}
}
CStudent::~CStudent(){	file.close();}
void CStudent::createfile()
{	char yn;	cout<<"input the next record?(Y/N)?";	cin>>yn;
	while(yn=='Y'||yn=='y')
	{	cout<<"Name:(use ; to end)";
		for(int i=0;i<20;i++)
          { cin>>srec.name[i];
 		   if(srec.name[i]==';')	break;
          }
		srec.name[i]='\0';
		cout<<"gender(m/f):";	 cin>>srec.gender;
		cout<<"Age:";	 cin>>srec.age;
		cout<<"Average score:";	 cin>>srec.avescore;
		file.write((char*)&srec,sizeof(srec));
		cout<<"To input next record?(Y/N)"; cin>>yn;
	}
}
void main(){	CStudent student;	student.createfile();}
