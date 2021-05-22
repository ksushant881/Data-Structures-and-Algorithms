    ll res=INT64_MIN;
    for(int i=0;i<60;i++){
        ll a=n/(v[i]);
        ll c=n-a*(v[i]);
        ll b=i;
        if(a*v[i]+c > n) break;
        res=max(res,a+b+c);
    }
    cout<<res;