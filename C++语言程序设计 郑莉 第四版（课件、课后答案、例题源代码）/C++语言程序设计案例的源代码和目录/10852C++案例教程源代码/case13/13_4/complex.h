#if !defined _COMPLEX_H_
#define _COMPLEX_H__
#include <math.h>
class CComplex  //������
{public:
	CComplex();						//�������캯��
	CComplex(double dblX, double dblY);	//ָ��ֵ���캯��
	CComplex(const CComplex& other);	//�������캯��
	virtual ~CComplex() {};				//��������
	void SetReal(double dblX);	//ָ��������ʵ��
	void SetImag(double dblY);	//ָ���������鲿
	double GetReal();			//ȡ������ʵ��
	double GetImag();			//ȡ�������鲿
	CString ToString() const;	//������ת��Ϊ"a+bj"��ʽ���ַ���
	//��"a,b"��ʽ���ַ�����ת��Ϊ��������aΪ������ʵ����bΪ�������鲿
	void FromString(CString s, const CString& sDelim = " ");	
	BOOL operator==(const CComplex& cpxX) const;
	BOOL operator!=(const CComplex& cpxX) const;
	CComplex& operator=(const CComplex& cpxX);
	CComplex operator+(const CComplex& cpxX) const;
	CComplex operator-(const CComplex& cpxX) const;
	CComplex operator*(const CComplex& cpxX) const;
	CComplex operator/(const CComplex& cpxX) const;
protected:
	double	m_dblX;		//������ʵ��
	double	m_dblY;		//�������鲿
};
#endif
