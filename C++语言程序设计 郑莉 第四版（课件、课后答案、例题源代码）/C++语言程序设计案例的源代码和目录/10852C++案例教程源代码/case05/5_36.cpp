#include <iostream>
using namespace std;
class BBank;  //前向引用声明
class GBank;  //前向引用声明
class CBank   //声明中国银行类
{     int balance;
public :
      CBank()  { balance=0; } 			//默认构造函数
      CBank(int b)  { balance=b;  } 	//构造函数
      void getbalance()     {cout << "Input the savings in China Bank:";  cin >> balance;  }
      void disp()  {cout << "The savings in China Bank is:" << balance << endl;}
      friend void total(CBank, BBank, GBank) ;
};
class BBank                                //声明工商银行类
{     int balance;
public:
      BBank()  { balance=0;  }              //默认构造函数
      BBank(int b)  { balance=b;  }          //构造函数
      void getbalance() { cout << "Input the savings in Business Bank:"; cin >> balance; }
	   void disp()  {cout << "The savings in Business Bank is:"<< balance << endl;}
      friend void total(CBank, BBank, GBank) ;
 };
class GBank                                //声明农业银行类
{     int balance;
public :
     GBank()  { balance=0; }                //默认构造函数
     GBank(int b)  { balance=b; }            //构造函数
     void getbalance() 
     {cout << "Input the savings in Agriculture Bank:"; cin >> balance;   }
     void disp() 
     { cout << "The savings in Agriculture Bank is:" << balance << endl;  }
     friend void total(CBank, BBank, GBank) ;
};
void total(CBank A, BBank B, GBank C)
{ 	cout << "Total savings is:"<<  A.balance+B.balance+C.balance  << endl;}
int main()
{     CBank X(100) ;   	BBank Y;      GBank Z ;
      X.disp () ;      	Y.disp () ;      Z.disp ( ) ;
      Y.getbalance () ;      Z.getbalance () ;
      total (X, Y, Z) ;
	   return 0;
}
