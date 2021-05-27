#include <iostream>

using namespace std;

class A {
	int x = 0;
	static int count;	// declaration only
	const static int yy = 55;	// declaration + definiton: for consts only!!

	public:

	A(){ count++;}

	void show(){
		cout <<"x = "<<x<<"y = "<<count<<"yy = "<<yy<<endl;
	}

	static void showcount(){
	  //cout << "x = " << x <<endl;
		cout <<count<<" objects created so far" <<endl;
	}
};

// type name = val;
int A::count  = 0;	// definition

int main () {

	int z = 32;	// declaration + definition
	
	A::showcount();
	//A::show();

	A a;
	a.showcount();

	A b[10];
  a.showcount();

	return 0;
}
