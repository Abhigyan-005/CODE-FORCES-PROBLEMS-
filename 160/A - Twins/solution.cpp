#include <bits/stdc++.h>
using namespace std;
 
int main(){
   int n;
   cin >> n;
   int sum = 0;
   int a[n];
   for(int i=0; i<n ; i++){
       cin >> a[i];
       sum = sum + a[i];
   }
   sort(a , a+n , greater<int>());
   int mysum = 0;
   int count = 0;
    for(int i=0; i<n ; i++){
        mysum = mysum + a[i];
        count++;
        if ( mysum > sum/2){
            break;
        } 
    }
    cout << count << '
';
   }