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


void solve() {
    // Write solution here
    int n,k;
    cin >> n>>k;
    for(int i=0; i<n; i++) cin >> vec[i];

    if(is_sorted(vec.begin(), vec.end())) {
        cout << "YES" << endl;
        return;
    }

    if(n==1){
        cout << "YES" << endl;
        return;
    }else{
        if(k==1) cout << "NO" << endl;
        else {
            cout << "YES" << endl;
        return;
        }
    }

    return;
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


// Theofanis is busy after his last contest, as now, he has to deliver many halloumis all over the world. He stored them inside 𝑛
//  boxes and each of which has some number 𝑎𝑖
//  written on it.

// He wants to sort them in non-decreasing order based on their number, however, his machine works in a strange way. It can only reverse any subarray†
//  of boxes with length at most 𝑘
// .

// Find if it's possible to sort the boxes using any number of reverses.

// †
//  Reversing a subarray means choosing two indices 𝑖
//  and 𝑗
//  (where 1≤𝑖≤𝑗≤𝑛
// ) and changing the array 𝑎1,𝑎2,…,𝑎𝑛
//  to 𝑎1,𝑎2,…,𝑎𝑖−1,𝑎𝑗,𝑎𝑗−1,…,𝑎𝑖,𝑎𝑗+1,…,𝑎𝑛−1,𝑎𝑛
// . The length of the subarray is then 𝑗−𝑖+1
// .

// Input
// The first line contains a single integer 𝑡
//  (1≤𝑡≤100
// ) — the number of test cases.

// Each test case consists of two lines.

// The first line of each test case contains two integers 𝑛
//  and 𝑘
//  (1≤𝑘≤𝑛≤100
// ) — the number of boxes and the length of the maximum reverse that Theofanis can make.

// The second line contains 𝑛
//  integers 𝑎1,𝑎2,…,𝑎𝑛
//  (1≤𝑎𝑖≤109
// ) — the number written on each box.

// Output
// For each test case, print YES (case-insensitive), if the array can be sorted in non-decreasing order, or NO (case-insensitive) otherwise.

// Example
// InputCopy
// 5
// 3 2
// 1 2 3
// 3 1
// 9 9 9
// 4 4
// 6 4 2 1
// 4 3
// 10 3 830 14. -> max k sort always. -> 3 10 830 14 -> 3 10 14 830 -> for every i upto if not sorted.
// 2 1
// 3 1
// OutputCopy
// YES
// YES
// YES
// YES
// NO
// Note
// In the first two test cases, the boxes are already sorted in non-decreasing order.

// In the third test case, we can reverse the whole array.

// In the fourth test case, we can reverse the first two boxes and the last two boxes.

// In the fifth test case, it can be shown that it's impossible to sort the boxes.

// 3 2
// 2 3 1


