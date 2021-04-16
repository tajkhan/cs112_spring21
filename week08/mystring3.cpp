/*
 * Prupose:
 * - Demonstrate assignment operator and operator overloading
 *
 */

#include <iostream>
#include <cstring>

using namespace std;

class mystring {
	char *str;

	public:
	mystring (){str=nullptr;}
  mystring (const char * p) {
		int size = strlen(p);
		str = new char [size+1];
		strcpy (str, p);
  }

  mystring (const mystring &p) {
		int size = strlen(p.str);
		str = new char [size+1];
		strcpy (str, p.str);
		//cout <<"cpy ctor called"<<endl;
  }

	void show (){cout <<str<<endl;}

	char& operator [] (int index){
		if (index>strlen(str))
			cout << "ERROR OUT OF RANGE";

		return str[index];
	}

	mystring& operator = ( const mystring& rhs){
		if (str!=nullptr) {
			delete [] str;
			str =  new char [strlen(rhs.str)+1];
			if(str==nullptr) cerr << "ERROR" <<endl;
		}
		strcpy (str, rhs.str);

		return *this;
	}

	~mystring (){ //cout <<"dtor called"<<endl;
			if(str!=nullptr) delete [] str;
	}
};

void show_string (mystring s){
	s.show();
}

int main () {
  mystring s1 ("hello");
  mystring s2 ("bye");
  mystring s3 ("world");

	int x = 3;
	int y = 5;
	int z = 7;
	z = y = x;
	cout << z << " " << y << " " << x << endl;

	x = 3;
	y = 5;
	z = 7;
	(z = y) = x;
	cout << z << " " << y << " " << x << endl;

	(s1 = s2) = s3;
	//cout << &(s1 = s2);
	//s2[1] = 'H';

	show_string(s1);
	//show_string(s2);

  return 0;
}

