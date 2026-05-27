#include <iostream>

int gcd(int a, int b);
int main(){
    int a, b;
    std::cout << "Enter the values of the a,b" << std::endl;
    std::cin >> a>>b;
    int ans = gcd(a,b);
    std::cout << ans << std::endl;
}

int gcd(int a, int b){
    if(b==0) return a;
return gcd(b, a%b);
}