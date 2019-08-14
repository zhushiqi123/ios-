//Person类的实现文件person.cpp
#include <string>
#include "person.h"
using namespace std;
void  Person :: CopyName(char *str)
{	Name = new char[strlen(str) + 1];  strcpy(Name, str);}
Person :: Person(char *name, int age, char gender)
{	CopyName(name);  Age = age; Gender = (gender == 'm' ? 0 : 1); }
Person :: Person(Person &p)  
{ CopyName(p.Name); Age = p.Age; Gender = p.Gender;}
void Person :: SetName(char *name)  
{ if(Name) delete Name; CopyName(name);}
char  *Person :: GetName(char *str)
{	strcpy(str, Name);	return str;  }
void  Person :: Show()
{	char  str[81];
	cout << "Name: " << GetName(str) << '\t' << "Age: " << GetAge()
         << '\t' << "Gender: " << GetGender() << endl;
}
