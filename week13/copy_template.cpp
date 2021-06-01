#include <iostream>
using namespace std;

//template <class T>
template <typename T>
class myarray{
	int size;
  T *val;

  public:

  int getsize () {return size;}

	myarray(int s){
		size = s;
		val = new T [size];
    if (val==nullptr){cerr<<"Memory error";exit(-1);}
    cout <<"allocated "<<val<<endl;
  }

  void setval(int index, T value){
		if (index >=0 && index<size)
			val[index] = value;
		else
		{cerr<<"Index error"; exit(-1);}
  }

  T getval(int index){
		if (index >=0 && index<size)
			return val[index];
		else
		{cerr<<"Index error"; exit(-1);}
  }

  void print_array(){
		cout << "array: ";
		for (int i=0; i<size; i++)
		 cout << val[i] <<", ";
		cout << endl;
  }

  ~myarray(){
		if (val!=nullptr){
      cout <<"deleted "<<val<<endl;
			delete [] val;
			val = nullptr;
		}
	}
};


template <typename Z>
class dummy {
	Z var;
	public:
	dummy (): var{} {}
	void show () ;
};


template <typename A>
void dummy<A>:: show() { cout <<"dumm var = " <<var<<endl;}

/*
int sum (myarray local_a){
	int s = 0;
	for (int i=0; i<local_a.getsize(); i++)
		s += local_a.getval(i);

  return s;
}
*/

class employee{
	string name;
	int salary;
	public:
	employee (): name{"name"}, salary{1000} {};
	employee (string n, int s): name{n}, salary{s} {};
	void print(){ cout << name <<" works for Rs. " << salary << endl;}
	bool operator > (const employee & rhs) {
		if (salary > rhs.salary)
			return true;
		else
			return false;
	}
	friend ostream& operator << (ostream & os, employee e);
};

ostream & operator << (ostream & os, employee e) {
	os << e.name << ", salaray= "<<e.salary<<endl;
	return os;
}
	

template <typename T>
void bubblesort (T a[], int size) {
	for (int i=0; i<size; i++)
		for (int j=0; j<size; j++)
			if (a[i] > a[j]) {
				T temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
}

int main (){

	int A[] = {32, 1, 5, 2, 11, 7, 4, 5};
	for (int i=0; i< 8; i++)
		cout << A[i] <<", ";
	cout <<endl;

	bubblesort(A, 8);

	for (int i=0; i< 8; i++)
		cout << A[i] <<", ";
	cout <<endl;

	char B[] = {'Z', 'W', 'C', 'T', 'Y'};
	for (int i=0; i< 5; i++)
		cout << B[i] <<", ";
	cout <<endl;

	bubblesort <char> (B, 5);

	for (int i=0; i< 5; i++)
		cout << B[i] <<", ";
	cout <<endl;

	employee C[] = {employee("dd",123),
									employee("dd",125),
									employee("dd",12003),
									employee("dd",12)};

	for (int i=0; i< 4; i++)
		cout << C[i] <<", ";
	cout <<endl;

	bubblesort (C, 4);

	for (int i=0; i< 4; i++)
		cout << C[i] <<", ";
	cout <<endl;

  return 0;
}
