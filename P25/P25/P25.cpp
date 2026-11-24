#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int wdeck[][13]);
void deal(const int wdeck[][13], const char* wface[], const char* wsuit[]);

int main()
{
	const char* face[13] = { "Ace", "Deuce", "Three", "Four", "Five", "Six",
		"Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
	const char* suit[4] = { "Hearts","Diamonds","Clubs","Spades" };
	int deck[4][13] = {0};
	srand(time(0));
	shuffle(deck);
	deal(deck, face, suit);
}

void shuffle(int wdeck[][13])
{
	int row, column;
	int card;
	for (card = 1;card <= 52;card++)
	{
		do
		{
			row = rand() % 4;
			column = rand() % 13;
		} while (wdeck[row][column] != 0);
		wdeck[row][column] = card;
	}
}

void deal(const int wdeck[][13], const char* wface[], const char* wsuit[])
{
	for (int card = 1;card <= 52; card++)
	{
		for (int row = 0; row < 4;row++)
		{
			for (int column = 0; column < 13; column++)
			{
				if (wdeck[row][column] == card)
				{
					printf("%5s of %-8s%c", wface[column], wsuit[row], card % 2 == 0 ? '\n' : '\t');
				}
			}
		}
	}
}