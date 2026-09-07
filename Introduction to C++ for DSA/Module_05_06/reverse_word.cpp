#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    stringstream ss(s);

    int count = 0;
    string word;
    while (ss >> word)
    {
        reverse(word.begin(), word.end());

        if(count != 0) cout << " ";
        cout << word;
        count++;
    }
    

    // cout << s;

    return 0;
}