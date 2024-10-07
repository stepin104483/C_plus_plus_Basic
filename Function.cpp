#include <iostream>
using namespace std;
 

/* 
Call by reference --> Here actual and formal parameters refer to the same memory location. 
Therefore any changes made to the formal parameters will get reflected to the actual parameters 

Call by value --> Here values of the actual parameters will be copied to the formal parameters 
and these two different parameters store value at different location.
Therefore if you make changes to formal parameters then that will not be reflected to actual parameters.
*/

/*
void swap(int &x, int &y){
	int z = x;
	x = y;
	y = z;
}
*/

void swap(int x, int y){
	int z = x;
	x = y;
	y = z;
}


int main(){
	
	int a=10,b=20;
	cout << "Before Swap"<<"\n";
	cout <<"a: "<<a<<" b: "<<b<<"\n";
	swap(a,b);
	cout << "After Swap"<<"\n";
	cout <<"a: "<<a<<" b: "<<b<<"\n";
	
	
}