//This code is to dynamically allocate 3D array in c++

#include <iostream>
using namespace std;

int main(){
	
	int l,b,h;
	cout <<"Enter length: ";
	cin >>l;

	cout <<"Enter bredth: ";
	cin >>b;

	cout <<"Enter height: ";
	cin >>h;
	cout <<"\n";

	
	//Variable declaration of 3D Array
	int ***arr = new int** [l];
	
	//Memory allocation
	for (int i =0; i < l; i++){
		arr[i] = new int* [b];
		for (int j =0; j < b; j++){
			arr[i][j] = new int [h];
		}
	}
	
	//Assigning values to 3D Array
	for (int i =0; i < l; i++){
		for (int j =0; j < b; j++){
			for (int k =0; k < h; k++){
				arr[i][j][k] = (i+1)*(j+1)*(k+1);
			}
		}
	}
	
	//Accessing and Printing values
	for (int i =0; i < l; i++){
		for (int j =0; j < b; j++){
			for (int k =0; k < h; k++){
				cout << arr[i][j][k] <<" ";
			}
			cout <<"\n";
		}
		cout <<endl;
	}
	
	cout <<"\n";
	
	//Memory release
	for (int i =0; i <l; i++){
		for (int j =0; j <b; j++){
			delete[] arr[i][j]; //deallocate each row
		}
		delete[] arr[i]; //De-allocation of 2D array
	}
	
	delete[] arr; //De-allocation of pointers to 2D Array
	
	return 0;
}