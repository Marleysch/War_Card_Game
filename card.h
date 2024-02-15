#include <string>

class Card
{
	private:
		char suit;
		char rank;
	public:
		Card(char, char);
		void display();
		int compare(Card);
};
