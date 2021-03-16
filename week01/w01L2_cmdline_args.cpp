#include <iostream>

using namespace std;

// int a[]; // a[0]-->int, a--> int *
// char* b[]; // b[0]-->char*, b--> char**  

// int main (int argc, char **argv) {
int main (int argc, char *argv[]) { //&argv[0]

  cout << "argc = " << argc << endl;
  for (int i=0; i< argc; i++)
	  cout <<"argv["<<i<<"] = "<<argv[i] <<endl;

  return 0;
}
