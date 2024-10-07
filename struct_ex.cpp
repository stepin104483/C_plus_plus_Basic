//Here, create a structure as student and print age, first_name, last_name & standard
#include <iostream>
using namespace std;

struct student {
	int age;
	string first_name;
	string last_name;
	int standard;
};

int main(){
	student s1;
	cin >> s1.age;
	cin >> s1.first_name;
	cin >> s1.last_name;
	cin >> s1.standard;

	cout <<s1.age<<" "<<s1.first_name<<" "<<s1.last_name<<" "<<s1.standard;
	
	return 0;
}
