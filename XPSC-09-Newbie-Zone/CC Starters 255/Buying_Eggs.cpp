#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, f;
    cin >> x >> y >> f;

    int total_eggs = 12;

    int firstCost = total_eggs * x;
    int secondCost = total_eggs * y + f;

    cout << min(firstCost, secondCost);

    return 0;
}