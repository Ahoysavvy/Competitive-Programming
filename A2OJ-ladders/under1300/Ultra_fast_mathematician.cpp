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
  string str1 , str2;
  int i = 0;
  cin >> str1 >> str2;

  while(str1[i]!= '\0'){
    if(str1[i] == str2[i])
      cout << "0";
    else cout << "1";
    i++;
  }
}
