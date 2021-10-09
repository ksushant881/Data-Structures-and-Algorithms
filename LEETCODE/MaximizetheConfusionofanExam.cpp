#include<bits/stdc++.h>
using namespace std;

class Solution1 {
public:
int help1(string a, int k) {
    int cnt0 = 0;
    int l = 0;
    int max_len = 0;
    int n=a.length();
    for (int i = 0; i < n; i++) {
        if (a[i] == 'T')
            cnt0++;
        while (cnt0 > k) {
            if (a[l] == 'T')
                cnt0--;
            l++;
        }

        max_len = max(max_len, i - l + 1);
    }
    return max_len;
}
int help2(string a, int k) {
    int cnt0 = 0;
    int l = 0;
    int max_len = 0;
    int n=a.length();
    for (int i = 0; i < n; i++) {
        if (a[i] == 'F')
            cnt0++;
        while (cnt0 > k) {
            if (a[l] == 'F')
                cnt0--;
            l++;
        }

        max_len = max(max_len, i - l + 1);
    }
    return max_len;
}

int maxConsecutiveAnswers(string s, int k) {
    return max(help1(s,k),help2(s,k));        
}

};

//binary search cool solution
//answer can be from 1 to n so we binary search on it
class Solution2 {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int n=answerKey.size();
        int high=n,low=1;
        int ans;
        int minimumChanges = INT_MAX;
        while(high > low){
            int windowFirstIndex=0,windowLastIndex=0;
            int numberOfT=0,numberOfF=0;
            int mid = low + (high - low)/2;
            for(int i=0;i<mid;i++){
                if(answerKey[i] == 'T') numberOfT++;
                else numberOfF++;
                windowLastIndex++;
            }
            minimumChanges = min(numberOfF,numberOfT);
            while(windowLastIndex < n){
                if(answerKey[windowLastIndex] == 'T') numberOfT++;
                else numberOfF++;
                if(answerKey[windowFirstIndex] == 'T') numberOfT--;
                else numberOfF--;
                minimumChanges = min(minimumChanges,min(numberOfF,numberOfT));
                windowLastIndex++;
                windowFirstIndex--;
            }
            if(minimumChanges > k) high = mid-1;
            else{
                ans = mid;
                low=mid+1;
            }
        }
        return ans;
    }
};

int main(){

}
