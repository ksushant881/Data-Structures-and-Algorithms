#include<bits/stdc++.h>
using namespace std;

vector<int> dailyTemperatures(vector<int>& T) {
        stack<int>st; 
        int n=T.size();
        st.push(T[n-1]);  
        vector<int>res(n,0);
        for(int i=n-2;i>=0;i--){
            int count=1;
                while(!st.empty()){
                    if(st.top() > T[i]){
                        res[i]=count;  
                        st.push(T[i]);
                        break;
                    }
                    st.pop();
                    count++;
                    
            }
                
             if(st.empty())   
                st.push(T[i]);
                
            }
           return res;
        }

int main(){
    vector<int>temp={73,74,75,71,69,72,76,73};
    vector<int>res;
    res=dailyTemperatures(temp);
    for(int x : res)
        cout<<x<<" ";
}