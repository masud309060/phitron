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

int main() {
    Student rakib(1, 5, 4.5);
    Student* karim = new Student(10, 5, 4.56);

    cout << rakib.roll << " " << rakib.cls << " " << rakib.gpa << endl;
    cout << karim->roll << " " << karim->cls << " " << karim->gpa << endl;

    return 0;
}