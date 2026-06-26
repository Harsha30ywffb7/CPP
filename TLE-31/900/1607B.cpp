
#include<bits/stdc++.h>

using namespace std;

// Typedefs
using ll = long long;
using ull = unsigned long long;
using ld = long double;


// Constants
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;

// Macros

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define ff first
#define ss second

// Modular exponentiation
ll binpow(ll a, ll b, ll mod = MOD) {
    ll res = 1;
    a %= mod;
    while (b) {
        if (b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

// GCD / LCM
ll gcdll(ll a, ll b) {
    return b ? gcdll(b, a % b) : a;
}

ll lcmll(ll a, ll b) {
    return a / gcdll(a, b) * b;
}

void println(vector<int> a){
    for(int x: a) cout<<x<<" ";
        cout << endl;
    
}

vector<ll> fill(vector<ll> a, ll n){
    for(ll i=0; i<n; i++)
    cin >> a[i];
    return a;

}

void solve() {
    // Write solution here
    ll n,d;
    cin >> n >>d;
    ll ans =0;

    // odd : +1 -2 -3 +4 +5 -6 -7 +8 +9 = odd = {1->(n/4)* 4 +1, 2-> -1, 3-> (n/4)* -4,4->0 }
// even: -1 +2 +3 -4 -5 +6 +7 ==> odd ={1-> -(n/4 )* 4-1, 2-> +1,  }
// -97 98 99 = 110
// 10 99 => 96

    ll num = d%4;
    int flag = n&1 ? 1 : -1;
    ll diff;
    if(num==1){
        diff = (d/4)*4 +1;
    }else if(num==2){
        diff = -1;
    }else if(num ==3){
       diff = (d-2) - (d-1 + d);
    }else{
        diff= 0;
    }
    cout << n + flag*diff << endl;
}

// -1
// 1
// 11
// 110
// 190
// 9012345679
// -87611785637
// 1
// 0




int main() {
    fastio();

    int tc = 1;
    cin >> tc;

    while (tc--) {
        solve();
    }
    return 0;
}
