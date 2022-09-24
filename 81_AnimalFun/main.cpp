#include<iostream>
#include<string>
#include"Animal.h"
#include"Dog.h"
#include"Cat.h"
using namespace std;

int main()
{
	//Animal myAnimal("Rocky", 20);
	Dog dog("Rover", 30, "Greyhound");
	Animal* dogPtr = new Dog("Fido", 30, "Golden Retriver");
	Animal* catPtr = new Cat("Candy", 9);

	cout << "Makes noise? " << dogPtr->makeNoise() << endl;
	cout << "Eat? " << dogPtr->eat() << endl;

	cout << "Cat Noise? " << catPtr->makeNoise()<<endl;
	cout << "Cat eating? " << catPtr->eat() << endl;

	//((Cat*)catPtr)->chaseMouse(); // older style cast
	//OR 
	(reinterpret_cast<Cat*>(catPtr))->chaseMouse(); // Modern method


	/*cout << "Animal Name: " << myAnimal.getName() << endl;
	cout << "Animal Weight: " << myAnimal.getWeight() << endl;
	cout << "Animal Noise: " << myAnimal.makeNoise() << endl;

	cout << endl;
	cout << "Dog's name: " << dog.getName() << endl;
	cout << "Dog's breed: " << dog.getBreed() << endl;
	cout << "Dog's Noise: " << dog.makeNoise()<<endl;
	dog.digHole();
	dog.chaseCat();*/
	
	delete dogPtr;
	dogPtr = nullptr;

	delete catPtr;
	catPtr = nullptr;

	return 0;
}