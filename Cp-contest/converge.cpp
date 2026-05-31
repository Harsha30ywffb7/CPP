#include <iostream>
#include <vector>

using namespace std;
// https://codeforces.com/contest/2232/problem/A
int main() {
    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;
        vector<int> vec(n);
        for(int i=0; i<n; i++){
            cin >> vec[i];
        }

        sort(vec.begin(), vec.end());
        int l=0,r=n-1, ans=0;
        while(l<r && vec[l] != vec[r]){
            l++;
            --r;
            ans++;
        }

        cout << ans;
        // cout << "end " << endl;
    }

    return 0;
}

// bool solve(vector<int> vec, int k) {
//     long long modulo = 1000000009;
// }