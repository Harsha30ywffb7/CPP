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

void println(vector<int> a, int n){
    for(int i=0; i<n; i++) cout<<a[i]<<" ";
        cout << endl;
}

vector<int> fill(vector<int> a, int n){
    for(int i=0; i<n; i++)
    cin >> a[i];
    return a;

}


void solve() {
    // Write solution here
    int n;
    cin >> n;
    int sum=0;
    for(int i=0;i<n-1; i++){
        int num;
        cin >> num;
        sum += num;
    }
    cout << 0-sum << endl;
}

int main() {
    fastio();

    int tc = 1;
    cin >> tc;

    while (tc--) {
        solve();
    }

    return 0;
}

// 5
// 3
// 2 2 2
// 5
// 1 2 3 4 5
// 3
// 1 3 5
// 7
// 1 7 7 2 9 1 4
// 5
// 4 8 12 12 4
