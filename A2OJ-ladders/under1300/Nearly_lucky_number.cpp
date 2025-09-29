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
  ll n;
  cin >> n;
  int f = 0;
  int s = 0;
  while(n!=0){
    ll ld = n%10;
    if(ld == 4){
      f++;
    }
    else if(ld == 7)
      s++;
    n/=10;
  }
  int sum = f+s;
  if(sum == 4 || sum == 7)
    cout << "YES";
  else cout << "NO";
  return 0;
}
