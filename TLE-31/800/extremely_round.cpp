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


void solve() {
    // Write solution here
    long long n;
    cin >>n;
    long long t=10,count=0;
    if(n<=10){
        cout << n << endl;
        return;
    }
    while(n >=t){
        count +=9;
        t *=10;
    }
    t /=10;
    count += n/t;
    cout << count << endl;

}

int main() {
    fastio();

    int tc;
    cin >> tc;

    while (tc--) {
        solve();
    }
    return 0;
}