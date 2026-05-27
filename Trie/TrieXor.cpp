#include<iostream>
#include<vector>
using namespace std;

struct Node{
    int child[2];
    Node(){
        child[0]= child[1] = -1;
    }
};

class Trie{
    public:
    vector<Node> trie;
    Trie(){
         trie.push_back(Node()); // appending root.
    }

    void insert(int num){
        int node =0;
        for(int bit=30; bit>=0; bit--){
            int b = (num >> bit) & 1;
            if(trie[node].child[b] != -1){
                trie[node].child[b] = trie.size();
                trie.push_back(Node());
            }
            node = trie[node].child[b];
        }
    }


    int getMaxXor(int num){
        int node=0;
        int ans=0;
        for(int bit=30; bit>=0;bit--){
            int b = (num >> bit) & 1;
            int opposite = 1-b;
            // traverse in opposite path it exsits.

            if(trie[node].child[opposite] != -1){
                ans |= (1<<bit); // just like making maximum
                node = trie[node].child[opposite]; //next path
            }else{ // if not there definetly take this only
                node = trie[node].child[b]; // next path
            }
        }
    }
};

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> vec(n);
        for(int i=0; i<n; i++){
            cin >> vec[n];
        }

        Trie trie;
        trie.insert(vec[0]);
        int ans;
        for(int x: vec) {
            ans = max(ans, trie.getMaxXor(x));
         trie.insert(x);
        }
       
        cout<< ans<< endl;
    }
}