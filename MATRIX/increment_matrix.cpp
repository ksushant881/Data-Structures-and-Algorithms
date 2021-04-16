#include <iostream>

using namespace std;

int main()
{
	// Write your code here
	int firstValue;
	int r,c;
	cin>>firstValue;
	cin>>r;
	cin>>c;
	int mat[r][c];
	mat[0][0]=firstValue;
	for(int i=0;i<r;i++){
	    for(int j=0;j<c;j++){
	        if(i==0 && j==0)
	            continue;
	        mat[i][j]=firstValue+j+(i*c);
	    }
	}
// 	for(int i=0;i<r;i++){
// 	    for(int j=0;j<r;j++){
// 	        cout<<mat[i][j]<<" ";
	        
// 	    }
// 	    cout<<endl;
	    
// 	    }
	
	int tra[c][r];
		for(int i=0;i<r;i++){
	    for(int j=0;j<c;j++){
	       
	        tra[j][i]=mat[i][j];
	    }
	}
	int val=0;
	int res[r][r];
	for(int i=0;i<r;i++){
	    for(int j=0;j<r;j++){
	        val=0;
	        for(int k=0;k<c;k++){
	            val+=mat[i][k]*mat[j][k];
	        }
	        res[i][j]=val;
	    }
	}
// 	for(int i=0;i<r;i++){
// 	    for(int j=0;j<r;j++){
// 	        cout<<res[i][j]<<" ";
	        
// 	    }
// 	    cout<<endl;
	    
// 	    }

	return 0;
}