#include <iostream>
#include <stack>
using namespace std;

/*
Stack stores multiple elements in a specific order called LIFO [Last In First Out]. 
Unlike Vectors, Elements in the stack cannot be accessed by index number. Since these elements are added and removed only from the top, all operations can be 
performed only on the top element
*/

/*
Below are the operations which can be performed on stack DS
.top()     --> To Access elements of stack and to modify the same
.push()    --> Add element to stack 
.pop()     --> Remove element of stack
.size()
.empty()
*/

int main(){
	stack<string> cars;
	cars.push ("TATA");
	cars.push ("BMW");
	cars.push ("BYD");
	cars.push ("TESLA");
	
	/*
	//Print last element of stack
	cout <<cars.top();
	
	//Print entire element of stack
	for (string car : cars){
		cout <<car<<" ";
	}


	cars.top() = "Maruti";
	cout <<"After updating top element: "<<cars.top();

	*/
	cars.pop();
	cout <<cars.top()<<" "<<cars.size()<<" "<<cars.empty();
	
	return 0;
}
