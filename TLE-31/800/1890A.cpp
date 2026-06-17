// An array 𝑏1,𝑏2,…,𝑏𝑛
//  of positive integers is good if all the sums of two adjacent elements are equal to the same value. More formally, the array is good if there exists a 𝑘
//  such that 𝑏1+𝑏2=𝑏2+𝑏3=…=𝑏𝑛−1+𝑏𝑛=𝑘.

// Doremy has an array 𝑎 of length 𝑛
// . Now Doremy can permute its elements (change their order) however she wants. Determine if she can make the array good.

// Input
// The input consists of multiple test cases. The first line contains a single integer 𝑡
//  (1≤𝑡≤100
// ) — the number of test cases. The description of the test cases follows.

// The first line of each test case contains a single integer 𝑛
//  (2≤𝑛≤100
// ) — the length of the array 𝑎
// .

// The second line of each test case contains 𝑛
//  integers 𝑎1,𝑎2,…,𝑎𝑛
//  (1≤𝑎𝑖≤105
// ).

// There are no constraints on the sum of 𝑛
//  over all test cases.

// Output
// For each test case, print "Yes" (without quotes), if it is possible to make the array good, and "No" (without quotes) otherwise.

// You can output the answer in any case (upper or lower). For example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as positive responses.

// Example
// InputCopy
// 5
// 2
// 8 9
// 3
// 1 1 2
// 4
// 1 1 4 5
// 5
// 2 3 3 3 3
// 4
// 100000 100000 100000 100000
// OutputCopy
// Yes
// Yes
// No
// No
// Yes
// Note
// In the first test case, [8,9]
//  and [9,8]
//  are good.

// In the second test case, [1,2,1]
//  is good because 𝑎1+𝑎2=𝑎2+𝑎3=3
// .

// In the third test case, it can be shown that no permutation is good.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; 
    cin >> t;
    while (t--)
    {
        long long n; 
        cin >> n;
        long long a[n]; 
        for (int i = 0; i < n; i++) 
            cin >> a[i];


        map<long long, long long> freq;
        for(int x: a) freq[x]++;

        if(freq.size() >=3) cout <<"No" << endl;
        else{
            long long freq1 = freq.begin()->second;
            long long freq2 = freq.rbegin()->second;

            if(freq1 == freq2)  cout << "Yes" << endl;
            else if(n%2 ==1 && abs(freq1-freq2) ==1){
                cout << "Yes" << endl;
            }else cout << "No" << endl;
            
        }
    }
    return 0;
}


