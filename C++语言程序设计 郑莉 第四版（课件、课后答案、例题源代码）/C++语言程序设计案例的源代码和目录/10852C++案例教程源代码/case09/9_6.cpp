#include <iostream>
template <class T>
class FriendClass
{	T x;
public:
	friend FriendClass<T> operator+ (	FriendClass<T> s1, FriendClass<T> s2)//ÓÑÔªº¯Êý
	{	FriendClass<T> tmp; tmp.x=s1.x+s2.x;	return tmp;	}
	FriendClass() {}
	FriendClass(T i) {x=i;}
	void disp() {std::cout<<"The value of x is :"<<x<<"\n";}
};
int main()
{	FriendClass<int> s1(6),s2(8),s3;
	FriendClass<double> s4(6.6),s5(8.8),s6;
	s3=s1+s2;	s6=s4+s5;
	s3.disp();	s6.disp();
	return 0;
}
