#include <iostream>
using namespace std;

struct date {
	int d,m,y;

  void init (int x, int w, int z){d=x;m=w; y=z;}
  void add_day (int x) {
	 d+=x;
   //if(x>30)
		add_month(1);
  }
  void add_month (int x) { m+=x;}
  void print (){cout <<"d="<<d<<", m="<<m<<", y="<<y<<endl;}
};

int main(){
  date d;
  d.init(15,2,2020);
  d.print();
  date d2;
  d2.init(23,3,2021);
  d2.print();
	d.add_day(5);
	d2.add_month(3);
  d.print();
  d2.print();

 return 0;
}
