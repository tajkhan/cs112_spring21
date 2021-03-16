#include <iostream>
#define NUMSTUDENTS 3

using namespace std;


struct student {
    char name[100];
    int age;
    char gender;
    float gpa;
};


int main (){

    student x[NUMSTUDENTS];
    for (int i=0; i<NUMSTUDENTS; i++){
        cout << "Enter data for student#" << i << endl;
        cout << "Enter name: ";
        cin >> x[i].name;
        cout << "Enter gender: ";
        cin >> x[i].gender;
        cout << "Enter gpa: ";
        cin >> x[i].gpa;
        cout << "Enter age: ";
        cin >> x[i].age;
    }

    cout << "So, there are " << NUMSTUDENTS << " students" << endl;
    cout << "Their names are:" << endl;
    for (int i=0; i<NUMSTUDENTS; i++){
        cout << x[i].name << endl;
    }

    int sumage = 0;
    for (int i=0; i<NUMSTUDENTS; i++){
        sumage = x[i].age;
    }
    cout << "Their collective age is : " << sumage << endl;

    return 0;
}