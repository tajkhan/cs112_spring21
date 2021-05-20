#include <iostream>

using namespace std;

class A {
	public:
	int a;
};

class B : virtual public A {
	public:
	int b;
};

class C : virtual public A {
	public:
	int c;
};

class D : public B, public C {
	public:
	int d;
};


int main () {
	D d1;
	cout << d1.d << " " << d1.b << " " << d1.c << " " << d1.a <<endl;
	return 0;
}
