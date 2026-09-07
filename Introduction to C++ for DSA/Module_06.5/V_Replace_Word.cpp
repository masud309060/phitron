#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;

    cin >> s;

    int size = s.size() - 4;
    for (int i = 0; i < size; i++)
    {
        string element(s, i, 5);

        if(element == "EGYPT") {
            s.replace(i, 5, " ");
            size -= 4;
        }
    }

    cout << s;

    return 0;
}