#include <iostream>
using namespace std;

//class is template for object and object is an instance of class
//ek template bana aur uske baad object create kar. int main(){
//wo object us class ke sare ke sare properties inherit kar lenge


//Attributes and methods are basically variables and functions that belongs to the class. These are often referred to as "class members". 
//class is user defined data type that we can use in our program and it works as an object constructor or a blueprint for creating objetcs. 

//Let's create a class. 

/*
class Myclass{
	public: 
		int myNum;
		string name;
		
		void MyMethod();
};

//To define a function outside the class definition, you have to declare it inside the class and then define it outside the class. 
//This is done by specifying the name of the class followed by resolution operator and then name of the function.

void Myclass::MyMethod(){
	cout <<"This is a function outside the class"<<"\n";
}

int main(){
	
	Myclass Myobject;  //created an object
	
	//updating values of class
	Myobject.myNum = 10;
	Myobject.name = "Praveen";
	
	//printing class values
	cout <<"Name of the object: "<<Myobject.name<<"\n";
	Myobject.MyMethod();
	
	return 0;
}

*/

/*
//Let's create an constructor
//constructor is an special method that is automatically called when an object of a class is created
//It's name is same as class and it has no return type and it is always public. 
//Constructos can also take parameters and this can be used to assign initial values to attributes. 

class Car{
	public:
		int year;
		string Model;
		string brand;
		Car(int z, string y, string x);
};

Car::Car(int z, string y, string x){
	year = z;
	Model = y;
	brand = x;
	cout <<"We just brought Mahindra XUV 3XO "<<"\n";
}

//class method is defined outside the function

int main(){
	Car car1(2024, "XUV 3XO", "Mahindra");
	
	cout <<car1.year<<" "<<car1.Model<<" "<<car1.brand<<"\n";
	return 0;
}

*/

/*

//In C++, there are 3 access specifiers 
//By default all members of the class are private.

*/

/*
Let us study encapsulation in OOP's
Meaning of encapsulation is to make sure that sensitive data is hidden from users. 
For this, we have to provide access specifer as "private" and if you want others to read or modify the value of private member,
you can provide public get & set methods.

Access Private Members use public "get" and "set" methods


class Employee{
	private:
		int salary;
	
	public:
		//setter
		void setSalary(int s){
			salary = s;
		}
		
		//Getter
		int getSalary(){
			return salary;
		}
};

int main(){
	Employee myobj;

	int ss;
	cout << "Enter Salary: "<<"\n";
	cin >> ss;
	
	myobj.setSalary(50000);
	cout << myobj.getSalary();
	return 0;
}
*/

//Inheritance
/*
It is possible to inherit attributes and methods from one class to another. 
Inheritance concept has two categories [Derived class and parent class]
To inherit from a class use ":" symbol
*/

//Lets create an inheritance example from an car

//Parent class


class Vehicle{
	private:
		int cost;
		string brand;
	public:
		//string brand = "Ford";
		void honk(){
			cout << "Pee Pee!!"<<"\n";
		}
		
		void setCost(int s, string car_brand){
			cost = s;
			brand = car_brand;
		}
		
		void getcost(){
			cout <<"Cost of Car is: "<<cost<<" "<<"and car brand is: "<<brand<<"\n";
		}
};

//Derived class
class Car: public Vehicle{
	/*
	public:
		string brand = "Mustang";
	*/
};

//multilevel Inheritance --> Derived of Derived class
class Mahindra : public Car{};

int main(){
	int cost;
	string brand;
	cout <<"Enter cost & brand: ";
	cin >> cost>>brand;
	
	Mahindra Mycar;
	
	Mycar.setCost(cost,brand);
	//cout <<"Car Brand: "<<Mycar.brand<<"\n";
	Mycar.getcost();	 /*---> This is an example of Encapsulation */
	
	cout <<"Honking style: ";
	Mycar.honk();
	return 0;
}


//Multilevel Inheritance

