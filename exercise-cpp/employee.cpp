// Author : nishj347 @github
// Write a program that would print the information (name, year of joining, salary,
// address) of three employees by creating a class named 'Employee'. The output should
// be as follows:
// Name Year of joining Address
// Robert 1994 64C- WallsStreat
// Sam 2000 68D- WallsStreat
// John 1999 26B- WallsStreat


#include <iostream>
#include<string>
using namespace std;
class employee{
    string name;
    int year_of_joining;
    int salary;
    string address;

    public:
    employee( string name,
    int year_of_joining,
    int salary,
    string address){
        this->name=name;
        this->year_of_joining=year_of_joining;
        this->salary=salary;
        this->address=address;
    }

void printinfo(){
    cout << name << "\t\t" << year_of_joining << "\t\t" << salary << "\t\t" << address << endl;
}

};

int main(){
    employee e1("Robert", 1994, 4000, "64C- WallsStreat");
    employee e2("Sam",    2000, 3456, "68D- WallsStreat");
    employee e3("John",   1999, 80000, "26B- WallsStreat");

    cout<<"name\t\t"<<"year of joining\t\t"<<"salary\t\t"<<"address"<<endl;
    e1.printinfo();
    e2.printinfo();
    e3.printinfo();
    return 0;
}
