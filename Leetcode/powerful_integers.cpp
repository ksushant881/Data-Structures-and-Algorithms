#include<bits/stdc++>
using namespace std;

    vector<int> powerfulIntegers(int x, int y, int bound) {
        vector<ll>two;
        vector<ll>three;
        vector<int>res;
        unordered_set<int>st;
        int i=0,j=0;
        while(pow(x,i)<bound){
                two.push_back(pow(x,i));
                i++;
            if(x==1)
                break;
            }
        while(pow(y,j)<bound){
                three.push_back(pow(y,j));
                j++;
        if(y==1)
            break;
            }
               for(int a=0;a<two.size();a++){
                   long long int temp;
                   for(int b=0;b<three.size();b++){
                       temp=two[a]+three[b];
                       if(temp<=bound)
                           st.insert(temp);
                   }
               }
        res={st.begin(),st.end()};
               return res;
    }

    int main(){
        powerfulIntegers(1,1,4000);
    }