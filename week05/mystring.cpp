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

  mystring (const mystring & p) {
		int size = strlen(p.str);
		str = new char [size+1];
		strcpy (str, p.str);
		cout <<"cpy ctor called"<<endl;
  }

	void show (){cout <<str<<endl;}

	~mystring (){cout <<"dtor called"<<endl; if(str!=nullptr) delete [] str;}
};

void show_string (mystring s){
	s.show();
}

int main () {
  mystring s1 ("hello");

	show_string(s1);

  return 0;
}

