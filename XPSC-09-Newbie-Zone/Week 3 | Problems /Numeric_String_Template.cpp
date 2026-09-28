#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<long long int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int q;
        cin >> q;
        while (q--)
        {
            string s;
            cin >> s;

            int sz = s.size();
            if(sz != n) {
                cout << "NO" << endl;
            } else {
                bool flag = true;
                map<char, long long int> mp1;
                map<long long int, char> mp2;

                for (int i = 0; i < sz; i++)
                {
                    auto it1 = mp1.find(s[i]);
                    auto it2 = mp2.find(arr[i]);

                    if(it1 != mp1.end() && it1->first == s[i] && it1->second != arr[i]) {
                        flag = false;
                        break;
                    }

                    if(it2 != mp2.end() && it2->first == arr[i] && it2->second != s[i]) {
                        flag = false;
                        break;
                    }

                    mp1[s[i]] = arr[i];
                    mp2[arr[i]] = s[i];
                }

                if(flag == true) cout << "YES" << endl;
                else cout << "NO" << endl;
            }
        }
        

        
    }
    

    return 0;
}