// C++ includes used for competitive programming
#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdalign>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif

// C++ Containers & Algorithms
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <type_traits>
#include <typeindex>
#include <unordered_map>
#include <unordered_set>
#endif

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
    string s;
    cin >> s;
    // cout << s<< endl;
    vector<int> freq(26,0);
    for(char ch: s){
        freq[ch-'A']++;
    }
    // cout << freq[0]<< endl;
    string oddChar="";
    bool isOddSeen=false;
    string palindrome="";
    for(int i=0; i<26; i++ ){
        int num = freq[i];
        if(isOddSeen &&( num%2==1)) {
            cout << "NO SOLUTION" << endl;
            return;
        }

        if(num%2==1){
            for(int j=0; j<num; j++) oddChar += (char) ('A'+i);
            isOddSeen = true;
            continue;
        }
        if(num%2 ==0){
            for(int j=0; j<num/2; j++) palindrome += (char)('A'+ i);
            // all adds up here
        }
    }
    // need to add another half
    string rev= palindrome;
    reverse(rev.begin(), rev.end());

    if(isOddSeen){
        palindrome += oddChar + rev;
    }else{
        palindrome +=rev;
    }
    cout << palindrome <<endl;

}


int main() {
    fastio();

    int tc=1;
    // cin >> tc;

    while (tc--) {
        solve();
    }

    return 0;
}