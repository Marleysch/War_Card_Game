#include <vector>

class Deck
{
	private:
		vector<Can> deck;
	public:
		Deck();
		Card deal();
		Card display();
		shuffle();
};		

