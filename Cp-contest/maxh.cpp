#include <iostream>
#include <vector>
#include<bits/stdc++.h>

using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;
        vector<long> vec(n);
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }
        long ans = 1e8, tot=0;

        for (int i = 0; i < n; i++) {
            tot += vec[i];
            ans = min(ans, tot/(i+1));
            cout << ans <<" ";
        }
        cout << endl;
    }

    return 0;
}