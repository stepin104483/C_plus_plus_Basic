#include <iostream>
using namespace std;

class Employee{
	protected:
		int salary;
};

class Programmer : public Employee{
	public:
		int bonus;
		
		void set_salary(int s){
			salary = s;
		}
		int get_salary(){
			return salary;
		}
};

int main(){
	
	Programmer obj;
	obj.set_salary(50000);
	cout <<obj.get_salary();
	return 0;
}	