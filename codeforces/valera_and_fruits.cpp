#include<bits/stdc++.h>
using namespace std;
/*
 1 5
 2 3
 3 + 2+1 + 2

 1 20
 2 20
 3 20
 4 20
 5 20
 10 + 10 +
*/

bool cmp(pair<int,int>p1,pair<int,int>p2){
    if(p1.first < p2.first)
        return true;
    else
        return false;
}

int main(){
    int n,v;
    cin >> n >> v;
    vector<pair<int,int>>data(n);
    //day and number of fruits
    for(int i=0;i<n;i++){
        cin >> data[i].first;
        cin >> data[i].second;
    }
    
    sort(data.begin(),data.end(),cmp);
    
    int maxScore=0;
    int prev=0;
    for(int i=0;i<n;i++){
        // if(data[i].second == v){
        //     maxScore+=data[i].second;
        //     prev = 0;
        // }
            
        if(data[i].second <= v){
            maxScore+=prev;
            int left=v-prev;
            if(data[i].second <= left){
                maxScore+=(data[i].second);
                prev = 0;
            }
            else{
                maxScore+=left;
                prev = data[i].second - left;
            }
        }

        else if(data[i].second > v){
            maxScore+=v;
            prev = (data[i].second-v);

        }
    }
    maxScore+=prev;
    cout<<maxScore;

}