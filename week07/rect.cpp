#include <iostream>
#include <cmath>  // for sqrt()
using namespace std;

class point {
	int x, y;
	public:
	point (int a, int b) {x=a; y=b;}
	point (){}
	int getx(){ return x;}
	int gety(){ return y;}
	int setx(int a){ x=a;}
	int sety(int a){ y=a;}
	void show() {cout <<x <<", "<<y << endl;}

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
	rectangle (point a, point b){
		topleft.x = a.x;
		topleft.y = a.y;
		bottomright.x = b.x;
		bottomright.y = b.y;
	}

	int area () {
		int length = bottomright.x - topleft.x;	// x2-x1
		int height = topleft.y - bottomright.y; // y2-y1
		return length*height;
	}

};

int main (){
	point p1(2,10), p2(6,4);
	cout <<"distance = " << dist(p1, p2) <<endl;

	rectangle r1 (p1, p2);
	cout <<"area = " << r1.area() <<endl;

	return 0;
}
