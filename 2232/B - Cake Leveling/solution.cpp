#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0 ; i<n ; i++){
            cin >> a[i];
        }
        long long pref =0 , mn= INT_MAX;
        for(int i=0 ; i<n ; i++){
            pref = pref + a[i];
            mn = min(mn, pref/(i+1));
            cout << mn << " ";
    }
    cout << '
';
}
}