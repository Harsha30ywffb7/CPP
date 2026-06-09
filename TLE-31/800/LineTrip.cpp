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

bool doesCompletes(vector<int> vec, int dest, int req) {
    // logic
    int prev = 0;
    for(int x: vec){
        int diff = x-prev;
        if(req-diff < 0){
            // tour not possible stop here
            return false;
        }
        prev = x;
        cout << " prev " <<x << endl;
    }
    if(req-2*(dest-prev) <0) return false;
    return true;
}


void solve() {
    // Write solution here
    int n,k;
    cin >> n >>k;
    vector<int> vec(n);
    int req = 2*k;
    int start =0;
    for(int i=0; i<n; i++) cin >> vec[i];
    // if can complete decrease or else increase using bs.
    int mid =( start + req)/2;
    int ans =mid;
    while(start <= req){
        mid = (start + req)/2;
        cout <<" mid "<<mid << endl;
        cout <<" start and req "<< start <<" "<< req<<" "<< endl;
        if(doesCompletes(vec, k, mid)){
            ans = mid;
            req = mid-1;
            }
        else start = mid+1;
    }
    cout << ans << endl;
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

// simple solution is maximum distance between two stations, is the answer.-> no need check like this.
// max diff is the pattern behind it.
// i make myself a harder solution.