#include<fstream>
using namespace std;
#include "book.h"
void OperBook::Append(fstream f)
{ 	int choice;	int key;	long num;
	f.seekp( 0, ios::end );        	//读指针移到文件尾部
	streampos posEnd = f.tellp() ;    //记录文件尾部位置
	cout<<"*********************Appending*******************\n";
	while (1)
	{	cout<<"Please input choice:\n1: New Book No.\t"<< "2: Old Book No.\t"<< "0: Exit>>";
		cin >> choice;
		switch (choice)
		{case 1:                	//追加记录
			{ 	cout << "No. (TP), Name, Amount: ";	
				cin >> book.TP>> book.bookName>> book.balance;
				f.write( (char * ) & book , sizeof( bookData ) ) ; //写入文件
				break;
			}
         case 2:       			//修改记录:
			 {	 f.seekp( 0, ios::beg ); 						//写指针移到文件头
				 cout << "No.(TP) : ";		 cin >> key;    		//输入书号
				 do    			//按照书号查找，读数据赋给结构变量book
				 {  f.read((char * ) & book, sizeof(bookData));
				 } while (book.TP != key && (f.tellp() != posEnd));
				 if (book.TP == key ) 							//找到记录
				 {  cout <<book. TP<< ' \t' << book.bookName<<' \t' << book.balance<< '\n';
					 cout << "Append number: \n? ";			 cin >> num;
					 if ( num>0 ) book.balance += num;      		//修改库存量
					 else {	 cout<<"Input error occur";		 continue;	 }
					 f.seekp(-long( sizeof( bookData )), ios::cur ) ; 
					 f.write( ( char * ) & book , sizeof( bookData) );  //指针复位
					 cout << "Now total: \t" << book.balance << endl;
                 }
				 else	 cout << "Input No. error\n";
				 break;
			 }
		 case 0 : return;
		}
	}
}
void OperBook::Sale(fstream f)
{	int choice;	int key;	long num;
	f.seekp( 0, ios::end ) ;	streampos posEnd = f.tellp();  	//记录文件末尾位置
	cout<<"************************Sale Registering**************\n";
	while (1)
	{ 	cout << "Please input operation choice: 1: Register "<< "0: Exit >>";
		cin >> choice;
		switch ( choice )
		{ case 1 :
			{ 	f.seekp( 0, ios::beg );     				//从文件头部开始检索
				cout << "No. (TP) : ";		cin >> key;
				do	{f.read((char * ) & book, sizeof(bookData));
				} while (book.TP!=key && f.tellp()!=posEnd );
				if ( book.TP == key )    				//找到
				{	cout<<book. TP<<' \t'<<book.bookName<<' \t' <<book.balance<<endl;
					cout << "Saled amount: ";		cin >> num;
					if ( num>0 && book.balance>=num )  
                           book.balance -=num; //修改库存
					else	 continue;
					f.seekp( - long( sizeof( bookData ) ), ios::cur ) ; //文件指针复位
					f.write( (char * ) & book , sizeof( bookData ) );   //修改文件记录
					cout << "now store\t\t" << book.balance << endl;
				}
				else	 cout << "Input No. error \n";
				break;
			}
		case 0 : return;
		}
	}
}
void OperBook::Inquire(fstream f)
{ 	int choice;	int key;
	f.seekg( 0, ios::end );            		//读指针移动到文件尾部
	streampos posEnd = f.tellg() ;          	//记录文件尾位置
	cout<<"*******************Inquiring*********************"<<endl;
	while ( 1 )
	{	cout<<"Input the operation choice:\n1: According to No.\t"<< "2: Looking over\t"
			<< "0: Exit >>";        cin >> choice;
        switch ( choice )
        {case 1:
			{	f.seekg( 0, ios::beg );
                 	cout << "No. (TP) : ";   cin >> key;
				do	{	f.read((char * ) & book, sizeof(bookData)) ;
				} while ( book.TP != key && f.tellg() != posEnd ) ;
				if ( book.TP == key )
					cout<<book.TP<<' \t'<<book.bookName<< ' \t' << book.balance << '\n';
				else	{	cout<<"Input No. Error"<<endl; continue;	}
				break;
			}
		case 2 :       				//浏览文件
			{	f.seekg( 0, ios::beg ) ;
				do    				//输出所有记录
				{	f. read((char *) & book, sizeof(bookData)) ;
					cout<<book.TP<<' \t' << book.bookName<< ' \t' <<book.balance <<'\n';
				}while (book.TP != key );// while( book.TP !=key && f.tellp()!=posEnd );
				break;
			}
		case 0 : return;
		}
	}
}
void OperBook::CreateTxt(fstream f)
{ 	fstream ftxt("booksFile.txt",ios::out) ;  //以写方式打开文件
	f.seekg( 0,ios::end ) ;
	streampos posEnd = f.tellg();         	//记录二进制文件末尾位置
	f.seekg( 0, ios::beg ) ;          		//移动读指针到文件头
	do{ f.read((char * ) & book , sizeof(bookData));
	  	ftxt << book.TP << ' \t' << book.bookName << ' \t' << book.balance << endl;
	} while ( f.tellg() != posEnd ) ;
	ftxt.close() ; char answer , s[80] ;
	cout << "Txt file created, whether look at the file or not?( Y/N ) \n";	
     cin >> answer;
	if ( answer== 'y' || answer== 'Y' )
	{ 	ftxt.open( "booksFile.txt",ios::in );      	//重新用流打开文件
		while( ! ftxt.eof() )  
         { ftxt.getline( s, 80 ); cout << s << endl; }	//按行显示文本
	}
	ftxt.close() ;     							//关闭文本文件
}

