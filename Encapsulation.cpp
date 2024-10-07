#include <iostream>
using namespace std;

class Employee{
	private:
		int salary;
	
	public:
		//setter
		void setSalary(int s){
			salary = s;
		}
		
		//Getter
		int getSalary(){
			return salary;
		}
};

int main(){
	Employee myobj;
	//This is just for comparing two comnmits, so technically no changes
	/*
	int ss;
	cout << "Enter Salary: "<<"\n";
	cin >> ss;
	*/
	myobj.setSalary(50000);
	cout << myobj.getSalary();
	return 0;
}
