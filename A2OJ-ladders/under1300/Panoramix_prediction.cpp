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

bool isprime(int a){
  if(a <=1 )
    return false;
  if(a<=3)
    return true;

  if(a%2 == 0 || a%3 == 0)
    return false;

  for(ll i = 5 ; i*i<=a;i+=6)
    if(a%i == 0 || a%(i+2) == 0)
      return false;
  return true;

}

int main(){
  int a,b;
  cin >> a >> b;
  if(isprime(a)){
    for(int i = a+1; i<mxN;i++){
      if(isprime(i)){
        if(i == b){
          cout << "YES";
          return 0;
        }else{
          cout << "NO";
          return 0;
        }
      }
    }
  }
}
