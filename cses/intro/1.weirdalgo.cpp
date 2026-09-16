#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
        ll n;
    cin >> n;
    cout <<n ;

    while(n>1){
        if(n%2 ==0){
            n=n/2;
        }else{
            n = 3*n+1;
        }
        cout << " "<<n;
    }
}

int main() {

    // ll t;
    // cin >> t;

    // while (t--) {
        solve();
    // }
        return 0;
}