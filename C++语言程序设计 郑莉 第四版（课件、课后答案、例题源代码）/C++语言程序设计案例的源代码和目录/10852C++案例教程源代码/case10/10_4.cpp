#include <iostream> 
#include <utility> //包含对组头文件
#include <string>  
using namespace std;  
//使用pair类作为函数参数
void Func(pair<int, int> x) 		{cout<<"In Func: "<<x.first <<" "<<x.second<<endl;}  
void Func1(pair<int, char> x) 	{cout<<"In Func1: "<<x.first <<" "<<x.second<<endl; }  
void Func2(pair<int, string> x) 	{cout<<"In Func2: "<<x.first <<" "<<x.second<<endl; } 
void Func3(pair<int, char *> x) 	{cout<<"In Func3: "<<x.first<<" "<<x.second<<endl; } 
int main()
{   pair<int, double> x(50,87.67);    
	 cout<<"The data is: "<<x.first<<" "<<x.second<<endl;
    pair<string, string> name("ssh","zrf");
	 cout<<"The data is: "<<name.first<<" "<<name.second<<endl; 		
    pair<int, int> y;	  
    cout<<"The data is: "<<y.first<<" "<<y.second<<endl;	
    pair<string, string> name2;
    cout<<"The data is: "<<name2.first<<"---"<<name2.second<<endl;
	 Func(make_pair(75,80));
    Func1(make_pair(87,'H'));	    
    Func1(pair<int, char>(198,'#'));
    Func2(pair<int, string>(250,"China"));	
    Func2(make_pair(65,string("Hello World")));
    Func3(pair<int, char *>(35, "Welcome"));  
    Func3(make_pair(22, (char *)("Zhang")));
	 return 0;
}
