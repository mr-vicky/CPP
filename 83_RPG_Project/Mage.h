#include"Player.h"

class Mage : public Player
{
	private:
		int hitPoints = 150;
		int magicPoints = 150;

	public:
		string attack()
		{
			return "I will crush you with the power of my arcane missiles!";
		}

};