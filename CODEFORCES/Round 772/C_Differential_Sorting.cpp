#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int shrutiiii,shruti;
    cin>>shrutiiii;
    while(shrutiiii--){
        cin>>shruti;
        vector<long long int> shrutiii(shruti);
        for(int shrutii=0;shrutii<shruti;shrutii++){
            cin>>shrutiii[shrutii];
        }
        if(shrutiii[shruti-2]>shrutiii[shruti-1]) cout<<-1<<endl;
        else{
            if(shrutiii[shruti-1]>=0){
                cout<<shruti-2<<endl;
                for(int shrutii=1;shrutii<shruti-1;shrutii++){
                    cout<<shrutii<<" "<<shruti-1<<" "<<shruti<<endl;
                }
            }
            else{
                if(is_sorted(shrutiii.begin(),shrutiii.end())){
                    cout<<0<<endl;
                }
                else cout<<-1<<endl;
            }
        }
    }
    
  return 0;
}