#include"Player.h"

class Warrior: public Player
{
	private:
		int hitPoints = 200;
		int magicPoints = 0;

	public:
		string attack()
		{
			return "I will destroy you with my sword, foul demon!";
		}

};