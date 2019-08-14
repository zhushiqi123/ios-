#include <iostream> 
using namespace std; 
class Rectangle 
{	int width, height; 
public: 
	Rectangle()		//��Ҫһ���޲����Ĺ��캯��
	{	width = height = 0; 
		cout << "Constructing " << width << " by " << height << " rectangle.\n"; 
	} 
	Rectangle(int w, int h) 
	{	width = w;     height = h; 
		cout << "Constructing " << width << " by " << height << " rectangle.\n"; 
	} 
	~Rectangle() { cout << "Destructing " << width << " by " << height << " rectangle.\n"; }  
	void set(int w, int h) { width = w; height = h;  } //���ú���
	int area() { return width * height;   } 
}; 
int main() 
{	Rectangle *p; 
	p = new Rectangle [3]; 							//���1����̬������������
	p[0].set(1, 2);  p[1].set(3, 4);  p[2].set(5, 6); 	//���2�����þ��εĸߺͿ�
	for(int i=0; i < 3; i++)  cout << "Area is " << p[i].area() << endl; 
	delete [] p; 									//���3���ͷŶ�������
	return 0; 
} 
