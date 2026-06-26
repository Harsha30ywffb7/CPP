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
    int n, k;
    cin >> n>>k;
    string s;
    cin >>s;

    vector<int> vec(n*k);

    vec = fill(vec, n*k);

    int diff;

    if((n*k )%2 ==0){
        diff = n/2 -1;
    }else{
        diff = (n+1)/2;
    }
    int sum =0, len = n*k;
    for(int i=0; i<k; i++){
        sum += vec[len-(diff*k)-1];
    }

    cout << sum << endl;


    // Test case 3
// : [2,91,92,95],[4,36,53,82],[16,18,21,27]
// . The medians are 91,36,18
// . Their sum is 145

// 2 4 16 18 21 27 36 53 82 91 92 95
    

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