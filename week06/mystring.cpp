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

  void change () { str[0]='X';}

	void show (){cout <<str<<endl;}

	~mystring (){cout <<"dtor called"<<endl; if(str!=nullptr) delete [] str;}
};

void show_string (mystring s){
	s.show();
}

class point {
	int x, y;
	public:
	point (int a, int b) {x=a; y=b;}
	void show () {cout <<"x="<<x<<", y="<<y<<endl;}
};

int main () {

	point a (4,5); 
	point b = a; 
  
  b.show();

  mystring s1 ("hello");

 
  //mystring s2 = "bye";
  mystring s3 = s1;
	s1.change();
	s3.show();

	//s3 = s1;
	int x = 5;
	int y = x;
  x = 55;
	//show_string(s1);

  return 0;
}

