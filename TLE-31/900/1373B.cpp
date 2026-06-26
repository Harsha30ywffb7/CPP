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
    // ll n;
    string s;
    cin >> s;
    int n = s.length();

    int turn=1,i=0; // alice=1, bob=0

    stack<char> st;

    while(i<n){
        // every user must able to pop before going to end.
        if(st.empty()){
            // cout << " stack top and index" <<" "<<i<<endl;
            st.push(s[i]);
        }else{
            // cout << " stack top and index" << st.top() <<" "<<i<<endl;
                while(i<n && !st.empty() && st.top() != s[i]){
           
            st.pop();
            //  cout <<" i value is "<< i <<" s[i] is"<< s[i]<<" the top value is "<< st.top() << endl;
            i++;
            turn = turn ? 0: 1;
            //  cout << "next turn to play" << turn << endl;
        }
        if(i<n) {
            st.push(s[i]);
            // cout << " index is pushed " << i << endl;}
        // cout <<" stack is "<< st << endl;
        }
         i++;
    
    }
    }
    // 0 0 0 0 1 1 1 1 1

    // cout << "string is "<< s<< endl;

    if(turn){
        cout << "NET" <<'\n';
    }else{
        cout << "DA" <<'\n';
    }
    
    // 10 111 0 0 1
    // - > alice
    // 1 0 -> bob
    // 1 1 1 0 -> alice
    // 1 1 0 -> bob
    // 1 1 1 -> bob
    // so winner alice.
    // 0 0 0 01 1 1 1 1
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