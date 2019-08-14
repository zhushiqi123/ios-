#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
class Cards
{public:
	void shuffle(int [][13]);								//原型声明
	void deal(const int [][13], const char *[], const char *[]);	//原型声明
};
void Cards::shuffle( int wDeck[][13] )						//洗牌子函数
{  int row, column;
   for ( int card = 1; card <= 52; card++ )    //将每张牌牌号随机插入deck数组中
   { do   								//选择新的随机位置直到没有空闲位置
	  {  row = rand() % 4;       column = rand() % 13;
      } while( wDeck[ row ][ column ] != 0 ); 
      wDeck[ row ][ column ] = card;			//将牌号插入到deck中选择的位置
   } 
}
//模拟发牌子函数
void Cards::deal(const int wDeck[][13], const char *wFace[],const char *wSuit[])
{ for ( int card = 1; card <= 52; card++ )			//对于52张牌的每一张
      for ( int row = 0; row <= 3; row++ )			//循环每一行
         for ( int column = 0; column <= 12; column++ ) //对于当前行循环每一列
            if ( wDeck[ row ][ column ] == card )		//如果找到就显示该牌
				{cout << setw( 5 ) <<right<< wFace[ column ]<<" of "<<setw( 8 )<< left
                    << wSuit[ row ] << ( card % 2 == 0 ? '\n' : '\t' );
            	} 
}

int main()
{	const char *suit[4] = { "Hearts", "Diamonds", "Clubs", "Spades" };//初始化suit数组
	const char *face[13] = {	"Ace", "Deuce", "Three", "Four",		//初始化face数组
						"Five", "Six", "Seven", "Eight",
						"Nine", "Ten", "Jack", "Queen", "King" };
	int deck[4][13] = { 0 };			//初始化deck数组
	srand( time( 0 ) );				//产生随机数
	Cards cards;
	cards.shuffle( deck );				//往deck中插入数值完成洗牌
	cards.deal( deck, face, suit );		//发52张牌
	return 0; 
} 
