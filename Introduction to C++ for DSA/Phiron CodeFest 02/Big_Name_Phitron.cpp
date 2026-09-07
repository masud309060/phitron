#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    stringstream ss(s);

    int count = 0;
    string w;
    while (ss >> w)
    {
        if(w == "phitron" || w == "PHITRON" || w == "Phitron") {
            count++;
        }
    }

    cout << count;

    return 0;
}