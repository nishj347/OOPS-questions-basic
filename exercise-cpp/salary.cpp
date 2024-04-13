//Author : nishj347 @github

// Write a program by creating an 'Employee' class having the following functions
// and print the final salary.
// 1 - 'getInfo()' which takes the salary, number of hours of work per day of employee as
// parameters
// 2 - 'AddSal()' which adds $10 to the salary of the employee if it is less than $500.
// 3 - 'AddWork()' which adds $5 to the salary of the employee if the number of hours of
// work per day is more than 6 hours.
#include <iostream>
using namespace std;

class employee {
    int daysworked;
    int salary;

public:
    employee(int salary = 0, int daysworked = 0) {
        this->salary = salary;
        this->daysworked = daysworked;
    }

    void getinfo() {
        cout << "Enter salary of the employee: ";
        cin >> salary;
        cout << "Enter number of days worked: ";
        cin >> daysworked;
    }

    void addsal() {
        if (salary < 500) {
            salary = salary + 10;
        } else {
            cout << "No increment." << endl;
        }
    }

    void addwork() {
        if (daysworked > 6) {
            salary = salary + 5;
        }
    }

    void display() {
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    employee e;
    e.getinfo();
    e.addsal();
    e.addwork();
    e.display();
    return 0;
}
