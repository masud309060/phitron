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

Student fun() {
    Student sakib(12, 5, 4.98);
    return sakib;
}

int main() {
    // Student rakib(1, 5, 4.5);
    Student obj = fun();

    // cout << rakib.roll << " " << rakib.cls << " " << rakib.gpa << endl;
    cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;

    return 0;
}