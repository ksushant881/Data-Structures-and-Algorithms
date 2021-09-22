#include<bits/stdc++.h>
using namespace std;
using vc = vector<char>;
#define pi 3.1415926536
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define d(x) cout << #x << "; " << x << endl
void sortCustom(){

}

int main(){
fastio

int tc=1;
// cin >> tc;
for(int casess=0;casess<tc;casess++){

string x;
cin>>x;
ll n;
cin>>n;

 map<char, int> mp1{}; // 数値から文字を
map<int, char> mp2{}; // 文字から数値を

  // 文字列xを辞書に登録
  int counter = 0;
  for (char c:x){
    mp1[c] = counter;
    // d(counter);
    // d(c);
    // d(mp1[c]);
    mp2[counter] = c;
    counter ++;
  }
  //d(mp1['a']);

  vector<string> vc(n);

  // Sを文字列から辞書より数値に変換
  for(int i=0;i<n;i++){
    string s;
    string changeStrToNum = "";
    cin >> s;

    // Sをそれぞれ数値に変換
    for (char c : s){
        //d(mp1['a']);
      // d(c);
      // d(mp1[c]);
      changeStrToNum.push_back(mp1[c]);
      // changeStrToNum += mp1[c]; // 文字 から 辞書番号へ
        }
    // d(changeStrToNum);
    vc[i] = changeStrToNum;
  }

  // 辞書順よりソート
  sort(vc.begin(),vc.end());

  // vcを辞書番号から文字へ
  for(int i=0;i<n;i++){
    string changeNumToString = "";
    string str = vc[i];
    for (char c : str){
      changeNumToString += mp2[int(c-48)]; // 辞書番号 から 文字へ
      cout<<mp2[int(c-48)]<<endl;
    }
    //cout<<changeNumToString<<endl;
  }


}

}