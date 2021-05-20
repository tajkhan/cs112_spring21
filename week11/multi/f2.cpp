#include <iostream>
#include "f2.h"
#include "f1.h"
using namespace std;

void f2 () {
	f1 ();
	cout << "f2 called" << endl;
}
