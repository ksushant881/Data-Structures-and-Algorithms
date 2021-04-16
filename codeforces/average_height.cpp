#include<bits/stdc++.h>
using namespace std;



int main(){
    int tc;
    cin >> tc;
    for(int i=0;i<tc;i++){
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        // // for(int i=0;i<n;i++)
        // //         cout<<a[i]<<"->";
        // // cout<<endl;
        // vector<int>even;
        // vector<int>odd;
        // for(int i=0;i<n;i++){
        //     if(a[i]%2==0)
        //         even.push_back(a[i]);
        //     else
        //         odd.push_back(a[i]);
        // }

        // // for(int i=0;i<even.size();i++)
        // //         cout<<even[i]<<"->";
        // // cout<<endl;
        
        // if((even.size())%2==0){
        //     for(int i=0;i<even.size();i++)
        //         cout<<even[i]<<" ";
        //     for(int i=0;i<odd.size();i++)
        //         cout<<odd[i]<<" ";
        //     //cout<<odd[odd.size()-1];
        //     cout<<endl;
            
        // }

        // else{
        //     for(int i=0;i<even.size()-1;i++)
        //         cout<<even[i]<<" ";
        //     for(int i=0;i<odd.size();i++)
        //         cout<<odd[i]<<" ";
        //     cout<<even[even.size()-1];
        //     cout<<endl;
            
        // }
        vector<int>res;
        for(int i=0;i<n;i++){
            if(a[i]%2 ==1)
                res.push_back(a[i]);
        }
        for(int i=0;i<n;i++){
            if(a[i]%2==0)
                res.push_back(a[i]);
        }
        for(int i=0;i<res.size();i++){
            cout<<res[i]<<" ";
        }
        cout<<endl;

        }
        




}
    





