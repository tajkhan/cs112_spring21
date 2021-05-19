
// 1. uses ptrs or refs
//		- using virtual funcs
//		- override in derived: normal one is called hiding!
// 2. vpointer -> per objecat. eq. to storing obj type info
// 3. vtable -> per class
// 4. dtors should be virtual: delete baseptr;

#include <iostream>
using namespace std;

class shape {
	public:
	virtual void draw() {cout<<"shape: draw called"<<endl;}
	virtual void move() {}
};

class rectangle: public shape {
	int a, b, c, d;
	void draw() {cout<<"rectangle: draw called"<<endl;}
	void move() {}
	void r1() {cout <<a <<b <<c <<d <<endl;}
};

class circle: public shape {
	int x, y, r;
	void draw() {cout<<"circle: draw called"<<endl;}
	void move() {}
	void c1() {}
};

class triangle: public shape {
	int a, b, c, d, e, f;
	void draw() {cout<<"triangle: draw called"<<endl;}
	void move() {}
	void t1() {}
};



int main () {
	shape *s[6];
	rectangle r1, r2;
	circle c1, c2;
  triangle t1, t2;

	r1.draw();	//draw_rect()  // name mangling		//draw_rect (this);
	c1.draw();	//draw_circ()

	s[0] = &r1;
	s[1] = &r2;
	s[2] = &c1;
	s[3] = &c2;
	s[4] = &t1;
	s[5] = &t2;
	//s.r1();

	for (int i=0; i< 6; i++)
		s[i]->draw();

	return 0;
}
