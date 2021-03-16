#include <iostream>
using namespace std;

union  varval {
  int ival;
  float fval;
	char *sval;
};

struct var {
	char* varname;
	int type; // 1 is int, 2 is float, 3 is cstyle string
  int ival; // store value here if type is integer
  float fval; // tore value here if type is float
	char *sval; // store value here if type is cstring
};

void display_var (var x) {
  cout << x.varname << " is a variable of type ";
  if (x.type==1)
		cout <<"int. It's value is "<< x.ival << endl; 
  if (x.type==2)
		cout <<"float. It's value is "<< x.fval << endl; 
  if (x.type==3)
		cout <<"cstring. It's value is "<< x.sval << endl; 
}

int main (){

  var x; x.varname = (char*) "var1"; x.type=1; x.ival=22;
  var y; y.varname = (char*) "var2"; y.type=2; y.fval=3.5;
  var z; z.varname = (char*) "var3"; z.type=3; z.sval= (char*) "hello";
  
  display_var (x);
  display_var (y);
  display_var (z);

  return 0;
}
