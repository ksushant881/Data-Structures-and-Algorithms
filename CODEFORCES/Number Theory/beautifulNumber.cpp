
// int solve(string s){
//     int arr[10];
//     f(i,10) arr[i]=0;
//     f(i,s.length()) arr[s[i] - '0']++;
//     ll ans=INT_MAX;
//     ll temp=0;
//     f(i,10){
//         f(j,10){
//             if(i!=j){
//                 temp+=abs(i-j)*arr[j];
//             }
//         }
//         ans = min(ans,temp);
//     }
//     return ans;
// }

#include<bits/stdc++.h>
#define ll long long 
#define mp make_pair 
#define f(i,n) for(int i=0;i<n;i++) 
#define F first 
#define S second 
#define pb push_back 

using namespace std;

void test(){
	string s;
	cin>>s;
	int k;
	cin>>k;
	int n = s.length();
	
	int a[10];
	f(i,10)a[i]=0;
	
	f(i,n){
		a[s[i]-'0']++;
	}
	
	
	int cost = 9*k;
	
	f(i,10){
		
		if(a[i]>=k){
			cost = 0;
			break;
		}
		
		int d = 1;
		int req = k - a[i];
		int temp = 0;
		
		
		// i 5 
		
		6s 
		4s 
		
		ava
		
		while(req>0){
			int ava = 0;
			if(i+d<=9)ava = ava + a[i+d];
			if(i-d>=0)ava = ava + a[i-d];
			
			int take = min(req, ava);
			
			temp = temp + (take * d);
			req = req - take;
			d++;
		}
		
		cost = min(cost, temp);
		
	}
	
	cout<<cost<<"\n";
	
}

int main(){
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int tests=1;
	cin>>tests;
	while(tests--){
		test();
	}
}


