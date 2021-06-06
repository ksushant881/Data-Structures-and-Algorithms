#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main(){
fastio
 
int tc=1;
cin >> tc;
for(int casess=0;casess<tc;casess++){
      
      ll n; 
      cin>>n;
      string str;
      cin>>str;
    
    set<string> global;

      for(int i=0;i<n;i++){
          string st=""; 
          st+=str[i];
          global.insert(st);
      }

     for(int i=0; i<n-1;i++){
         string st=""; 
         st+=str[i]; 
         st+=str[i+1];
         global.insert(st);
     }
     
     for(int i=0; i<n-2;i++){
         string st=""; 
         st+=str[i]; 
         st+=str[i+1]; 
         st+=str[i+2];
         global.insert(st);
     }

    bool flag=false;
     for(char i='a'; i<='z' ; i++){
         string st=""; 
         st+=i;
         if(!global.count(st)){
             cout<<st<<endl;
             flag=true;
             break;
         }
     }
     
     if(flag)
     continue;

     for(char i='a'; i<='z' ; i++){
         string st=""; 
         st+=i;
         for(char j='a'; j<='z' ; j++){
             string st1=st; 
             st1+=j;
            if(!global.count(st1)){
               cout<<st1<<endl; 
               flag=true;
               break; 
            }
         }
         if(flag)break;
     }

     if(flag)
        continue;
       for(char i='a'; i<='z' ; i++){
           string st=""; 
           st+=i;
           for(char j='a'; j<='z' ; j++){
               string st1=st;
               st1+=j;
               for(char k='a'; k<='z' ; k++){
                   string st2=st1;
                   st2+=k;
                   if(!global.count(st2)){
                   cout<<st2<<endl; flag=1;
                   break;
                 }
               }
               if(flag)break;
           }
           if(flag)break;
       }
 }

 return 0;
}

