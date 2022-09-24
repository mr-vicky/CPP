#include"Player.h"
#include<string>
using namespace std;


Player::Player(string name, Race race, int hitPoints, int magicPoints)
{
	this->name = name;
	this->race = race;
	this->hitPoints = hitPoints;
	this->magicPoints = magicPoints;
}

string Player::getName()
{
	return name;
}

Race Player::getRace()
{
	return race;
}

string Player::whatRace()
{
	
}

int Player::getHitPoints()
{

}

int Player::getMagicPoints()
{

}

void Player::setName(string name)
{

}

void Player::setRace(Race race)
{

}

void Player::setHitPoints(int hitPoints)
{

}

void Player::setMagicPoints(int magicPoints)
{

}

string attack()
{

}