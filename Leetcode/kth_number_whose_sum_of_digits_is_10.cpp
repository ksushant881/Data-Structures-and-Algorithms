#include <bits/stdc++.h>
using namespace std;

int sum(int n){
  int s=0;
  while(n!=0){
    s+=n%10;
    n=n/10;
  }
  return s;
}

int main()
{
  //write your code here
  vector<int>ans;
  vector<int>v= {19 ,28 ,37 ,46 ,55 ,64 ,73 ,82 ,91,109 ,118,127 ,136 ,145 ,154 ,163 ,172 ,181,190 ,208,217 ,226 ,235,244,253,262,271,280,307,316,325,334,343,352,361,370,406,415,424,433,442,451,460,505};
  int n=v.size();
  // 190-208 280-307 370-406 460-505 550-604 640-703 730-802 820-901 910-910
  // 10 - 9
  // 9 - 10
  // 8 - 9
  // 7 - 8
  // 6 - 7
  //901 910 
  
  int tc;
  cin>>tc;
  for(int i=0;i<tc;i++){
    int k;
    cin>>k;
    if(k < 10){
      cout<<v[k-1]<<endl;
    }
    else{
      int num=109;
      int run=0;
      int count=1;
      k=k-9;
    while(true){
      if(k==1){
        ans.push_back(num);
        break;
      }
        else{
            num+=9;
            if(sum(num)!=10){
                run++;
                count++;
                if(count == 9){
                    run++;
                    count=1;
                }
                num+=(9*run);
                
            }
          k--;
        } 
    }
    }  
  } 
  return 0;
}