#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string txt, pat;
    cin >> txt >> pat;

    map<char, int> mpPat;
    map<char, int> mpCurr;

    for(char ch: pat) {
        mpPat[ch]++;
    }

    int n = txt.size();
    int k = pat.size();

    int l = 0, r = 0, ans = 0;
    while (r < n)
    {
        mpCurr[txt[r]]++;

        if(r - l + 1 == k) {
            if(mpCurr == mpPat) {
                ans++;
            }

            // reset l's character 
            mpCurr[txt[l]]--;
            if(mpCurr[txt[l]] == 0) {
                mpCurr.erase(txt[l]);
            }

            l++; r++;
        } else {
            r++;
        }
    }

    cout << ans;
    

    return 0;
}