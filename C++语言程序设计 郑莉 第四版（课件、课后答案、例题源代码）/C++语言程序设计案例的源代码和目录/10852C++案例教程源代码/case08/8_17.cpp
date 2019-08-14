#include <iostream>
using namespace std;
class Person
{public:
  Person(char* s)   {   name = new char[strlen(s)+1];   strcpy(name, s);   }
  virtual void Disp() { cout << "My name is " << name << ".\n"; }//声明虚函数
protected:
  char* name;
};
class Student : public Person
{public:
	Student(char* s, float g) : Person(s), gpa(g) { }
	void Disp()  { cout << "my name is " << name << " and my G.P.A. is " << gpa << ".\n"; }
private:
	float gpa;
};
class Professor : public Person
{public:
	Professor(char* s, int n) : Person(s), publs(n) { }
	void Disp() {cout<< "My name is "<<name<<"，I have " << publs << " publications.\n";  }
private:
	int publs;
};
int main()
{	Person* p, x("zrf");
	p = &x; p->Disp();//将基类对象地址赋给基类指针
	Student y("ssh", 3.88);
	p = &y; p->Disp();//将派生类对象y地址赋给基类指针
	Professor z("zzz", 8);
	p = &z; p->Disp();//将派生类对象z地址赋给基类指针
	return 0;
} 
