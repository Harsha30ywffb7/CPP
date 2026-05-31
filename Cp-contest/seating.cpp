#include <iostream>
#include <vector>
#include<string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,x,s;
        cin >> n>>x>> s;
        string frnds;
        cin >> frnds;
        // where to put where
        // I only at new place pakka. -> not even a problem to give him a new table-> no new table skip him
        // A when to sit in a new table. E pov if consecutive E's are not able sit in the existed seats he should sit at a new table if not he can any where. impact on I - 
        // E he just sit at a existed place. -> no seats skip him.
        int seats=x*s, tables=x, skip=0;
        for(int i=0; i<frnds.size(); i++){
            if(tables == x && seats ==0){
                skip += frnds.size()-i;
                break;
            }
            if(frnds.at(i)=='I'){
                if(tables==x) skip++;
                else{
                    tables++;
                    seats--;
                }
            }else if(frnds.at(i)=='E'){
                if(seats >0)seats--; 
                else skip++;
            }else{
                // when to give new seat when not. optimal for I and E.
                int consE=0;
                for(int j=i+1; j<frnds.size(); j++){
                    if(frnds.at(j) =='E') consE++;
                    else break; 
                }//existed seats less than needed
                // if no tables and no seats
                if(consE> seats-1) tables++; // take new table
                seats--;
            }
        }
        cout << n-skip << endl;
    }
    return 0;
}