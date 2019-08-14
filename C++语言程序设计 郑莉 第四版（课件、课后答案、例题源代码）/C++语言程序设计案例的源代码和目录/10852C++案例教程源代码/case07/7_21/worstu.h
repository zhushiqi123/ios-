//Student��Worker��WorStu��Ķ����ļ�WorStu.h
#if !defined  StuWorker
#define     StuWorker
#include  "person.h"
#include  <string>
using namespace std;

class  Student :virtual public Person 
{	char  *Department, *Speciality;		//ϵ���רҵ
	unsigned long   Number;				//ѧ��
	void  Init(char*, char*, unsigned long);	//�����������ڳ�ʼ�����ݳ�Ա
public:
	Student()    {Init(0, 0, 0L);}		//Ĭ�Ϲ��캯��
	Student(char*, int, char, char*, char*, unsigned long); 		//���캯��
    Student(Student&s) { Init(s.Department, s.Speciality, s.Number); }//�������캯��
    Student(char *d, char *s, unsigned long n) {Init(d, s, n);} 		//���صĹ��캯��
    ~Student()	{delete Department;	delete Speciality;	}		//��������
	void  SetDep(char*);				//����ϵ��
	void  SetSpec(char*);				//����רҵ
	void  SetNum(unsigned long num)   	//����ѧ��
     {Number = num;} 		
	char  *GetDep(char*);				//��ȡϵ��
	char  *GetSpec(char*);				//��ȡרҵ
	unsigned long   GetNum()    		//��ȡѧ��
    {return Number;} 			
};
class  Worker : virtual public Person
{	char  *Department, *Job; 			//���ź͹���
    void  Init(char*, char*);			//�����������ڳ�ʼ�����ݳ�Ա
public:
	Worker()    {Init(0, 0); }			//Ĭ�Ϲ��캯��
	Worker(char*, int, char, char*, char*);	//���캯��
	Worker(Worker &w) 					//�������캯��
    {Init(w.Department, w.Job);} 		
	Worker(char *d, char *j)   			//���صĹ��캯��
    { Init(d, j); }				
	~Worker()							//��������
    {	delete Department;	delete Job; }		
    void  SetDep(char*);				//���ò���
    void  SetJob(char*);				//���ù���
    char  *GetDep(char*);				//��ȡ����
    char  *GetJob(char*);				//��ȡ����
};
class  WorStu : public Worker, public Student  
{public:
    WorStu();										//Ĭ�Ϲ��캯��
    WorStu(WorStu &ws) : Worker(ws), Student(ws) { }	//�������캯��
    WorStu(char *name, int age, char gender, char *depw, char *job, char *deps, 
           char *spec, unsigned long num) 
           : Person(name, age, gender), Worker(depw, job), Student(deps, spec, num)  
    { }
};
#endif
