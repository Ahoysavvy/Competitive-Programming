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
  int n = str.size();
  int lc = 0;
  for(char x:str){
    if(x >= 'a' && x <= 'z'){
      lc++;
    }
  }
  int uc = n-lc;
  if(lc>uc || lc == uc){
    transform(str.bg(), str.en(), str.bg(),  ::tolower);
  }
  else{
    transform(str.bg(), str.en(), str.bg(), ::toupper);
  }
  cout << str;
  return 0;
}
