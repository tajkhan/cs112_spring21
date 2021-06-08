#include <iostream>
#include <list>
#include <map>

using namespace std;

int main () {
	/*
	// Create a list containing integers
  list<int> l = { 7, 5, 16, 8 };
 
  // Add an integer to the front of the list
  l.push_front(25);
  // Add an integer to the back of the list
  l.push_back(13);

	for (list<int>::iterator i = l.begin(); i != l.end(); i++)
		if (*i == 16)
			l.insert(i, 17);

	for (list<int>::iterator i = l.begin(); i != l.end(); i++)
		cout << *i <<", ";
	cout << endl;

	l.sort();

	for (list<int>::iterator i = l.begin(); i != l.end(); i++)
		cout << *i <<", ";
	cout << endl;
	*/

    map<string, int> m { {"CPU", 10}, {"GPU", 15}, {"RAM", 20}, };
 
    for (map<string,int>::iterator i = m.begin(); i != m.end(); i++)
			cout << (*i).first << ", " << (*i).second << endl;
 
    for (map<string,int>::iterator i = m.begin(); i != m.end(); i++)
			cout << m[(*i).first] << endl;
 
    m["CPU"] = 25;  // update an existing value
    for (map<string,int>::iterator i = m.begin(); i != m.end(); i++)
			cout << (*i).first << ", " << (*i).second << endl;
 
    m["SSD"] = 30;  
    for (map<string,int>::iterator i = m.begin(); i != m.end(); i++)
			cout << (*i).first << ", " << (*i).second << endl;
 
		if (m["DDT"] == 34)
			cout << "found key DDT" <<endl;
		else
			cout << "Didnt find key DDT" <<endl;
 
    for (map<string,int>::iterator i = m.begin(); i != m.end(); i++)
			cout << (*i).first << ", " << (*i).second << endl;
 
		m.erase("DDT");
		cout << "after erasing DDT" <<endl;

		int x = 32;
    for (auto i = m.begin(); i != m.end(); i++)
			cout << (*i).first << ", " << (*i).second << endl;
 
    //print_map("Updated map: ", m);

	return 0;
}

// map

// alogs
