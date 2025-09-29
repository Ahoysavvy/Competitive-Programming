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
  if(str[0] >= 'a'){
    str[0]-=32;
  }
  cout << str;
  return 0;
}
