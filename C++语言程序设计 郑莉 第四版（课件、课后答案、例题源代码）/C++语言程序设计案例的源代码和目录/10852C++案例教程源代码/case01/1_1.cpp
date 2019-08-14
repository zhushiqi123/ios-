#include <iostream>
using namespace std;
void Transform(int n,int base)
{  int num[20],i=0,j,m=n;
   do
   {  i++;
	 num[i]=m%base;	// 保存余数
	 m=m/base;		
}while (m!=0);
cout<<"**"<<n<<"转换为"<<base<<"进制的结果为：";
for (j=i;j>=1;j--)                  // 将余数序列反序输出
  if (num[j]<10)	cout<<num[j];      // 如果是0-9数字则直接输出数字
  else  cout<<char(num[j]+'A'-10);  // 如果是大于9的数字则转化为字符输出
cout<<endl;
}
int main()
{  int n,choice;
   cout<<"输入一个整数：";	cin>>n;
   do
   {  cout<<"输入需要转换的进制：2-9,16,32（输入0退出）";
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
	    default: cout<<"输入错误"<<endl;
	}
}while(choice!=0);
return 0;
}
