#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
class Cards
{public:
	void shuffle(int [][13]);								//ԭ������
	void deal(const int [][13], const char *[], const char *[]);	//ԭ������
};
void Cards::shuffle( int wDeck[][13] )						//ϴ���Ӻ���
{  int row, column;
   for ( int card = 1; card <= 52; card++ )    //��ÿ�����ƺ��������deck������
   { do   								//ѡ���µ����λ��ֱ��û�п���λ��
	  {  row = rand() % 4;       column = rand() % 13;
      } while( wDeck[ row ][ column ] != 0 ); 
      wDeck[ row ][ column ] = card;			//���ƺŲ��뵽deck��ѡ���λ��
   } 
}
//ģ�ⷢ���Ӻ���
void Cards::deal(const int wDeck[][13], const char *wFace[],const char *wSuit[])
{ for ( int card = 1; card <= 52; card++ )			//����52���Ƶ�ÿһ��
      for ( int row = 0; row <= 3; row++ )			//ѭ��ÿһ��
         for ( int column = 0; column <= 12; column++ ) //���ڵ�ǰ��ѭ��ÿһ��
            if ( wDeck[ row ][ column ] == card )		//����ҵ�����ʾ����
				{cout << setw( 5 ) <<right<< wFace[ column ]<<" of "<<setw( 8 )<< left
                    << wSuit[ row ] << ( card % 2 == 0 ? '\n' : '\t' );
            	} 
}

int main()
{	const char *suit[4] = { "Hearts", "Diamonds", "Clubs", "Spades" };//��ʼ��suit����
	const char *face[13] = {	"Ace", "Deuce", "Three", "Four",		//��ʼ��face����
						"Five", "Six", "Seven", "Eight",
						"Nine", "Ten", "Jack", "Queen", "King" };
	int deck[4][13] = { 0 };			//��ʼ��deck����
	srand( time( 0 ) );				//���������
	Cards cards;
	cards.shuffle( deck );				//��deck�в�����ֵ���ϴ��
	cards.deal( deck, face, suit );		//��52����
	return 0; 
} 
