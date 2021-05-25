#include "teacher.hpp"

teacher::teacher (string a = "dummmy", string b = "dummy2") {name =a; faculty= b;}

void teacher::display(){
	cout <<"Teacher "<< name << " works in " << faculty << "faculty" <<endl;
}
