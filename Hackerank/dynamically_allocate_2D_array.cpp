//This code is to dynamically allocate 2D array in c++


#include <iostream>
using namespace std;

int main(){

	int r,c;
	cout <<"Enter ROW: ";
	cin >>r;
	cout <<"Enter COL: ";
	cin >>c;
	
	//Declare variable for 2D Array
	int **arr = new int* [r]; //created a variable array which stores address of a pointer and the pointer points to another row.
	
	for (int i =0; i <r; i++){
		arr[i] = new int [c];
	}

	//assigning values
	for (int i =0; i <r; i++){
		for (int j =0; j < c; j++){
			arr[i][j] = (i+1)*(j+1);
		}
	}

	//Accessing and Printing values
	for (int i =0; i <r; i++){
		for (int j =0; j < c; j++){
			cout << arr[i][j]<<" ";
		}
		cout <<endl;
	}	
	
	for (int i =0; i < r; i++){
		delete[] arr[i]; //Delete memory of each row
	}
	
	delete[] arr; //Delete memory of pointer array
	
	return 0;
}