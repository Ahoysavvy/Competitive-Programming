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
  int val, ti,tj;
  for(int i = 0;i<5;i++){
    for(int j = 0;j<5;j++){
      cin >> val;
      if(val == 1){
        ti = i;
        tj = j;
        break;
      }
    }
    if(val == 1)
      break;
  }
  int ans = abs(ti-2) + abs(tj-2);
  cout << ans;
}

