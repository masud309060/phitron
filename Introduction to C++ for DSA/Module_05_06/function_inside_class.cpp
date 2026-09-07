#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    string name;
    int roll;

    Student(string name, int roll) {
        this->name = name;
        this->roll = roll;
    }

    void hello() {
        cout << "Hello from " << name;
    }
};

int main() {
    Student masud("Md Masud Rana", 23);

    masud.hello();

    return 0;
}