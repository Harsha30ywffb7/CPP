// You are given a string 𝑠
//  of length 𝑛
// , consisting of lowercase Latin letters, and an integer 𝑘
// .

// You need to check if it is possible to remove exactly 𝑘
//  characters from the string 𝑠
//  in such a way that the remaining characters can be rearranged to form a palindrome. Note that you can reorder the remaining characters in any way.

// A palindrome is a string that reads the same forwards and backwards. For example, the strings "z", "aaa", "aba", "abccba" are palindromes, while the strings "codeforces", "reality", "ab" are not.

// Input
// Each test consists of multiple test cases. The first line contains a single integer 𝑡
//  (1≤𝑡≤104
// ) — the number of the test cases. This is followed by their description.

// The first line of each test case contains two integers 𝑛
//  and 𝑘
//  (0≤𝑘<𝑛≤105
// ) — the length of the string 𝑠
//  and the number of characters to be deleted.

// The second line of each test case contains a string 𝑠
//  of length 𝑛
// , consisting of lowercase Latin letters.

// It is guaranteed that the sum of 𝑛
//  over all test cases does not exceed 2⋅105
// .

// Output
// For each test case, output "YES" if it is possible to remove exactly 𝑘
//  characters from the string 𝑠
//  in such a way that the remaining characters can be rearranged to form a palindrome, and "NO" otherwise.

// You can output the answer in any case (uppercase or lowercase). For example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as positive answers.

// Example
// InputCopy
// 14
// 1 0
// a
// 2 0
// ab
// 2 1
// ba
// 3 1
// abb
// 3 2
// abc
// 6 2
// bacacd
// 6 2
// fagbza
// 6 2
// zwaafa
// 7 2
// taagaak
// 14 3
// ttrraakkttoorr
// 5 3
// debdb
// 5 4
// ecadc
// 5 3
// debca
// 5 3
// abaac
// OutputCopy
// YES
// NO
// YES
// YES
// YES
// YES
// NO
// NO
// YES
// YES
// YES
// YES
// NO
// YES
// Note
// In the first test case, nothing can be removed, and the string "a" is a palindrome.

// In the second test case, nothing can be removed, but the strings "ab" and "ba" are not palindromes.

// In the third test case, any character can be removed, and the resulting string will be a palindrome.

// In the fourth test case, one occurrence of the character "a" can be removed, resulting in the string "bb", which is a palindrome.

// In the sixth test case, one occurrence of the characters "b" and "d" can be removed, resulting in the string "acac", which can be rearranged to the string "acca".

// In the ninth test case, one occurrence of the characters "t" and "k" can be removed, resulting in the string "aagaa", which is a palindrome.


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
    int n,k;
    string s;ter

    cin >> n>>k;
    cin >> s;
    if(k==0){
        if(reverse(s.begin(), s.end()) == s){
            cout << "Yes"<< endl;
        }else{
            cout << "No"<< endl;
        }
        return;
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