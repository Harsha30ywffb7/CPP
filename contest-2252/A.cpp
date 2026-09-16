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

void println(vector<ll> a){
    for(ll x: a) cout<<x<<" ";
        cout << endl;
    
}

vector<ll> fill(vector<ll> a, ll n){
    for(ll i=0; i<n; i++)
    cin >> a[i];
    return a;

}

void solve() {
    // Write solution here
    ll n;
    cin >> n;
    vector<ll> vec(n);
    vec = fill(vec, n);
   
    println(vec);
    // if any freq is greater than >=2 of the entire all frequencies then that causes the last one.
    ll sum =0;
    if(n==1){
        sum = vec[0];
    }
    if(is_sorted(vec.begin(), vec.end()) && ){

    }
    cout << sum << endl;


}

int main() {
    fastio();

    int tc = 1;
    cin >> tc;
    cout << "-------------- output lines printing -------------" <<endl;

    while (tc--) {
        solve();
    }

    return 0;
}

// ideas.
/**
to make the max, 
atleast one between three same freq. upto 4 it takes. another one element for the maximise.
count all freqs.

atleast find how many distinct needed,

// only consecutives must allow in the last only.
if one no problem
two also no problem
three

always max frequency first.
*/