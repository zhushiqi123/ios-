#include "stdafx.h"
#include "Complex.h"
CComplex::CComplex() {	m_dblX = 0.0;	 m_dblY = 0.0;}
CComplex::CComplex(double dblX, double dblY){	m_dblX = dblX;	m_dblY = dblY;}
CComplex::CComplex(const CComplex& other)
{	m_dblX = other.m_dblX;	m_dblY = other.m_dblY;}
void CComplex::SetReal(double dblX){	m_dblX = dblX;}
void CComplex::SetImag(double dblY){	m_dblY = dblY;}
double CComplex::GetReal(){	return m_dblX;}
double CComplex::GetImag(){	return m_dblY;}
CString CComplex::ToString() const
{	CString s;
	if (m_dblX != 0.0)
	{	if (m_dblY > 0)				s.Format("%f + %fj", m_dblX, m_dblY);
		else if (m_dblY < 0)			s.Format("%f - %fj", m_dblX, fabs(m_dblY));
		else							s.Format("%f", m_dblX);
	}
	else
	{	if (m_dblY > 0)				s.Format("%fj", m_dblY);
		else if (m_dblY < 0)			s.Format("-%fj", fabs(m_dblY));
		else							s.Format("%f", m_dblX);
	}
	return s;
}
void CComplex::FromString(CString s, const CString& sDelim /*= " "*/)
{	int nPos = s.Find(sDelim);
	if (nPos == -1)	{s.TrimLeft();	s.TrimRight();		m_dblX = atof(s);		m_dblY = 0;	}
	else
	{	int nLen = s.GetLength();
		CString sLeft = s.Left(nPos);		CString sRight = s.Right(nLen - nPos - 1);
		sLeft.TrimLeft();		sRight.TrimRight();
		m_dblX = atof(sLeft);		m_dblY = atof(sRight);
	}
}
BOOL CComplex::operator==(const CComplex& cpxX) const
{	return (m_dblX == cpxX.m_dblX && m_dblY == cpxX.m_dblY); }
BOOL CComplex::operator!=(const CComplex& cpxX) const
{	return (m_dblX != cpxX.m_dblX || m_dblY != cpxX.m_dblY); }
CComplex& CComplex::operator=(const CComplex& cpxX)
{	m_dblX = cpxX.m_dblX;	m_dblY = cpxX.m_dblY;	return *this;}
CComplex CComplex::operator+(const CComplex& cpxX) const
{	double x = m_dblX + cpxX.m_dblX;	double y = m_dblY + cpxX.m_dblY;
	return CComplex(x, y);
}
CComplex CComplex::operator-(const CComplex& cpxX) const
{	double x = m_dblX - cpxX.m_dblX;	double y = m_dblY - cpxX.m_dblY;
	return CComplex(x, y);
}
CComplex CComplex::operator*(const CComplex& cpxX) const
{   double x = m_dblX * cpxX.m_dblX - m_dblY * cpxX.m_dblY;
    double y = m_dblX * cpxX.m_dblY + m_dblY * cpxX.m_dblX;
	return CComplex(x, y);
}
CComplex CComplex::operator/(const CComplex& cpxX) const
{   double e, f, x, y;
    if (fabs(cpxX.m_dblX) >= fabs(cpxX.m_dblY))
	{   e = cpxX.m_dblY / cpxX.m_dblX;        f = cpxX.m_dblX + e * cpxX.m_dblY;
        x = (m_dblX + m_dblY * e) / f;        	y = (m_dblY - m_dblX * e) / f;
	}
    else
    {	e = cpxX.m_dblX / cpxX.m_dblY;        f = cpxX.m_dblY + e * cpxX.m_dblX;
        x = (m_dblX * e + m_dblY) / f;        	y = (m_dblY * e - m_dblX) / f;
    }
	return CComplex(x, y);
}
