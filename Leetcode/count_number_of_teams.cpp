#include<bits/stdc++.h>
using namespace std;

    set<vector<int>>mp;
    int help(vector<int>& rating,int i,int j,int k,int n,int &count){
        if(i>=n-2 || j>=n-1 || k>=n)
            return 0;
        
        if((i<j && j<k) && ((rating[i]>rating[j] && rating[j]>rating[k]) || (rating[i]<rating[j] && rating[j]<rating[k]))){
            vector<int>v={rating[i],rating[j],rating[k]};
            mp.insert(v);
        }
            
            //count++;
            //cout<<rating[i]<<" "<<rating[j]<<" "<<rating[k]<<endl;
        
        help(rating,i+1,j+1,k+1,n,count);
        //help(rating,i+1,j,k,n,count);
        //help(rating,i,j+1,k,n,count);
        help(rating,i,j,k+1,n,count);
        //help(rating,i+1,j+1,k,n,count);
        help(rating,i,j+1,k+1,n,count);
        //help(rating,i+1,j,k+1,n,count);
        
    return mp.size();
            
    }
        
    
    int numTeams(vector<int>& rating) {
        int n=rating.size();
        int count=0;
        return help(rating,0,1,2,n,count);
    }

int main(){
    vector<int>v;
    v={4,7,9,5,10,8,2,1,6,3,11,12,13,14,20,19,18,17,16,15};  //ans 562
    //v={2,5,3,4,1};
    cout<<numTeams(v);
}