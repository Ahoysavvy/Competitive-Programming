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
  int n;
  cin >> n;
  int k = n;
  char p,c;
  int count = 0;
  while(n--){
    if(n == k-1){
      cin >> c;
    }else{
      p = c;
      cin >> c;
      if(p-c == 0) count++;
    }
  }
  cout << count;
  return 0;
}
