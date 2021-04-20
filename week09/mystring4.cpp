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
		cout <<"cstr ctor called"<<endl;
  }

  mystring (const mystring &p) {
		int size = strlen(p.str);
		str = new char [size+1];
		strcpy (str, p.str);
		cout <<"cpy ctor called"<<endl;
  }

  mystring (mystring&& p) {
		//int size = strlen(p.str);
		//str = new char [size+1];
		//strcpy (str, p.str);
		str = p.str;
		p.str = nullptr;
		cout <<"mov ctor called"<<endl;
  }

	void show (){cout <<str<<endl;}

	char& operator [] (int index){
		if (index>strlen(str))
			cout << "ERROR OUT OF RANGE";

		return str[index];
	}

	mystring& f(){
		return *this;
	}

	mystring operator + ( const mystring &rhs ){
		int size = strlen(str) + strlen(rhs.str) + 1;
		char *temp =  new char [size];
		if(temp==nullptr) cerr << "ERROR" <<endl;

		strcpy (temp, str);
		strcpy (temp+strlen(str), rhs.str);

		mystring retval (temp);

		return retval;
	}

	mystring& operator = ( const mystring& rhs){
		if (str!=nullptr) {
			delete [] str;
			str =  new char [strlen(rhs.str)+1];
			if(str==nullptr) cerr << "ERROR" <<endl;
		}
		strcpy (str, rhs.str);

		cout <<"simple assignment called"<<endl;

		return *this;
	}

	mystring& operator = ( mystring&& rhs){
		if (str!=nullptr) {
			delete [] str;
			//str =  new char [strlen(rhs.str)+1];
			//if(str==nullptr) cerr << "ERROR" <<endl;
		}
		//strcpy (str, rhs.str);
		str = rhs.str;
		rhs.str = nullptr;

		cout <<"mov assignment called"<<endl;

		return *this;
	}

	~mystring (){ //cout <<"dtor called"<<endl;
			if(str!=nullptr) delete [] str;
	}
};

void show_string (mystring s){
	s.show();
}

int return_by_value () {
	int x = 5;
	return x;
}

int main () {
  mystring s1 ("hello");
  mystring s2 ("bye");
  mystring s3 ("world");

	s3 = s1 + s2;		// compile with -fno-elide-constructors option to the compiler for temp values to generate
	s3.show();
	s1.show();
	s2.show();

	//return_by_value() = 33;

  return 0;
}

