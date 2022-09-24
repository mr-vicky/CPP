#ifndef ANIMAL_H
#define ANIMAL_H

#include<string>
using namespace std;

class Animal
{
	public:
		Animal(string name, double weight);
		string getName();
		void setName(string name);
		double getWeight();
		void setWeight(double weight);
		virtual string makeNoise() const = 0; // pure virtual function
		virtual string eat() const = 0; // pure virtual function

	private:
		string name;
		double weight;
};

#endif