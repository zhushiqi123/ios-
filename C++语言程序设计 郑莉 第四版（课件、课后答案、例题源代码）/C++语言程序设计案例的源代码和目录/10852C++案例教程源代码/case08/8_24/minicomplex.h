#ifndef H_MiniComplex
#define H_MiniComplex
#include <iostream>
using namespace std;
class MiniComplex
{public:
	//重载流插入和提取运算符
	friend ostream& operator<<(ostream& osObject, const MiniComplex& complex)
	{	osObject<<"("<<complex.realPart<<"+ "<<complex.imagPart<<"i"<<")";
		return osObject;			
	}
	friend istream& operator>> (istream& isObject, MiniComplex& complex)
	{	char ch;
		isObject >>complex.realPart>>ch>>complex.imagPart>>ch;
		return isObject;			
	}
    MiniComplex(double real = 0, double imag = 0);  			//构造函数
    MiniComplex operator+(const MiniComplex& otherComplex) const; //重载运算符 +
    MiniComplex operator-(const MiniComplex& otherComplex) const; //重载运算符 +
    MiniComplex operator*(const MiniComplex& otherComplex) const; //重载运算符 *
    MiniComplex operator/(const MiniComplex& otherComplex) const; //重载运算符 *
    bool operator==(const MiniComplex& otherComplex) const;//重载运算符  ==
private:
    double realPart; //存储实部变量
    double imagPart; //存储虚部变量
};
#endif

