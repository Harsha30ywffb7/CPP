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
string generateKey(string key, int n){
    string res ="";
    int i=0;
    while(res.length() <=n){
        res += key[i%key.length()];
        // cout << key[]<< endl;
        i++;
    }
    return res;
}
string encyptText(string plainText, string key){
    string res="";
    for(int i=0; i<plainText.length(); i++){
        int num = (plainText[i]-'A')+(key[i]-'A');
        // cout << num<< endl;
        res += (char)( num%26 +'A');
    }
    return res;
}

string decryptText(string plainText, string key){
    string res="";
    for(int i=0; i<plainText.length(); i++){
        int num = (plainText[i]-'A')-(key[i]-'A') + 26;
        res += (char)( num%26 +'A');
    }
    return res;
}
int main(){
    string key="HARSHA", plainText_dummy="I HAVE BEEN WAITING";
    // spaces less chars
    string plainText ="";
    for(char ch: plainText_dummy){
        if(ch==' ') continue;
        else plainText += ch;
    }

    
    // cin >> key, plainText;
    // needed key
    string updated_key= generateKey(key, plainText.length());
    cout << "updated key "<< updated_key<< endl;

    string cipher_text = encyptText(plainText, updated_key);
    cout << " the cipher text is " << cipher_text << endl;
    string decrypted = decryptText(cipher_text, updated_key);
    cout << " the decrypted text is" << decrypted << endl;
}