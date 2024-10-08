#include <iostream>
#include <vector>
using namespace std;

//Let's create an vector called cars that will store string values
int main(){
	vector<string> cars = {"Thar", "XUV 3XO", "TESLA", "BYD"};
	//Print vector elements
	/*for (string car : cars){
		cout << car<<"\n";
	}*/


	//Vector Modification
	/*
	cout <<"Before modifying: " << cars.at(1)<<"\n";
	cars.at(1) = "XUV 700";
	cout << "After modifying: "<<cars.at(1);
	*/

	//vector Addition :- To add use .push_back() which will add elements to the vector at the end.
	cars.push_back("TATA");
	for (string car : cars ){
		cout <<car<<"\n";
	}
	/*
	//Vector Removal :- To remove .pop_back() function can be used.
	cars.pop_back();
	for (string car : cars){
		cout <<car<<"\n";
	}
	*/

	//Vector Size checking :- For this we can use .size() function.
	//vector data checking :- For this we can use .empty() function. The .empty() function returns 1 (true) if the vector is empty and 0 (false) if it contains one or more elements:


	cout <<"Checking size of vector: "<<cars.size()<<"\n";
	cout <<"Checking if vector is empty or not: "<<cars.empty()<<"\n";

	//looping through vector
	for (int i =0; i < cars.size(); i++){
		cout <<cars[i]<<"\n";
	}
	return 0;
}
