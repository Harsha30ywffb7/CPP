// Given a positive integer 𝑛
// , find the maximum size of an interval [𝑙,𝑟]
//  of positive integers such that, for every 𝑖
//  in the interval (i.e., 𝑙≤𝑖≤𝑟
// ), 𝑛
//  is a multiple of 𝑖
// .

// Given two integers 𝑙≤𝑟
// , the size of the interval [𝑙,𝑟]
//  is 𝑟−𝑙+1
//  (i.e., it coincides with the number of integers belonging to the interval).

// Input
// The first line contains a single integer 𝑡
//  (1≤𝑡≤104
// ) — the number of test cases.

// The only line of the description of each test case contains one integer 𝑛
//  (1≤𝑛≤1018
// ).

// Output
// For each test case, print a single integer: the maximum size of a valid interval.

// Example
// InputCopy
// 10
// 1
// 40
// 990990
// 4204474560
// 169958913706572972
// 365988220345828080
// 387701719537826430
// 620196883578129853
// 864802341280805662
// 1000000000000000000
// OutputCopy
// 1
// 2
// 3
// 6
// 4
// 22
// 3
// 1
// 2
// 2
// Note
// In the first test case, a valid interval with maximum size is [1,1]
//  (it's valid because 𝑛=1
//  is a multiple of 1
// ) and its size is 1
// .

// In the second test case, a valid interval with maximum size is [4,5]
//  (it's valid because 𝑛=40
//  is a multiple of 4
//  and 5
// ) and its size is 2
// .

// In the third test case, a valid interval with maximum size is [9,11]
// .

// In the fourth test case, a valid interval with maximum size is [8,13]
// .

// In the seventh test case, a valid interval with maximum size is [327869,327871]
// .


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