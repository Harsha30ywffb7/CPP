// You are given an array of 𝑛
//  positive integers 𝑎1,𝑎2,…,𝑎𝑛
// . In one operation, you can choose any number of the array and add 1
//  to it.

// Make at most 2𝑛
//  operations so that the array satisfies the following property: 𝑎𝑖+1
//  is not divisible by 𝑎𝑖
// , for each 𝑖=1,2,…,𝑛−1
// .

// You do not need to minimize the number of operations.

// Input
// Each test contains multiple test cases. The first line contains the number of test cases 𝑡
//  (1≤𝑡≤104
// ). The description of the test cases follows.

// The first line of each test case contains an integer 𝑛
//  (1≤𝑛≤104
// ) — the length of the given array.

// The second line of each test case contains 𝑛
//  integers 𝑎1,𝑎2,…,𝑎𝑛
//  (1≤𝑎𝑖≤109
// ) — the given array.

// It is guaranteed that the sum of 𝑛
//  over all test cases does not exceed 5⋅104
// .

// Output
// For each test case, print the answer on a separate line.

// In the only line, print 𝑛
//  integers — the resulting array 𝑎
//  after applying at most 2𝑛
//  operations.

// We can show that an answer always exists under the given constraints. If there are multiple answers, print any of them.

// Example
// InputCopy
// 3
// 4
// 2 4 3 6
// 3
// 1 2 3
// 2
// 4 2
// OutputCopy
// 4 5 6 7
// 3 2 3
// 4 2
// Note
// In the first test case, the array [4,5,6,7]
//  can be achieved by applying 2
//  operations to the first element, 1
//  operation to the second element, 3
//  operations to the third element, and 1
//  operation to the last element. The total number of operations performed is 7
// , which is less than the allowed 8
//  operations in this case.

// In the second test case, the array [3,2,3]
//  can be achieved by applying two operations to the first element. Another possible resulting array could be [2,3,5]
// , because the total number of operations does not need to be minimum.

// In the third test case, not applying any operations results in an array that satisfies the statement's property. Observe that it is not mandatory to make operations.

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
    ll n;
    cin >>n;
    vector<ll> vec(n);

    vec = fill(vec, n);

    for (int i = 0; i < n; i++)
		{
			if (vec[i] == 1)
				vec[i]++; 
		}


		for (int i = 0; i < n - 1; i++)
		{
			if (vec[i + 1] % vec[i] == 0)
				vec[i + 1]++; 
		}
    println(vec);
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