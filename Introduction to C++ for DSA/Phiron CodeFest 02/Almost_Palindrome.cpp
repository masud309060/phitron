#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    for (int time = 0; time < t; time++)
    {
        string s;
        cin >> s;

        int freq[26] = {0};
        int s_size = s.size();

        for (int i = 0; i < s_size; i++)
        {
            int index = s[i] - 'a';
            freq[index]++;
        }

        int total_odd = 0;
        for (int i = 0; i < 26; i++)
        {
            if(freq[i] > 0) {
                if(freq[i] % 2 != 0) {
                    total_odd++;
                }
            }
        }

        int add_new = max(total_odd - 1, 0);

        cout << add_new << endl;
    }

    return 0;
}