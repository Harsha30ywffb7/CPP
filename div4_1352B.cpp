#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        if(k > n){
            cout << "NO" << endl;
            continue;
        }
        // either all odd or even
        // first need to get sum in k nums.
        
        // odds ever odd, two evens ever odd.-> 
        // if odd no.
        // so n is only even.
            vector<int> ans;
            int floor_num = floor(n/k);
            if(n%k ==0){
                vector<int> ans(k, n/k);
                cout << "YES" << endl;
                for(int x: ans) cout << x <<" ";
                cout << endl;
                continue;
            }//spread
            if(n%2 ==0 && k%2 ==1){
                //only evens from k to nearest evens then remaining in last.
                if(floor_num %2 !=0){
                    if(floor_num==1){
                        floor_num +=1;
                    }else{
                        floor_num -=1;
                    }
                    
                }
            }
            for(int i=0; i<k-1; i++){
                ans.push_back(floor_num);
            }
            int last = n-(floor_num*(k-1));
            if(last<0){
                cout << "NO" << endl;
                continue;
            }
            ans.push_back(last);
            if(ans[k-1]&1 != ans[k-2]&1 ) {
                cout << "NO" << endl;
            continue;
            }
            else{
                cout << "YES" << endl;
                for(int x: ans) cout << x <<" ";
                 cout << endl;
            continue;
            }
    }
}