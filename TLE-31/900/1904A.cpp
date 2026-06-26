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

vector<int> fill(vector<int> a, int n){
    for(int i=0; i<n; i++)
    cin >> a[i];
    return a;

}

void solve() {
    // Write solution here
    int a, b, xk, yk, xq, yq;
    cin >> a>>b >> xk >> yk >> xq >> yq;
    // all possible positions where king and queen can be captured.
    // total possible ways.
    map<string, int> keymap;
    // moves of king.
    string key = xk-a +"-"+yk-b
    mapping(keymap, key);
    string key = xk-a +"-"+yk+b
    mapping(keymap, key);
    string key = xk+a +"-"+yk-b
    mapping(keymap, key);
    string key = xk+a +"-"+yk+b
    mapping(keymap, key);

     string key = xk+b +"-"+yk-a
    mapping(keymap, key);
 string key = xk+b +"-"+yk+a
    mapping(keymap, key);
 string key = xk-b +"-"+yk-a
    mapping(keymap, key);
 string key = xk-b +"-"+yk+a
    mapping(keymap, key);


    // same as above for queen.

    // now check at what postion both are got same string. that means at from single position both are killed by knight


   
}

void mapping(map<string, int> keymap, string key){
     if(keymap.contains(key)){
        keymap[key]++;
    }else{
        keymap.insert(key,1);
    }
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