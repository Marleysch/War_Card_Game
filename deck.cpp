#include "deck.h"
#include "card.h"
#include <vector>

Deck::Deck()
{
	for (int i 0; i < 53; i++)
	{
		char rank;
		if (i % 13 == 0)
		{rank = "A";}	
		//else if (i % 13 == 9)
		//{rank = "T"}
		else if (i % 13 == 10)
		{rank = "J";}	
		else if (i % 13 == 11)
		{rank = "Q";}	
		else if (i % 13 == 12)
		{rank = "K";}	
		else
		{rank = i + 1;}

		char suit;
		if (i < 13)
		{suit = "H";}
		else if (i < 26)
		{suit = "D";}
		else if (i < 39)
		{suit = "C";}
		else
		{suit = "S";}
	
		
		deck.push_back(Card(suit, rank));
	}	
}
