#include <bits/stdc++.h>
using namespace std;

class Student {
    public: 
    string name;
    int roll;
    int marks;
};


int main() {
    int n;
    cin >> n;

    Student st[n];

    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, st[i].name);
        cin >> st[i].roll >> st[i].marks;
    }

    for (int i = 0; i < n; i++)
    {
        cout << st[i].name << " " << st[i].roll << " " << st[i].marks << endl;
    }

    return 0;
}