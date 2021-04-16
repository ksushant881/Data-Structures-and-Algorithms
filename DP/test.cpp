#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int tc;
	cin>>tc;
	for(int i=0;i<tc;i++){
	    int num;
	    cin>>num;
	    vector<long long int> boys(num);
	    vector<long long int> girls(num);
	    for(int i=0;i<num;i++){
	        cin>>boys[i];
	    }
	    for(int i=0;i<num;i++){
	        cin>>girls[i];
	    }
	    
	    sort(boys.begin(),boys.end());
	    sort(girls.end(),girls.begin());
	    //long long int local=-1;
	    cout<<"done"<<endl;
	   // for(int i=0;i<num;i++){
	   //     if(boys[i]+girls[i] > local)
	   //         local = boys[i]+girls[i];
	   // }
	   // cout<<local<<endl;
	}
	return 0;
}
