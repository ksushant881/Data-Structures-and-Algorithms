#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007

struct TrieNode {
    TrieNode* child[26] = {};
    int sum = 0; 
};

class MapSum { 
public:
    unordered_map<string, int> mp;
    TrieNode trieRoot;
    
    void insert(const string& key, int val) {
        int diff = val - mp[key];
        TrieNode* curr = &trieRoot;
        for (char c : key) {
            c -= 'a';
            if (curr->child[c] == nullptr) curr->child[c] = new TrieNode();
            curr = curr->child[c];
            curr->sum += diff;
        }
        mp[key] = val;
    }
    int sum(const string& prefix) {
        TrieNode* curr = &trieRoot;
        for (char c : prefix) {
            c -= 'a';
            if (curr->child[c] == nullptr) return 0;
            curr = curr->child[c];
        }
        return curr->sum;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */

int main(){

}