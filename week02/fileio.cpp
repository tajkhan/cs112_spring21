#include <fstream>
#include <iostream>

using namespace std;

int main () {

  int x = 0;
  float f = 0.0;
  char z = 'E';

  ofstream a {"cc.txt"};
  if (!a){ cerr << "Error reading file" << endl;
    exit(0);
  }

  a << x <<" "<< z << " "<< f;

  cout << "x="<<x<<endl;
  cout << "f="<<f<<endl;
  cout << "z="<<z<<endl;

  return 0;
}
