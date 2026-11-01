#include<iostream>
#include "name.h"
using namespace std;
void print(Name _name){
		cout << _name << endl;
	}

int main(){
    Name name1("Object", 'O', "Programming");
    cout << name1 << endl;		//It prints Object O. Programming
    print(name1);  
    cout << name1 << endl;

    return 0;
}
