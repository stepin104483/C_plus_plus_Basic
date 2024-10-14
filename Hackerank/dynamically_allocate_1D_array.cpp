//This code is to dynamically allocate 1D array in c++


#include <iostream>
using namespace std;

int main(){
	
	int n;
	cout <<"Enter 1D array length: ";
	cin >> n;
	cout <<"\n";
	
	int *arr = new int[n]; //dynamically allocates memory for n integers and returns a pointer arr to the first element
	
	//assign values to the array
	for (int i =0; i <n ; i++){
		arr[i] = i+1;
	}
	
	//Accessing values of array
	for (int i =0; i < n; i++){
		cout <<arr[i]<<" ";
	}
	cout <<"\n";
	
	//De-allocation of array
	delete[] arr;
	
	return 0;

}