// #include<bits/stdc++.h>
// using namespace std;
// #define pi 3.1415926536
// #define ll long long int
 
//  bool myCmp(pair<int,int>p1,pair<int,int>p2){
//      return p1.second < p2.second;
//  }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
 
// int tc;
// cin >> tc;
// for(int i=0;i<tc;i++){
//     int n,x;
//     cin >> n >> x;
//     vector<int>type(n);
//     unordered_map<int,int>mp;
//     int maxF=-1;
//     for(int i=0;i<n;i++){
//         cin >> type[i];
//         mp[type[i]]++;
//         if(mp[type[i]] > maxF)
//             maxF = mp[type[i]];
//     }

//     if(maxF > x){
//         cout << mp.size() <<endl;
//         continue;
//     }
//     vector<pair<int,int>>v(mp.begin(),mp.end());
//     sort(v.begin(),v.end(),myCmp);
//     int left = x;
//     for(auto it=v.begin();it!=v.end();it++){
//         if(it->second==1)
//             continue;
//         else{
//             if(it->second <= left){
//                 left = left - (it->second-1);
//                 it->second = 1;
//                 continue;
//             }
//             else{
//                 left = 0;
//                 it->second = it->second - left;
//                 break;
//             }
//         }
//     }
//     if(left == 0){
//         cout<<v.size()<<endl;
//         continue;
//     }
//     else{
//         for(auto it=v.begin();it!=v.end();it++){
//             it->second = 0;
//             left--;
//             if(left == 0)
//                 break;
//         }
//         int count = 0;
//         for(auto it=v.begin();it!=v.end();it++){
//             if(it->second > 0)
//                 count++;
//         }
//         cout<< count <<endl;
//     }
// }
// }

#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
 
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
 
int t;
cin >> t;
for(int i=0;i<t;i++){
    int n,x;
    cin >> n >> x;
    
    set<int>st;
    for(int i=0;i<n;i++){
        int type;
        cin >> type;
        st.insert(type);
    }
    int distinct = st.size();
    int left = n-x;
    if(distinct<=left)
        cout << distinct <<endl;
    else
        cout << left << endl;

}
}