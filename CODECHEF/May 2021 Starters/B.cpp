#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
ll tc=1;
cin >> tc;
for(int casess=0;casess<tc;casess++){

        int K = 0;
        cin >> K;
        vector<string> arr;
        vector<string> v;
        for(int i = 0; i < K; i++){
            string s;
            cin >> s;
            arr.push_back(s);
        }
        for(int i=0;i<arr.size();i++){
            int c1=0, c2=0;
            for(int j = 0; j < arr[i].size(); j++){
                if(arr[i][j] >= 'a' && arr[i][j] <= 'm')
                    c1++;
                else if(arr[i][j] >= 'N' && arr[i][j] <= 'Z')
                    c2++;
            }
            if(c1 == arr[i].size() || c2 == arr[i].size())
                v.push_back("YES");
            else
        v.push_back("NO");
        }
        bool bret = false;
        for(int i = 0; i < K; i++){
          if(v[i] == "NO")
          {
        bret = false;
            break;
          }
          else
            bret = true;
        }
        if(bret == false)
          cout << "NO\n";
        else
          cout << "YES\n";
    }
}

