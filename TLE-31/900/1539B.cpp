#include<bits/stdc++.h>
// #include<stdio.h>
// #include<vector>
// #include<string>
// #include<algorithm>
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
    long long n;   
    cin >>n;
    
    string s= to_string(n);

    if(n%25 ==0){
        cout << 0<< endl;
        return;
    }
    int len = s.length();

    int last_five = len - 1;
int last_zero = len - 1;
int last_five_index = len - 1;
int last_zero_index = len - 1;
    while(last_zero_index>=0 && s.at(last_zero_index) != '0'  ){
       
        last_zero_index--;
    }
    last_zero = s.length()-last_zero_index-1;
    while( last_five_index>=0 && s.at(last_five_index) != '5' ){
        last_five_index--;
    }
    last_five = s.length()-last_five_index-1;

    // cout << " last_five dels" << last_five << '\n';
    // cout << " last_zero dels" << last_zero << '\n';
    if(last_five >=0 && last_five < len){
            for(int i=last_five_index; i>=0; i--){
        if(s.at(i) =='2' || s.at(i) =='7'){
             cout << " inside loop breaking bad " << i << endl;
            last_five = last_five + last_five_index-i-1;
            break;
        }
    }
    }

     if(last_zero >=0 && last_zero < len){
            for(int i=last_zero_index; i>=0; i--){
        if(s.at(i) =='2' || s.at(i) =='7'){
            cout << " inside loop breaking bad " << i << endl;
            last_zero = last_zero + (last_zero-i)-1;
            break;
        }
    }
     }

     cout << " last_five dels" << last_five << '\n';
     cout << " last_zero dels" << last_zero << '\n';


    cout << min(last_five, last_zero) << endl;
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