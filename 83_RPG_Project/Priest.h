#include"Player.h"

class Priest : public Player
{
	private:
		int hitPoints = 100;
		int magicPoints = 200;

	public:
		string attack()
		{
			return "I will Assuault you with Holy Wrath!";
		}

};