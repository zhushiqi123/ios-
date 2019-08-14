#include<fstream>
using namespace std;
#include "book.h"
void OperBook::Append(fstream f)
{ 	int choice;	int key;	long num;
	f.seekp( 0, ios::end );        	//��ָ���Ƶ��ļ�β��
	streampos posEnd = f.tellp() ;    //��¼�ļ�β��λ��
	cout<<"*********************Appending*******************\n";
	while (1)
	{	cout<<"Please input choice:\n1: New Book No.\t"<< "2: Old Book No.\t"<< "0: Exit>>";
		cin >> choice;
		switch (choice)
		{case 1:                	//׷�Ӽ�¼
			{ 	cout << "No. (TP), Name, Amount: ";	
				cin >> book.TP>> book.bookName>> book.balance;
				f.write( (char * ) & book , sizeof( bookData ) ) ; //д���ļ�
				break;
			}
         case 2:       			//�޸ļ�¼:
			 {	 f.seekp( 0, ios::beg ); 						//дָ���Ƶ��ļ�ͷ
				 cout << "No.(TP) : ";		 cin >> key;    		//�������
				 do    			//������Ų��ң������ݸ����ṹ����book
				 {  f.read((char * ) & book, sizeof(bookData));
				 } while (book.TP != key && (f.tellp() != posEnd));
				 if (book.TP == key ) 							//�ҵ���¼
				 {  cout <<book. TP<< ' \t' << book.bookName<<' \t' << book.balance<< '\n';
					 cout << "Append number: \n? ";			 cin >> num;
					 if ( num>0 ) book.balance += num;      		//�޸Ŀ����
					 else {	 cout<<"Input error occur";		 continue;	 }
					 f.seekp(-long( sizeof( bookData )), ios::cur ) ; 
					 f.write( ( char * ) & book , sizeof( bookData) );  //ָ�븴λ
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
	f.seekp( 0, ios::end ) ;	streampos posEnd = f.tellp();  	//��¼�ļ�ĩβλ��
	cout<<"************************Sale Registering**************\n";
	while (1)
	{ 	cout << "Please input operation choice: 1: Register "<< "0: Exit >>";
		cin >> choice;
		switch ( choice )
		{ case 1 :
			{ 	f.seekp( 0, ios::beg );     				//���ļ�ͷ����ʼ����
				cout << "No. (TP) : ";		cin >> key;
				do	{f.read((char * ) & book, sizeof(bookData));
				} while (book.TP!=key && f.tellp()!=posEnd );
				if ( book.TP == key )    				//�ҵ�
				{	cout<<book. TP<<' \t'<<book.bookName<<' \t' <<book.balance<<endl;
					cout << "Saled amount: ";		cin >> num;
					if ( num>0 && book.balance>=num )  
                           book.balance -=num; //�޸Ŀ��
					else	 continue;
					f.seekp( - long( sizeof( bookData ) ), ios::cur ) ; //�ļ�ָ�븴λ
					f.write( (char * ) & book , sizeof( bookData ) );   //�޸��ļ���¼
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
	f.seekg( 0, ios::end );            		//��ָ���ƶ����ļ�β��
	streampos posEnd = f.tellg() ;          	//��¼�ļ�βλ��
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
		case 2 :       				//����ļ�
			{	f.seekg( 0, ios::beg ) ;
				do    				//������м�¼
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
{ 	fstream ftxt("booksFile.txt",ios::out) ;  //��д��ʽ���ļ�
	f.seekg( 0,ios::end ) ;
	streampos posEnd = f.tellg();         	//��¼�������ļ�ĩβλ��
	f.seekg( 0, ios::beg ) ;          		//�ƶ���ָ�뵽�ļ�ͷ
	do{ f.read((char * ) & book , sizeof(bookData));
	  	ftxt << book.TP << ' \t' << book.bookName << ' \t' << book.balance << endl;
	} while ( f.tellg() != posEnd ) ;
	ftxt.close() ; char answer , s[80] ;
	cout << "Txt file created, whether look at the file or not?( Y/N ) \n";	
     cin >> answer;
	if ( answer== 'y' || answer== 'Y' )
	{ 	ftxt.open( "booksFile.txt",ios::in );      	//�����������ļ�
		while( ! ftxt.eof() )  
         { ftxt.getline( s, 80 ); cout << s << endl; }	//������ʾ�ı�
	}
	ftxt.close() ;     							//�ر��ı��ļ�
}

