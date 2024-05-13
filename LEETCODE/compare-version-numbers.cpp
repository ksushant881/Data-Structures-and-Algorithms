#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f(i,n) for(int i=0;i<n;i++)

class Solution {
public:
    int compareVersion(string version1, string version2) {
        int n = version1.length();
        int m = version2.length();
        int inx1=0,inx2=0;
        while(inx1<n and inx2<m){
            string s1="",s2="";
            while(version1[inx1]!='.' and inx1!=n){
                s1+=version1[inx1];
                inx1++;
            }
            while(version2[inx2]!='.' and inx2!=m){
                s2+=version2[inx2];
                inx2++;
            }
            // cout<<s1<<" "<<s2<<endl;
            inx1++;
            inx2++;

            int k1 = stoi(s1);
            int k2 = stoi(s2);

            // cout<<"Numbers: "<<k1<<" "<<k2<<endl;
            

            if(k1>k2){
                return 1;
            } else if(k2>k1){
                return -1;
            }
            
        }

        // cout<<inx1<<" "<<inx2<<endl;
        if(inx1<n){
            string s1="";
            while(inx1<n){
                
                s1+=version1[inx1];
                // cout<<inx1<<" and "<<s1<<endl;
                inx1++;
                if(version1[inx1]=='.' or inx1==n){
                    // cout<<inx1<<" andd "<<s1<<endl;
                    inx1++;
                    int k = stoi(s1);
                    s1="";
                    if(k>0){
                        return 1;
                    }
                }
            }
            
        }

        if(inx2<m){
            string s2="";
            while(inx2<m){
                s2+=version2[inx2];
                inx2++;
                if(version2[inx2]=='.' or inx2==m){
                    inx2++;
                    int k = stoi(s2);
                    s2="";
                    if(k>0){    
                        return -1;
                    }
                }
            }
        }

        return 0;
    }
};

int main(){
    Solution s;
    // cout<<s.compareVersion("1.01","1.001")<<endl;
    // cout<<s.compareVersion("1.0","1.0.0")<<endl;
    // cout<<s.compareVersion("0.1","1.1")<<endl;
    cout<<s.compareVersion("1.0.1","1")<<endl;
}