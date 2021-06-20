#include<bits/stdc++.h>
using namespace std;


//partially passed
bool subs(string s,string chk){
    long long int i=0,j=0;
    while(i!=s.length() || j!=chk.length()){
        if(s[i]==chk[j]){
            i++;
            j++;
        }
        else
            i++;
    }
    if(j==chk.length())
        return true;
    else    
        return false;
}

bool subs2(string s1,string s2,int n,int m){
    if(m==0)
        return true;
    if(n==0)
        return false;
    if(s1[n-1]==s2[m-1])
        return subs2(s1,s2,n-1,m-1);
    else
        return subs2(s1,s2,n-1,m);    
}

string int_to_bin(long long int n){
    if(n==0)
        return "0";
    string s;
    while(n!=0){
        s+=to_string(n%2);
        n=n/2;
    }
    long long int size=s.length();
    long long int high=size-1;
    long long int low=0;
    while(high>low){
        swap(s[high],s[low]);
        high--;
        low++;
    }
    return s;
}

int main(){
    long long int cases;
    cin>>cases;
    while(cases--){
        if(cases<0)
            break;
        string s;
        cin >> s;
        for(long long int i=1;i<100000000;i++){
            string temp=int_to_bin(i);
            if(!subs2(s,temp,s.length(),temp.length()))
            {
                cout<<temp;
                break;
            }
        }
        cout<<endl;
    }
    
}