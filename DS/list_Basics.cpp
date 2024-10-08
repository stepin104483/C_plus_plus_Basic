#include <iostream>
#include <list>
using namespace std;

//list is similar to vectors i,e it can store multiple elements of the same data type but there are some differences
//You can add or remove elements at the beginning or at the end of a list while vectors are optimized to perform action only at the end. 
//unlike vectors, it does not support randomly acccessing data using index. Here indexing is not supported.
//we can change elements of the list only at the ends.

//Below are the functions used in list for quick recap
// .front()      --> To access first element of list
// .back()       --> To access last element of list
// .push_back()  --> To add an element at the end
// .push_front() --> To add an element at the beginning
// .size()       --> to check size of list
// .empty()      --> To check if list is empty or not

int main(){
	list<string> cars = {"VOLVO","TESLA","BMW","TATA","BYD"};
	cout <<cars.front()<<endl;
	cout <<cars.back()<<endl;
	//Here you cannot add or remove elements from the middle. It is only possible through the ends.
	//Let's add some elemets
	cars.push_back("Suzuki");
	cars.push_front("Maruti");
	cout <<"After adding some elemts!!"<<"\n";
	cout <<cars.front()<<"\n";
	cout <<cars.back()<<"\n";
	cout <<"\n";

	//current elements of the list
	for (string car : cars){
		cout <<car<<" ";
	}
	//let's change elements at the start and end
	cars.front() ="Suzuki";
	cars.back()  ="suzuki";
	
	//print after changing the elemets
	cout <<"\n";
	for (string car : cars){
		cout <<car<<" ";
	}

	//Let's remove some elements from the list
	cars.pop_front();
	cars.pop_back();

	cout <<"/n";
	cout <<"After removing elements from start & end" <<"\n";
	for (string car : cars){
		cout <<car<<" ";
	}

	return 0;
}
