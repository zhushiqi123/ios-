#include <iostream>
using namespace std;
void Transform(int n,int base)
{  int num[20],i=0,j,m=n;
   do
   {  i++;
	 num[i]=m%base;	// ��������
	 m=m/base;		
}while (m!=0);
cout<<"**"<<n<<"ת��Ϊ"<<base<<"���ƵĽ��Ϊ��";
for (j=i;j>=1;j--)                  // ���������з������
  if (num[j]<10)	cout<<num[j];      // �����0-9������ֱ���������
  else  cout<<char(num[j]+'A'-10);  // ����Ǵ���9��������ת��Ϊ�ַ����
cout<<endl;
}
int main()
{  int n,choice;
   cout<<"����һ��������";	cin>>n;
   do
   {  cout<<"������Ҫת���Ľ��ƣ�2-9,16,32������0�˳���";
	 cin>>choice;
	 switch(choice)
	 {  case 2: Transform(n,2);		break;
	    case 3: Transform(n,3);		break;
	    case 4: Transform(n,4);		break;
	    case 5: Transform(n,5);		break;
	    case 6: Transform(n,6);		break;
	    case 7: Transform(n,7);		break;
	    case 8: Transform(n,8);		break;
	    case 9: Transform(n,9);		break;
	    case 16: Transform(n,16);	break;
	    case 32: Transform(n,32);	break;
	    case 0: break;
	    default: cout<<"�������"<<endl;
	}
}while(choice!=0);
return 0;
}
