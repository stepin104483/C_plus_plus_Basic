//Code :- To get an range of input from user, sort it and print the same. 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	
	int n;
	int ele;
	vector <int> v;
	
	while (cin >> ele){
		v.push_back(ele);
	}
	
	sort(v.begin(), v.end());
	
	for (auto i : v){
		cout << i <<" ";
	}
	
	return 0;
}