/* A Queue stores multiple elements in a specific order, called FIFO (First In First Out). Unlike Vectors elements in the queue are not accessed by index numbers . 
Queue elements are added at the end and removed from the front, we can only access elements of the front and back 

1. Like Vectors and list, we cannot add elements to stacks and queue while declaration, instead we have to push elements one by one for stacks and queue. 
2. We cannot access elements using index numbers
3. We can access front and back elements of queue
4. If you remove element from Queue using .pop () then first and oldest element will be removed. 

*/

#include <iostream>
#include <queue>
using namespace std;

int main(){
	queue<string> cars; //declaration
	cars.push("BMW");   //front or first element
	cars.push("TATA");  
	cars.push("TESLA");
	cars.push("Mahindra"); //back or last element
	
	cout <<"Last Element: "<<cars.back()<<" Front Element: "<<cars.front()<<endl;

	//we can only modify front and back elememt
	cars.front() = "Suzuki";
	cars.back()  = "BYD";

	cout <<"\n";
	cout <<"After modifying front and back element!!"<<"\n";

	cout <<"front element: "<<cars.front()<<", Back Element: "<<cars.back()<<endl;

	//Let's remove front element
	cout<<"\n";
	cars.pop();
	cout <<"After removing front element: "<<cars.front();
	return 0;
}


