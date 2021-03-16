#include <iostream>
using namespace std;

struct student {
	char name[100];
	int age;
	char gender;
	float gpa;
};

int main(){
	student x[3] = {{"adaf", 12, 'M', 2.3}, {"ffff", 12, 'F', 3.3}, {"HHH", 52, 'M', 1.3}};
	student *p = &x[0];

  for (int i=0; i<3; i++) {
    cout << "data for student # " << i << endl;
		cout << (p+i)->name << endl;
		cout << (p+i)->gpa << endl;
		cout << (p+i)->age << endl;
		cout << (p+i)->gender << endl;
	}

	return 0;
}
