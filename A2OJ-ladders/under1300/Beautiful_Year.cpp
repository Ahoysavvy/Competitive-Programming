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
  while(true){
    n += 1;
    int a = n / 1000;
    int b = n / 100 % 10;
    int c = n / 10 % 10;
    int d = n % 10;
    if( a != b && a != c && a != d && b != c && b != d && c != d ){
      break;
    }
  }
  cout << n;
  return 0;
}
