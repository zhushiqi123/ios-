#include <iostream>
using namespace std;
class Person
{public:
	Person(const char* s) 					//�������Ĺ��캯��
     { name = new char[strlen(s)+1]; strcpy(name, s); }
	~Person() { delete [] name; }			//����������������
	char *GetName() { return name;}
 protected:
	char* name;
};
class Student : public Person
{	char* major;
public:
	Student(const char* s, const char* m) : Person(s)//�����๹�캯��
	{ major = new char[strlen(m)+1]; strcpy(major, m); }
	~Student() { delete [] major; }			//����������������������
	char *GetMajor() { return major;}
};
int main()
{	Student stu("ZRF", "Materials");
	cout<<"Student Name is:"<<stu.GetName()<<", Major is:"<<stu.GetMajor()<<endl;
	return 0;
}
