#include "MiniComplex.h"
bool MiniComplex::operator==(const MiniComplex& otherComplex) const
{	return(realPart == otherComplex.realPart &&imagPart == otherComplex.imagPart);}
MiniComplex::MiniComplex(double real, double imag){  realPart = real;	imagPart = imag;}
MiniComplex MiniComplex::operator+ (const MiniComplex& otherComplex) const
{	MiniComplex temp;
	temp.realPart = realPart + otherComplex.realPart;
	temp.imagPart = imagPart + otherComplex.imagPart;
	return temp;
}
MiniComplex MiniComplex::operator- (const MiniComplex& otherComplex) const
{	MiniComplex temp;
	temp.realPart = realPart - otherComplex.realPart;
	temp.imagPart = imagPart - otherComplex.imagPart;
	return temp;
}
MiniComplex MiniComplex::operator* (const MiniComplex& otherComplex) const
{MiniComplex temp;
	temp.realPart = (realPart * otherComplex.realPart) -(imagPart * otherComplex.imagPart);
	temp.imagPart = (realPart * otherComplex.imagPart)+ (imagPart * otherComplex.realPart);
	return temp;
}
MiniComplex MiniComplex::operator/ (const MiniComplex& otherComplex) const
{ MiniComplex temp;	float tt;
 tt=1/(otherComplex.realPart*otherComplex.realPart+otherComplex.imagPart*otherComplex.imagPart);
 temp.realPart=((realPart*otherComplex.realPart)+(imagPart* otherComplex.imagPart))*tt;
 temp.imagPart=((imagPart * otherComplex.realPart) -(realPart * otherComplex.imagPart))*tt;
 return temp;
}
