/*
--> A deque (stands for double ended queue) is similar to queue but it's more flexible as elements can be added or removed from both the ends (at the front and the back)
--> We can also access elements by index numbers.
--> Functions for deque is same as vector except that in deque it's possible to remove and add elements at the front and back.
*/

#include <iostream>
#include <deque>
using namespace std;

int main(){
	deque<string> cars = {"TATA","TESLA","Suzuki","BYD","Mahindra"};
	//Let's try to print all these elements
	cout <<"Before updating string element!"<<"\n";
	for (string car : cars){
		cout <<car<<" , ";
	}
	cout <<"\n";
	//We can access deque like vectors using index & we can also access first and last element using .front() & .back() functions.
	//We can use .at() & change the elements not just at front or back but also in between as it supports index
	
	//Let's add the element
	cars.push_front("Nano");
	cars.push_back("XUV");

	cout <<"After updating string element!"<<"\n";
	for (string car : cars){
		cout <<car<<" , ";
	}

	//This is good, Now lets remove first, last element and update middle element and following that we will print the string. 
	//Additionally check the size of string and check if it's empty or not.
	
	cout <<"\n";
	cout <<"Size of String: "<<cars.size()<<"\n";
	cout <<"Is string Empty? --> "<<cars.empty()<<"\n";
	cout <<"\n";

	cars.pop_back();
	cars.pop_front();
	cars[2] = "Maruti";
	for (int i = 0; i < cars.size(); i++){
		cout <<cars[i]<<" , ";
	}
	return 0;
}
