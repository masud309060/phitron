#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    int id;
    char name[101];
    char section;
    int totalMark;
};

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        Student s1, s2, s3;
        cin >> s1.id;
        cin >> s1.name;
        cin >> s1.section;
        cin >> s1.totalMark;

        cin >> s2.id;
        cin >> s2.name;
        cin >> s2.section;
        cin >> s2.totalMark;

        cin >> s3.id;
        cin >> s3.name;
        cin >> s3.section;
        cin >> s3.totalMark;

        Student valoPola;

        int maxMark = max({s1.totalMark, s2.totalMark, s3.totalMark});

        if(maxMark == s1.totalMark && maxMark == s2.totalMark && maxMark == s3.totalMark) {
            int minId = min({s1.id, s2.id, s3.id});

            if(minId == s1.id) {
                valoPola = s1;
            } else if(minId == s2.id) {
                valoPola = s2;
            } else {
                valoPola = s3;
            }
        } else if(maxMark == s1.totalMark && maxMark == s2.totalMark) {
            if(s1.id < s2.id) {
                valoPola = s1;
            } else {
                valoPola = s2;
            }
        } else if(maxMark == s1.totalMark && maxMark == s3.totalMark) {
            if(s1.id < s3.id) {
                valoPola = s1;
            } else {
                valoPola = s3;
            }
        } else if(maxMark == s2.totalMark && maxMark == s3.totalMark) {
            if(s2.id < s3.id) {
                valoPola = s2;
            } else {
                valoPola = s3;
            }
        } else if(maxMark == s1.totalMark) {
            valoPola = s1;
        } else if(maxMark == s2.totalMark) {
            valoPola = s2;
        } else if(maxMark == s3.totalMark) {
            valoPola = s3;
        }

        cout << valoPola.id << " " << valoPola.name << " " << valoPola.section << " " << valoPola.totalMark << endl;
    }
    

    return 0;
}