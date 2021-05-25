#pragma once

#include <iostream>
using namespace std;

class teacher {
	string faculty;
	string name;
	string courses[5];

	public:
	teacher (string a, string b);
	void display();

};

