#include  <iostream>
#include  "WorStu.h"
using namespace std;
void  main()
{	WorStu ws("zrf",25, 'm', "Manager office", "Secretary","Computer Dep.",
                "Computer Science", 1234567);	//调用构造函数初始化数据成员
    char  str[80];
    cout << "Name: " << ws.GetName(str) << '\t' << "Age: " << ws.GetAge() << '\t'
         << "Gender: " << ws.GetGender() << endl;
    cout<< "Work Dep.: "<<ws.Worker::GetDep(str)<<'\t'<<"Job: "<<ws.GetJob(str)<< endl;
    cout << "College Dep.: " << ws.Student::GetDep(str) << '\t'; 
    cout << "Speciality: " << ws.GetSpec(str) << endl;
    cout << "Student Code: " << ws.GetNum()<< endl;
}
