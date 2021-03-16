#include <iostream>
using namespace std;

struct student {
        char name[100];
        int age;
        char gender;
        float gpa;
};

int main(){
    student x;
    student *p = &x;

    cout << "data for student # " << endl;
                
    //cin >> x.age;
    //cin >> x.gender;
    cin >> x.gpa;
		//cin.clear(); cin.sync();
		cin.ignore();  // to remove the remaining '\n' character in the buffer
    cin.getline(x.name, 100);
    cout << p->name << endl;;
    cout << p->age<< endl;;
    cout << p->gender<< endl;;
    cout << p->gpa << endl;;

    return 0;
}
