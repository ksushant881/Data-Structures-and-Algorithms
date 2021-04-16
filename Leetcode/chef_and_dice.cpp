#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int cases;
	cin >> cases;
	while(cases--){
	    if(cases<0)
	        break;
	   long long int n;
	   cin >> n;
	   int arr[5];
	   arr[1]=20;
	   arr[2]=36;
	   arr[3]=51;
	   arr[0]=0;
	   arr[4]=60;
	   if(n==1){
	        cout<<arr[1]<<endl;
	        
	   }
	       
	   else if(n==2){
	       cout<<arr[2]<<endl;
	      
	   }
	        
	    else if(n==3){
	        cout<<arr[3]<<endl;
	        
	    }
	    else if(n==4){
	        cout<<arr[4]<<endl;
	        
	    }
	    else{
	       int layer=0;
       int sub=0;
	   
	        layer=n/4;
	        sub=n%4;
	    
	    long long res=(44*layer) + 16 + arr[sub] - 4*sub;
	  
	    cout<<res<<endl; 
	    }
	        
	   
	   
	   
	}
	
	return 0;
}
