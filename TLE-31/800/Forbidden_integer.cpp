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
}


void solve() {
    // Write solution here
    int n,k,x;
    cin >> n>> k>> x;
    vector<int> ans;

if(x != 1){
    for(int i=0; i<n; i++) ans.pb(1);
}else{
    if(k==1 || (k==2 && n%2==1)){
        cout <<"No"<< endl;
        return;
    }
    else{
        if(n%2 ==0) for(int i=0; i<n/2; i++) ans.pb(2);
    else{
        for(int i=0; i<n/2 -1; i++) ans.pb(2);
        ans.pb(3);
    }
    } 
}

        cout << "Yes"<<'\n';
        cout << ans.size() << '\n';
        println(ans);
    cout <<'\n';
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

// Key note: every number can be we get through 1 and 2.
// if one is hidden then 2 and 3 make it work.