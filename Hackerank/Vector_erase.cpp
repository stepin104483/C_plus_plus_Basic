//lets write a code to erase elememts from an vector

#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n, ele;
	cin >> n;
	
	vector <int> v;
    for(int i =0; i < n; i++){
        cin >>ele;
        v.push_back(ele);
    }
	
	//Now let's erase data from vector nth index data;
	int index;
	cin >> index;
	v.erase(v.begin()+index-1);
	
	//Now let's delete range of data from vector
	int a,b;
	cin >>a>>b;
	v.erase(v.begin()+a-1, v.begin()+b-1);
	
	//Let's print remaining element from vector
	cout <<v.size()<<"\n";
	for (auto i : v){
		cout <<i<<" ";
	}
	return 0;
}