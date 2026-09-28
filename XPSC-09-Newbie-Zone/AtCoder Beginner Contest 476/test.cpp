#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--) {
	    int n;
	    cin >> n;
	    
	    if(n % 3 == 0) {
	        cout << 0 << endl;
	    } else {
            int min_op = INT_MAX;
            
            int process1 = 3 - (n % 3);
            int new_n = (n/5 * 5) + 5;
            int process2 = 1;
            if(new_n % 3 != 0) {
                process2 += (3 - (new_n % 3));
            }
            
            min_op = min(process1, process2);
            
            cout << min_op << endl;
	    }
	}

}
