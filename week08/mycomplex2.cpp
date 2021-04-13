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
	friend mycomplex operator ++ (mycomplex &arg, int);
	friend mycomplex&	operator ++ (mycomplex &arg);

	int&	operator [] (int index){
		if (index <0 || index >1){
			cerr << "invalid index" << endl;
			exit (-1);
		}

		if (index ==0) return real;
		else if (index==1) return imag;
	}

	friend ostream& operator << (ostream& lhs, mycomplex rhs);
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

mycomplex&	operator ++ (mycomplex &arg){
	arg.real++;	
	arg.imag++;	
	return arg;
}

mycomplex operator ++ (mycomplex &arg, int){
	mycomplex result = arg;
	arg.real++;	
	arg.imag++;	
	return result;
}

ostream& operator << (ostream& lhs, mycomplex rhs){
		lhs << rhs.real << " + " << rhs.imag <<"i";
		return lhs;
}

int main (){
	mycomplex c1(2,3), c2(4,5);
	mycomplex c3(1,1);
	mycomplex c4(0,0);
	int x =3, y =3;
	int x1 = x++;
	int y1 = ++(++y);

   cout << "x = " << x<< ", y = " <<y << ", x1 = " << x1 <<", y1 = " <<y1 << endl;

	mycomplex c5 = ++(++c1);
	//c1.show();
	cout << c5[0] << " " << c5[1] << endl;
	c5[0] = 77;
	//c5.show();
	cout <<c5 << " " << c1 << endl;	//ostream



	return 0;
}
