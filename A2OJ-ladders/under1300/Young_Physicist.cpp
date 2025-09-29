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
  int sumx = 0, sumy = 0, sumz = 0;
  for(int i = 0;i<n;i++){
    int x, y, z;
    cin >> x >> y >> z;
    sumx+=x;
    sumy+=y;
    sumz+=z;
  }
  if(sumx == 0 && sumy == 0 && sumz == 0)
    cout << "YES";
  else 
    cout << "NO";
  return 0;
}
