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
    ll n,x;
    cin >> n >>x;
    bool is_second = false;
    vector<ll> childs(n);
    for(int i=0; i<n;i++){
        cin >> childs[i];
    }
    sort(childs.begin(), childs.end());
    // println(childs);
    // ll sum=childs[0],g=1;
    // // either 1 or 2 exists if there is a place two. if not one no second one.
    // // 9 8 8 9 10 8 5 8 7 10
    // for(ll i=1; i<n; i++){
    //     ll c = childs[i];
    //     // if second not exists yet
    //     if(sum + c <=x && !is_second){
    //         sum +=c;
    //         is_second = true;
            
    //     }else{
    //         // cout << "entered childs " <<c << endl;
    //         sum = c;
    //         g++;
    //         // chance for the second.
    //         is_second = false;

    //     }
    //     // cout << sum << g<< endl;
    // }
    int g=n;
    int l=0,r=n-1;
    while(l<r){
        if(childs[l]+childs[r] <= x){
            g--;
            l++;
            r--;
        }else{
            r--;
        }
    }
    cout << g << endl;
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