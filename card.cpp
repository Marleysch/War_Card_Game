#include "card.h"
using namespace std

Card::Card(char suit, char rank)
{
	suit = suit;
	rank = rank;
}

void Card::display()
{
	cout << suit + rank;
}
