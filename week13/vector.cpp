#include <iostream>
#include <vector>
using namespace std;

int main () {
	vector <int> v;

	cout <<"vector size = " <<v.size() <<endl;
	for (int i=0; i<10; i++)
		v.push_back(i+11);

	cout <<"vector size = " <<v.size() <<endl;
	for (int i=0; i<v.size(); i++)
		cout << v[i] <<", ";
	cout <<endl;
	


	for (int i=0; i<5; i++)
		v.pop_back();
	cout <<"vector size = " <<v.size() <<endl;
	for (int i=0; i<v.size(); i++)
		cout << v[i] <<", ";
	cout <<endl;
	
	
	return 0;
}
