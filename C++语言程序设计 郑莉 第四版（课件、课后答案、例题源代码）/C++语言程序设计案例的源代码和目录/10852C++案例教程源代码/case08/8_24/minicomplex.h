#ifndef H_MiniComplex
#define H_MiniComplex
#include <iostream>
using namespace std;
class MiniComplex
{public:
	//�������������ȡ�����
	friend ostream& operator<<(ostream& osObject, const MiniComplex& complex)
	{	osObject<<"("<<complex.realPart<<"+ "<<complex.imagPart<<"i"<<")";
		return osObject;			
	}
	friend istream& operator>> (istream& isObject, MiniComplex& complex)
	{	char ch;
		isObject >>complex.realPart>>ch>>complex.imagPart>>ch;
		return isObject;			
	}
    MiniComplex(double real = 0, double imag = 0);  			//���캯��
    MiniComplex operator+(const MiniComplex& otherComplex) const; //��������� +
    MiniComplex operator-(const MiniComplex& otherComplex) const; //��������� +
    MiniComplex operator*(const MiniComplex& otherComplex) const; //��������� *
    MiniComplex operator/(const MiniComplex& otherComplex) const; //��������� *
    bool operator==(const MiniComplex& otherComplex) const;//���������  ==
private:
    double realPart; //�洢ʵ������
    double imagPart; //�洢�鲿����
};
#endif

