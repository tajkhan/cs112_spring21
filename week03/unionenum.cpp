#include <iostream>
using namespace std;

enum vartype {integer, floating, cstring};

union  varval {
  int ival;
  float fval;
	char *sval;
};

struct var {
	char* varname;
	vartype type; 
  varval val;
};

void display_var (var x) {
  cout << x.varname << " is a variable of type ";
  if (x.type==integer)
		cout <<"int. It's value is "<< x.val.ival << endl; 
  if (x.type==floating)
		cout <<"float. It's value is "<< x.val.fval << endl; 
  if (x.type==cstring)
		cout <<"cstring. It's value is "<< x.val.sval << endl; 
}

int main (){

  var x; x.varname = (char*) "var1"; x.type=integer; x.val.ival=22;
  var y; y.varname = (char*) "var2"; y.type=floating; y.val.fval=3.5;
  var z; z.varname = (char*) "var3"; z.type=cstring; z.val.sval= (char*) "hello";
  
  // below line will give an error
  // x.type = 33;

  display_var (x);
  display_var (y);
  display_var (z);

  // Wrong interpretations !!!
  cout << "integer interpreted as float = "<<x.val.fval<<endl;
  cout << "float interpreted as int = "<<y.val.ival<<endl;
  cout << "string interpreted as float = "<<z.val.fval<<endl;

  return 0;
}
