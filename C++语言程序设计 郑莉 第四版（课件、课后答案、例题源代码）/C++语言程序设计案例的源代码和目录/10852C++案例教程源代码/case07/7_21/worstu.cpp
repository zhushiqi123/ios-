//Student、Worker和WorStu类的实现文件 WorStu.cpp
#include  "WorStu.h"
void  Worker :: Init(char *dep, char *job)
{	Department = new char[strlen(dep) + 1];	strcpy(Department, dep);
	Job = new char[strlen(job) + 1];	strcpy(Job, job);
}
Worker::Worker(char *name, int age, char gender, char *dep, char *job) 	
              : Person(name, age, gender)
{	Init(dep, job);}
void Worker :: SetDep(char *dep)
{	if(Department)		delete Department;
	Department = new char[strlen(dep) + 1];	strcpy(Department, dep);
}
void  Worker::SetJob(char *job)
{	if(Job)		delete Job;
	Job = new char[strlen(job) + 1];	strcpy(Job, job);
}
char  *Worker::GetDep(char *buff){	strcpy(buff, Department);	return buff;}
char  *Worker :: GetJob(char *buff){	strcpy(buff, Job); 	return buff;}
void  Student :: Init(char *dep, char *spec, unsigned long num)
{	Department = new char[strlen(dep) + 1];	strcpy(Department, dep);
    Speciality = new char[strlen(spec) + 1];    strcpy(Speciality, spec);
    Number =num;
}
Student::Student(char *name, int age, char gender, char *dep, char *spec, unsigned long num)
                : Person(name, age, gender)		
{     Init(dep, spec, num);}
void  Student :: SetDep(char *dep)
{	if(Department)		delete Department;
	Department = new char[strlen(dep) + 1];	strcpy(Department, dep);
}
void  Student :: SetSpec(char *spec)
{	if(Speciality)  delete Speciality;
	Speciality = new char[strlen(spec) + 1];	
     strcpy(Speciality, spec);
}
char  *Student :: GetDep(char *buff){	strcpy(buff, Department);	return buff;}
char  *Student :: GetSpec(char *buff){	strcpy(buff, Speciality);	return buff;}

