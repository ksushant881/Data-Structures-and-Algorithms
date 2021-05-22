#include <iostream>
#include <string>
#include <algorithm>
#define ll long long
using namespace std;
 
void findLexicographic(string str, string result,int k)
{
    if (result.length() == str.length())
    {
        cout << result << endl;
        return;
    }
    for (unsigned i = 0; i < str.length(); i++) {
        findLexicographic(str, result + str[i],k-1);
    }
}

void findLexicographic(string str,ll k)
{
    string result;

    sort(str.begin(), str.end());
    findLexicographic(str, result,k);
}

int main()
{
    ll a,b,k;
    cin>>a>>b>>k;
    string str = "";
    for(int i=0;i<a;i++) str+='a';
    for(int i=0;i<b;i++) str+='b';
    findLexicographic(str,k);
    return 0;
}