#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmp(Student l, Student r) {
    int total_mark_l = l.math_marks + l.eng_marks;
    int total_mark_r = r.math_marks + r.eng_marks;

    if(total_mark_l == total_mark_r) {
        return l.id < r.id;
    } else {
        return total_mark_l > total_mark_r;
    }
}

int main() {
    int n;
    cin >> n;
    Student st[n];

    for (int i = 0; i < n; i++)
    {
        cin >> st[i].nm >> st[i].cls >> st[i].s >> st[i].id >> st[i].math_marks >> st[i].eng_marks;
    }

    sort(st, st + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << st[i].nm << " " << st[i].cls << " " << st[i].s << " " << st[i].id << " " << st[i].math_marks << " " << st[i].eng_marks << endl;
    }

    return 0;
}