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
    int x, k;
    cin >> x>> k;
    int left=0, right=x;

    while(left <= right){
        if(left + right == x){
            if(left ==0 && x%k != 0){
                cout << 1 <<endl;
                cout << right << endl;
                return;
            }else if(left!=0 && right !=0){
               cout << 2 <<endl;
                cout << left<<" "<< right << endl;
                return;
            }else{
                left++;
                right--;
            }
        }else{
                if(left%k ==0 || right%k==0){
                    left++;
                    right--;
                }
            }
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