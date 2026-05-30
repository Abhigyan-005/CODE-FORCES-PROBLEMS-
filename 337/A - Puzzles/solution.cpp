#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int m , n ;
    cin >> n >> m;
    int f[m];
    for(int i =0 ; i<m ; i++){
        cin >> f[i];
    }
    sort(f,f+m);
    // for(int i =0 ; i<m ; i++){
    //     cout << f[i] << " ";
    // }
    int ans = INT_MAX;
    //int max = INT_MIN;
    for(int i=0 ; i<= m-n ; i++){
       int mn = f[i];
       int mx = f[i+n-1];
       ans = min(ans, mx-mn);
    }
    cout << ans << endl;
    return 0;
}