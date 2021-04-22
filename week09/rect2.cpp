#include <iostream>
#include <cmath>  // for sqrt()
//using namespace std;

namespace ThreeD {
	class pt {
		int x, y, z;
		public:
		void show() {std::cout <<"("<<x<<","<<y<<","<<z<<")"<<std::endl;}
	};
}

class point {
	int x, y;
	public:
	//point (){ cout << "def ctor called"<<endl;}
	point (int a, int b) {x=a; y=b; std::cout << "2nd ctor called"<<std::endl;}
	point (point const & p) {x=p.x; y=p.y; std::cout << "Cpy ctor called"<<std::endl;}
	int getx(){ return x;}
	int gety(){ return y;}
	int setx(int a){ x=a;}
	int sety(int a){ y=a;}
	void show() {std::cout <<x <<", "<<y << std::endl;}

	friend float dist (point a, point b);	// dist() has to access private members
	friend class rectangle;	// all member funcs of class rect can now access private members of point
};


float dist (point a, point b) {
	int sq_of_dist = (b.x-a.x)*(b.x-a.x) + (b.y-a.y)*(b.y-a.y);
	float d = sqrt (sq_of_dist);
	return d;
}

class rectangle {
	point topleft;
	point bottomright;
	public:
	rectangle (point a, point b) : topleft{a}, bottomright{b} {
	//rectangle (point a, point b) {
		//topleft = a;
		//bottomright = b;
	}

	int area () {
		int length = bottomright.x - topleft.x;	// x2-x1
		int height = topleft.y - bottomright.y; // y2-y1
		return length*height;
	}

};

int main (){
	using namespace ThreeD;

	point p1(2,10), p2(6,4);

	pt p3;
	p3.show();
	//cout <<"distance = " << dist(p1, p2) <<endl;

	//rectangle r1 (p1, p2);
	//cout <<"area = " << r1.area() <<endl;

	return 0;
}
