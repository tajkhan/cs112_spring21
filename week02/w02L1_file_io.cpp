#include <iostream>
#include <fstream>

using namespace std;

// int a[]; // a--> int *
// char *b[]; // b-->  

// int main (int argc, char **argv) {
int main (int argc, char *argv[]) {

  ofstream os {"hello.txt"};
  int x = 23;

  os << "hello" << endl;
  os << x;  

  ifstream ist {"heelo.txt"}; // ist is an input stream for the file named name
  if (!ist) cerr << "can't open input file " <<endl;
  
  return 0;
}
