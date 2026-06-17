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
    ll a, b, c,d;
    cin >>a >>b>>c>>d;

    // for y needed dia, for left using the adj left.
    // while increase for y x also updates.

    // no when b>d y never decreases at any point. even after reached correct x.

    // must preserve all
    if(b > d){
        // never come down.
        cout << -1 << endl;
        return;
    }

    ll steps=0;
    steps += d-b;
    //(0,0)-> (5,5) -> (4,5)
    a += d-b;
    b = d;
    // cout <<"a, b, c, d " << a << " "<< " "<<b<<" "<<c << " "<<d<<" "<<endl;
    if(a<c){
        cout << -1 << endl;
        return;
    }else{
        steps += a-c;
    }
    cout << steps << endl;
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