#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define bg begin
#define en end
#define maxint INT_MAX
#define minint INT_MIN
#define ar array

const int mxN = 2e5;

int main(){
  string str;
  cin >> str;
  string ans = "";
  for(int i = 0; i<str.size();){
    if(str[i] == '.'){
      ans += "0";
      i++;
    }
    else if(str[i] == '-'){
      if(str[i+1] != '\0'){ 
        if(str[i+1] == '.')
          ans+= "1";
        else
          ans+= "2";
        i+=2;
      }
      else{
        cout << ans;
        return 0;
      }
    }
  }
  cout << ans;
  return 0;
}
