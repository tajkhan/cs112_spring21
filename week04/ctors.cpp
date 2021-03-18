#include <iostream>
using namespace std;

struct date {
 private:
 int d,m,y;

 public:
	date () { // default constructor
		d=1; m=1; y=2002;
		cout <<"default ctor called"<<endl;
	}

	date (int x, int w, int z); // declaring 2nd constructor

	void show (){
		cout <<"d="<<d<<", m="<<m<<", y="<<y<<endl;
	}
};


// defining the 2nd constructor here
date::date (int x, int w, int z){
	d=x; m=w; y=z;
}

int main (){
 date x;		// default constructed
 date y (23,3,2021); // constructed using 2nd ctor

 x.show();
 y.show();
 
 return 0;
}
