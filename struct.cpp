//structure is basically a concept where several variables of different type but related to each other can be grouped together
//in a new variable known as structure. We call each variable in the structure as member of the structure.\

//Diff between array and structure is in structure different types of variable can be grouped but in array, only one type of variable elements can be added.

#include <iostream>
using namespace std;

/*
enum Level {
	LOW = 5,
	MEDIUM,
	HIGH
};
*/
int main(){
	/*
	//Creating structure
	struct {
		int x;
		float y;
		string name;
	} test;

	//assigning variables
	test.x = 10;
	test.y = 11.5;
	test.name = "Praveen";
	
	//Printing values of structure
	cout << test.x;
	*/
	
	/*
	//Write a code to print two car specification
	struct car{
		string name;
		string model;
		int year;
	};
	
	car car1;
	car1.name = "TATA";
	car1.model = "SAFARI";
	car1.year = 1981;
	
	car car2;
	car2.name = "Mahindra";
	car2.model = "THAR";
	car2.year = 2016;
	
	cout <<"Car 1 specification: "<<car1.name<<"-> "<<car1.model<<"-> "<<car1.year<<"\n";
	cout <<"Car 2 specification: "<<car2.name<<"-> "<<car2.model<<"-> "<<car2.year<<"\n";
	*/
	
	/*
	enum Level var1 = HIGH; //Now this is a constant and it will not change hence user input cannot be given to var1 variable	
	switch (var1){
		case 5:
			cout <<"LOW LEVEL";
			break;
		case 6:
			cout <<"MEDIUM LEVEL";
			break;
		case 7:
			cout <<"HIGH LEVEL";
			break;
	}
	*/
	string food = "Pizza";
	string *ptr = &food;
	
	cout <<"Before"<<endl;
	cout << "*ptr value: "<<*ptr<<"\n";
	cout << "food: "<<food<<"\n";
	
	*ptr = "hamburger";
	
	cout <<"After"<<endl;
	cout << "*ptr value: "<<*ptr<<"\n";
	cout << "ptr value: "<<ptr<<"\n";
	cout << "&ptr value: "<<&ptr<<"\n";
	
	cout << "&food: "<<&food<<"\n";
	cout << "food: "<<food<<"\n";
	
	
	return 0;
}