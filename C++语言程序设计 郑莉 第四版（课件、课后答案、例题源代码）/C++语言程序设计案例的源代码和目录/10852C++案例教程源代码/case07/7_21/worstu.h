//Student、Worker和WorStu类的定义文件WorStu.h
#if !defined  StuWorker
#define     StuWorker
#include  "person.h"
#include  <string>
using namespace std;

class  Student :virtual public Person 
{	char  *Department, *Speciality;		//系别和专业
	unsigned long   Number;				//学号
	void  Init(char*, char*, unsigned long);	//辅助函数用于初始化数据成员
public:
	Student()    {Init(0, 0, 0L);}		//默认构造函数
	Student(char*, int, char, char*, char*, unsigned long); 		//构造函数
    Student(Student&s) { Init(s.Department, s.Speciality, s.Number); }//拷贝构造函数
    Student(char *d, char *s, unsigned long n) {Init(d, s, n);} 		//重载的构造函数
    ~Student()	{delete Department;	delete Speciality;	}		//析构函数
	void  SetDep(char*);				//设置系别
	void  SetSpec(char*);				//设置专业
	void  SetNum(unsigned long num)   	//设置学号
     {Number = num;} 		
	char  *GetDep(char*);				//获取系别
	char  *GetSpec(char*);				//获取专业
	unsigned long   GetNum()    		//获取学号
    {return Number;} 			
};
class  Worker : virtual public Person
{	char  *Department, *Job; 			//部门和工作
    void  Init(char*, char*);			//辅助函数用于初始化数据成员
public:
	Worker()    {Init(0, 0); }			//默认构造函数
	Worker(char*, int, char, char*, char*);	//构造函数
	Worker(Worker &w) 					//拷贝构造函数
    {Init(w.Department, w.Job);} 		
	Worker(char *d, char *j)   			//重载的构造函数
    { Init(d, j); }				
	~Worker()							//析构函数
    {	delete Department;	delete Job; }		
    void  SetDep(char*);				//设置部门
    void  SetJob(char*);				//设置工作
    char  *GetDep(char*);				//获取部门
    char  *GetJob(char*);				//获取工作
};
class  WorStu : public Worker, public Student  
{public:
    WorStu();										//默认构造函数
    WorStu(WorStu &ws) : Worker(ws), Student(ws) { }	//拷贝构造函数
    WorStu(char *name, int age, char gender, char *depw, char *job, char *deps, 
           char *spec, unsigned long num) 
           : Person(name, age, gender), Worker(depw, job), Student(deps, spec, num)  
    { }
};
#endif
