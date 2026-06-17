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
    vector<int> vec(n);
    vec = fill(vec,n);
    sort(vec.begin(), vec.end());
    if(vec[0] == vec[n-1]) {
        cout << -1 << endl;
        return;
    }
    int idx=0;
    
    while(vec[idx] == vec[idx+1]){
        idx++;
    }
idx++;
    cout << idx <<" "<< n-idx<< endl;
    println(vec, idx);
    for(int i=idx; i<n;i++){
        cout<<vec[i]<<" ";
    }
    cout << endl;
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
