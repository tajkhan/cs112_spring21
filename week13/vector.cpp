#include <iostream>
#include <vector>
using namespace std;

int main () {
	vector <int> v;
	vector <int> v2 = {4, 2, 1, 9, 0};
	vector <int> v3 {4, 2, 1, 9, 0};

	cout <<"vector size = " <<v.size() <<endl;
	for (int i=0; i<10; i++)
		v.push_back(i+11);

	cout <<"vector size = " <<v.size() <<endl;
	// for (int i=0; i<v.size(); i++)
	for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++)
		if (iter!=v.begin() && iter!=v.end()-1)
				*(iter) = 55;

	for (vector<int>::const_iterator iter = v.cbegin(); iter != v.cend(); iter++)
		cout << (*(iter)) <<", ";
	cout <<endl;
	
	for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++)
		cout << *(iter) <<", ";
	cout <<endl;
	
	for (vector<int>::const_reverse_iterator iter = v.crbegin(); iter != v.crend(); iter++)
		cout << (*(iter)) <<", ";
	cout <<endl;
	
	for (int n: v)
		cout << n <<", ";
	cout <<endl;
	
	for (int & n: v)
		n = 44;
	
	for (int const & n: v)
		cout << n <<", ";
	cout <<endl;
	
	return 0;
}
