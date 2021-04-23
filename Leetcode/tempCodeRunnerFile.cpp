for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(isCont(s,i,j) && count0(i,j,s))
            cout<<s.substr(i,j)<<endl;
    }
}