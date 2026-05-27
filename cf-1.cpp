#include <iostream>

#include <set>

int gcd(int a, int b);
int main(){
    int t;
   
    std::cin >> t;
    for(int i=0; i<t;i++){
        int n;
        std::set<int> set;
        std::cin >> n; // n is length of the sequence
        for(long long i=1; i<=1e18; i++){
            
        }

    }
    
    // std::cout << ans << std::endl;
}

int gcd(int a, int b){
    if(b==0) return a;
return gcd(b, a%b);
}
// 2 - 1 2 4 if set break the loop for it.