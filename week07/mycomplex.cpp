#include <iostream>

using namespace std;

class mycomplex {
	int real;
	int imag;
	public:
	mycomplex (int a, int b){
		real =a;
		imag =b;
	}
	
	void show() {
		cout << real << " + " << imag <<"i"<<endl;
	}

	friend mycomplex add_complex (mycomplex a, mycomplex b);
	//friend mycomplex	operator+ (mycomplex a, mycomplex b);
	mycomplex	operator+ (mycomplex rhs);
};

mycomplex mycomplex::operator+ (mycomplex rhs){
		rhs.show();
		mycomplex result (real+rhs.real, imag+rhs.imag);
		return result;
}

mycomplex add_complex (mycomplex a, mycomplex b){
		mycomplex result (a.real+b.real, a.imag+b.imag);
		return result;
}

/*
mycomplex	operator+ (mycomplex a, mycomplex b) {
		mycomplex result (a.real+b.real, a.imag+b.imag);
		return result;
}
*/

int main (){
	mycomplex c1(2,3), c2(4,5);
	mycomplex c3(1,1);
	mycomplex c4(0,0);

	//c1.show();
	//c2.show();

	//c3 = c1 + c2; // c3 = c1.operator+(c2);
	//c3 = add_complex (c1, c2);
	//c3.show();
	//c4 = add_complex (c3, add_complex (c1, c2));
	c4 = c1 + c2 + c3;  // c4 = c1.operator+(c2.operator+(c3));
	c4.show();

	return 0;
}
