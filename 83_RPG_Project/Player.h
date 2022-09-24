#ifndef RPG
#define RPG
#include<string>
using namespace std;

class Player
{
	private:
		string name;
		enum Race race;
		int hitPoints;
		int magicPoints;

	public:
		Player(string name,Race race, int hitPoints, int magicPoints);
		string getName();
		Race getRace();
		string whatRace();
		int getHitPoints();
		int getMagicPoints();
		void setName(string name);
		void setRace(Race race);
		void setHitPoints(int hitPoints);
		void setMagicPoints(int magicPoints);
		virtual string attack() = 0;

};


#endif