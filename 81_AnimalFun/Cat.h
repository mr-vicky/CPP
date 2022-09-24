#ifndef CAT_H
#define CAT_H

#include"Animal.h"
#include<string>
using namespace std;

class Cat: public Animal
{

	public:
		Cat(string name, double weight);
		void chaseMouse() const;
		string makeNoise() const;
		string eat() const;
};


#endif

