
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
    ll n;
    cin >>n;
    vector<ll> vec(n);
    vec = fill(vec, n);
    long cnt=0, i=0;
    for(i=n-2; i>=0; i--){
        while(vec[i] >= vec[i+1]){
            vec[i] /= 2;
            cnt++;
            if(vec[i]==0){
                break;
            }
        }
        if(vec[i] == 0 && vec[i+1] ==0){
            cout << -1 << endl;
            return;
        } 
    }
    cout << cnt << endl;

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