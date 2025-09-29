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

void swap(string &s, int i, int j){
  char temp = s[i];
  s[i] = s[j];
  s[j] = temp;
}
int main(){
  int n , t;
  cin >> n >> t;
  string str = "";
  cin >> str;

  for(int i = 0;i<t;i++)
    for(int j = 0;j<n-1;){
      if(str[j] == 'B' && str[j+1] == 'G'){
        swap(str,j,j+1);
        j+=2;
      }
      else{
        j++;
      }
    }
  cout << str;

}
