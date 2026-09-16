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
    if(n<10){
        cout <<"NO"<< endl;
            return;
    }
    //nearly lucky condition
    int luck=0;
    while(n>0){
        if(n%10 ==4 || n%10 ==7) luck++;
        n /=10;
    }
    while(n > 0){
     if(n%10 != 4 && n%10 != 7 ){
        if(luck == 4 || luck ==7){
            cout <<"YEs"<< endl;
        }else{
             cout <<"NO"<< endl;
        }
            return;
        }
        n /= 10;
    }
    cout << "YES" << endl;
}

int main() {
    fastio();

    int tc = 1;
    // cin >> tc;

    while (tc--) {
        solve();
    }

    return 0;
}#include<bits/stdc++.h>

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
    if(n<10){
        cout <<"NO"<< endl;
            return;
    }
    //nearly lucky condition
    int luck=0;
    ll n1= n;
    while(n1>0){
        if(n1%10 ==4 || n1%10 ==7) luck++;
        n1 /=10;
    }
    while(n > 0){
     if(n%10 != 4 && n%10 != 7 ){
        if(luck == 4 || luck ==7){
            cout <<"YES"<< endl;
        }else{
             cout <<"NO"<< endl;
        }
            return;
        }
        n /= 10;
    }
    cout << "YES" << endl;
}

int main() {
    fastio();

    int tc = 1;
    // cin >> tc;

    while (tc--) {
        solve();
    }

    return 0;
}