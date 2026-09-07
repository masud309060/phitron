#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // pair<string, int> student = {"Masud Rana", 25};
    // cout << student.first << " " << student.second << "\n";

    // student.first = "Shohel Rana";
    // auto [name, roll] = student;
    // cout << name << " " << roll << endl;

    // int n;
    // cin >> n;
    // pair<string, int> students[n];

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> students[i].first >> students[i].second;
    // }

    // // range based for loop
    // for(auto [x, y]: students) {
    //     cout << x << " " << y << endl;
    // }

    // tuple<string, int, string> t = make_tuple("rahim", 21, "0173..");
    // cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << '\n';
    // auto [name, roll, phone] = t;
    // cout << name << " " << roll << " " << phone << '\n';


    int n;
    cin >> n;
    tuple<string, int, string> students[n];

    for (int i = 0; i < n; i++)
    {
        string name;
        int age;
        string phone;

        cin >> name >> age >> phone;
        students[i] = {name, age, phone};
    }

    for(auto [x, y, z]: students) {
        cout << x << " " << y << " " << z << '\n';
    }
    








    // pair<string, pair<int, string>> p = make_pair("Masud", make_pair(20, "01674"));
    // pair<string, pair<int, string>> p = {"Rana", {20, "01674"} };

    // string name = p.first;
    // int age = p.second.first;
    // string phone = p.second.second;

    // cout << name << " " << age << " " << phone << '\n';


    

    return 0;
}