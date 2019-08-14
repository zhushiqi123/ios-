#if !defined _COMPLEX_H_
#define _COMPLEX_H__
#include <math.h>
class CComplex  //类声明
{public:
	CComplex();						//基本构造函数
	CComplex(double dblX, double dblY);	//指定值构造函数
	CComplex(const CComplex& other);	//拷贝构造函数
	virtual ~CComplex() {};				//析构函数
	void SetReal(double dblX);	//指定复数的实部
	void SetImag(double dblY);	//指定复数的虚部
	double GetReal();			//取复数的实部
	double GetImag();			//取复数的虚部
	CString ToString() const;	//将复数转化为"a+bj"形式的字符串
	//将"a,b"形式的字符串对转化为复数，以a为复数的实部，b为复数的虚部
	void FromString(CString s, const CString& sDelim = " ");	
	BOOL operator==(const CComplex& cpxX) const;
	BOOL operator!=(const CComplex& cpxX) const;
	CComplex& operator=(const CComplex& cpxX);
	CComplex operator+(const CComplex& cpxX) const;
	CComplex operator-(const CComplex& cpxX) const;
	CComplex operator*(const CComplex& cpxX) const;
	CComplex operator/(const CComplex& cpxX) const;
protected:
	double	m_dblX;		//复数的实部
	double	m_dblY;		//复数的虚部
};
#endif
