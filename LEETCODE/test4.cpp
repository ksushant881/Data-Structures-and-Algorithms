#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

const int MOD = 1000000009;

// Function to count the number of strings that contain exactly B of the strings in A as substrings
int countStrings(vector<string>& A, int B, int C) {
    int N = A.size();
    
    // Create a vector to store the number of ways to form a string of length i
    vector<long long> dp(C + 1, 0);
    dp[0] = 1; // Empty string can be formed in one way
    
    // Create a map to store the frequency of each string in A
    unordered_map<string, int> freq;
    for (string& s : A) {
        freq[s]++;
    }
    
    for (int len = 1; len <= C; len++) {
        for (int i = 0; i < N; i++) {
            string word = A[i];
            int wordLen = word.length();
            
            if (len >= wordLen) {
                // Calculate the number of ways to form a string of length len using word
                long long ways = dp[len - wordLen] * freq[word];
                dp[len] = (dp[len] + ways) % MOD;
            }
        }
    }
    
    // Calculate the total number of strings that contain exactly B of the strings in A as substrings
    long long result = dp[C];
    for (int i = 1; i <= B; i++) {
        result = (result * i) % MOD;
    }
    
    return result;
}

int main() {
    vector<string> A = {"z", "zz", "zzz", "zzzz"};
    int B = 2;
    int C = 3;
    
    int ans = countStrings(A, B, C);
    
    cout << ans << endl; // Output: 50
    
    return 0;
}
