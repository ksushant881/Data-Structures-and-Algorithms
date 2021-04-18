#include<bits/stdc++.h>
using namespace std;
int r;
int c;

bool isSame(vector<vector<int>>mat1, vector<vector<int>>mat2,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(mat1[i][j] != mat2[i][j])
                return false;
        }
    }
    return true;
}

bool row(vector<vector<int>>mat,int n){
    vector<vector<int>>temp;
    int high=n-1;
    int low = 0;
    while(high > low){
        swap(temp[high],temp[low]);
        high--;
        low++;
    }
    if(isSame(mat,temp,n))
        return true;
    else
        return false;
}

bool col(vector<vector<int>>mat , int n){
    vector<vector<int>>temp;
    int high=n-1;
    int low = 0;
    while(high > low){
        for(int i=0;i<n;i++){
            swap(temp[i][low],temp[n-i][high]);
        }
        high--;
        low++;
    }
    if(isSame(mat,temp,n))
        return true;
    else
        return false;
}


int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int n;
cin >> n;
vector<vector<int>> mat;
r=n;
c=n;
for(int i=0;i<n;i++){
    vector<int>v;
    for(int j=0;j<n;j++){
        cin >> c;
        v.push_back(c);
    }
    mat.push_back(v);
}
if(col(mat,n) && row(mat,n))
    cout<<"YES";
else
    cout<<"NO";


}