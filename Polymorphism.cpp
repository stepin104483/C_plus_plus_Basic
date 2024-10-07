#include <iostream>
using namespace std;

//Basically when we want to use one method of parent class into many inherited class with some modification. 

//Base class
class Animal{
	public:
		void Animal_sound(){
			cout <<"The Animal makes a sound"<<"\n";
		}
};

//Derived class

class Dog : public Animal{
	public:
		void Animal_sound(){
			cout <<"Dog's Bark BOW BOW"<<"\n";
		}
};

//Derived Class
class Cat : public Animal{
	public:
		void Animal_sound(){
			cout <<"Cat says meow meow"<<"\n";
		}
};

int main(){
	Animal myAnimal;
	Dog myDog;
	Cat myCat;
	
	myAnimal.Animal_sound();
	myDog.Animal_sound();
	myCat.Animal_sound();
	
	return 0;
}
