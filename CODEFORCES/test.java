package CODEFORCES;

import java.util.*;
class test{
    static int solve(int n,int m,int []a,int []b) {
        Arrays.sort(a);
        Arrays.sort(b);
        System.out.println(Arrays.toString(a));
        int i=0,j=0;
        int cnt=0;
        while(i<n) {
            if(a[i] >= b[j]){
                cnt++;
                i++;
                j++;
                continue;
            }
            i++;
        }
        return cnt;
    }

    public static void main(String[] args) {
        int []a={20, 10 ,20 ,40};
        int []b={40,5,30};
        int n=4,m=3;
        System.out.println(solve(n,m,a,b));
    }
}