#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    if(n<0){
      n= abs(n);
      int n2 = (n/10)%10;
      int n3 = n%10;
      if (n2 > n3) {
        int n4 = n/100;
        cout << -1*(n4*10+n3) << endl;
      }
      else cout << -1*(n/10) << endl;
    } else cout << n << endl;
    return 0;
  } 