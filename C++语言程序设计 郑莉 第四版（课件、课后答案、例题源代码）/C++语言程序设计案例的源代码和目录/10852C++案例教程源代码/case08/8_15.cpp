#include <iostream>
#include <iomanip>
using namespace std;
class Point 
{public:
	Point( int xValue = 0, int yValue = 0 ) : x( xValue ), y( yValue ){}; //Ĭ�Ϲ��캯��
	void setX ( int xValue )		{ x = xValue; }  	//����x ����
	int getX() const			{ return x;}  		//��ȡx����
	void setY( int yValue )		{ y = yValue; }  		//����y ����
	int getY() const			{ return y;}  		//��ȡy����
	void Disp() const  {cout << '[' << getX() << ", " << getY() << ']';};
private: 
	int x,y;  									// x,y ����
}; 
class Circle : public Point 						//Բ��
{public:
	Circle( int xValue= 0, int yValue= 0, double radiusValue= 0.0) : Point( xValue, yValue ) 
	{   setRadius( radiusValue );}
	void setRadius( double radiusValue ) 							//���ð뾶
	{	radius = ( radiusValue < 0.0 ? 0.0 : radiusValue );} 
	double getRadius() const{   return radius;}  					//��ȡ�뾶
	double getDiameter() const{   return 2 * getRadius();}       	//��ȡֱ��
	double getCircumference() const{   return 3.14159 * getDiameter();} //��ȡ�ܳ�
	double getArea() const{   return 3.14159 * getRadius() * getRadius();} //��ȡ���
	void Disp() const         				//���Բ����
	{	cout << "center = ";  Point::Disp(); 	//����Point���Disp����
		cout << "; radius = " << getRadius();
	}
private: 
	double radius;  // Բ�뾶
}; 
int main()
{  Point point( 30, 50 );
   Point *pointPtr = 0;    // ����ָ��
   Circle circle( 120, 89, 2.7 );
   Circle *circlePtr = 0;  //������ָ��
   pointPtr = &circle;
   int x=pointPtr->getX();  
   int y=pointPtr->getY();  
   double r=pointPtr->getRadius();//����
   double d=pointPtr->getDiameter();//����
   cout << endl;
   return 0;
} 

