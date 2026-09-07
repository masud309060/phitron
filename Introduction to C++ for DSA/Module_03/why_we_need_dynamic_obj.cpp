#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa) {
        this->roll = roll;
        this->cls= cls;
        this->gpa = gpa;
    }

};

Student* fun() {
    Student* sakib = new Student(11, 5, 4.98);
    return sakib;
}

int main() {
    Student* p = fun();

    cout << p->roll << " " << p->cls << " " << p->gpa << endl;

    return 0;
}