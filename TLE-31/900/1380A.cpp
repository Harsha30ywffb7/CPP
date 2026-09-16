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
    vec = fill(vec,n);
    // find middle and try to find a mins of the left and right side.
    // try to find all max numbers indices , but they shouldnt be on the borders.

    vector<int> ref(n);
    int leftIndex = -1, rightIndex= -1;

    for(int i=1; i<n-1; i++){
        // fetch second to but last element
        // check left
        for(int left =0; left <i; left++){
            if(vec[left] < vec[i]){
                leftIndex = left;
                break;
            }
        }
        for(int right =i+1; right <n; right++){
            if(vec[right] < vec[i]){
                rightIndex = right;
                break;
            }
        }
        // cout <<"the debugger " << leftIndex <<" "<< i <<" "<< rightIndex << endl;
        if(leftIndex >=0 && rightIndex >0){
            cout << "YES" << endl;
            cout << leftIndex+1 <<" "<< i+1 <<" "<< rightIndex+1 << endl;
            return;
        }
        leftIndex = -1;
        rightIndex =-1;
    }
    cout << "NO" << endl;
}
    



int main() {
    fastio();

    // int tc = 1;
    int tc;
    cin >> tc;

    // cout << "-----------------output from here---------------------" << endl;
    while (tc--) {
        solve();
    }

    return 0;
}