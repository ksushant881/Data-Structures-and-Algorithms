#include<bits/stdc++.h>
using namespace std;

//naive solution
//o(n^3)
    bool isPal(string s,int low,int high){
        if(high<=low)
            return true;
        if(s[high]==s[low])
            return isPal(s,low+1,high-1);
        else return false;
    }
    
    
    
    string longestPalindrome(string s) {
        int ans = -1;
        string res;
        int n=s.length();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(isPal(s,i,j) && (j-i+1)>ans){
                    res=s.substr(i,j-i+1);
                    ans=j-i+1;
                }
                    
                //cout<<res<<endl;
                    
            }
        }
        return res;
    }

    //dp solution
    string solve(string s){
        int n=s.length();
        bool dp[n][n];
        
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1])
                dp[i][i+1]=1;
            
        }

        for(int i=0;i<n;i++){
            dp[i][i]=1;
        }

        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                
                    if(s[i]==s[j] && dp[i+1][j-1]==1)
                        dp[i][j]=1;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }

        return "";
    }


int main(){
    string s="ibvjkmpyzsifuxcabqqpahjdeuzaybqsrsmbfplxycsafogotliyvhxjtkrbzqxlyfwujzhkdafhebvsdhkkdbhlhmaoxmbkqiwiusngkbdhlvxdyvnjrzvxmukvdfobzlmvnbnilnsyrgoygfdzjlymhprcpxsnxpcafctikxxybcusgjwmfklkffehbvlhvxfiddznwumxosomfbgxoruoqrhezgsgidgcfzbtdftjxeahriirqgxbhicoxavquhbkaomrroghdnfkknyigsluqebaqrtcwgmlnvmxoagisdmsokeznjsnwpxygjjptvyjjkbmkxvlivinmpnpxgmmorkasebngirckqcawgevljplkkgextudqaodwqmfljljhrujoerycoojwwgtklypicgkyaboqjfivbeqdlonxeidgxsyzugkntoevwfuxovazcyayvwbcqswzhytlmtmrtwpikgacnpkbwgfmpavzyjoxughwhvlsxsgttbcyrlkaarngeoaldsdtjncivhcfsaohmdhgbwkuemcembmlwbwquxfaiukoqvzmgoeppieztdacvwngbkcxknbytvztodbfnjhbtwpjlzuajnlzfmmujhcggpdcwdquutdiubgcvnxvgspmfumeqrofewynizvynavjzkbpkuxxvkjujectdyfwygnfsukvzflcuxxzvxzravzznpxttduajhbsyiywpqunnarabcroljwcbdydagachbobkcvudkoddldaucwruobfylfhyvjuynjrosxczgjwudpxaqwnboxgxybnngxxhibesiaxkicinikzzmonftqkcudlzfzutplbycejmkpxcygsafzkgudy";
    string s2="rececar";
    solve(s2);
}