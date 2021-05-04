#include <iostream>

using namespace std;

class human {
	string name;
	string dob;
	int age;

	protected:
	char gender;
	
	public:
	human (string n = "abc", string d ="1 Aug 2000", int a = 18, char g ='M') {
		cout<<"human: def ctor called"<<endl;
		name =n;
		dob = d;
		age = a;
		gender = g;
	}

	void show () { cout << name << " is " << gender << " and "<< age <<" years old" << endl;}

	~human(){
		cout<<"human: dtor called"<<endl;
	}
};

// class Newclassname : AccessSpecifier Oldclassname { body of new clas };

class point {
	int x, y;
	public:
	point () {cout<<"point: def ctor called"<<endl;}
	~point(){
		cout<<"point: dtor called"<<endl;
	}
};

class student : public human {
	string uni;
	float gpa;
	point p;

	public:
	student (string n = "abc", string d ="1 Aug 2000", int a = 18, char g ='M', string u = "GIKI", float gp = 2.3) : human (n, d, a, g) {
		cout<<"student: def ctor called"<<endl;
		uni = u;
		gpa = gp;
	}
	~student(){
		cout<<"student: dtor called"<<endl;
	}
	
	void showgender () { cout << gender << endl;}
	//void showname () { cout << name<< endl;}
	

	void show () { human::show(); cout << uni << ", " << gpa << endl;}	// function OVERRIDING
};

// Order of creation/ctors: base class ctor, member variabels ctors, derived class ctor 
// Order of desctruction/dtor: derived class dtor, member variables dtors, base class dtor

int main () {

  human a;
  human b("ghk", "12 Dec 1999", 24, 'F');

	student c("xyz", "12 Jan 1999", 24, 'F');
	a.show();
	b.show();
	c.show();	
	c.showgender();	
	return 0;
}
