#include <bits/stdc++.h>
using namespace std;
void println(vector<int>);
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> vec(n);

        for(int i=0; i<n; i++) cin >> vec[i];

        sort(vec.begin(), vec.end(), greater<>());

        vector<int> ans(n);
        ans[0] = vec[0];
        ans[1] = vec[1];
        bool found = false;
        // logics here
        // cout << "debugger ";
        // println(vec);  
        for(int i=2; i<n; i++){
            int target = ans[i-2]%ans[i-1];
            // cout << "target " << target<< " ";
            // not finds.
            if(find(vec.begin(), vec.end(), target) == vec.end()){
                cout << -1 << endl;
                found = true;
                break;
            }else{
                ans[i]= target;
            }
        }
        if(!found) cout << ans[0] <<" "<< ans[1] << endl;
    }
}

void println(vector<int> vec){
    for(int x: vec) cout << x<<" ";
    cout << '\n';
}