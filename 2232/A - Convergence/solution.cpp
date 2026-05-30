#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,n;
    cin >> t;
    while(t--){
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a , a+n);
    int ans= INT_MAX;
    for(int i=0; i<n; i++){
        int l = 0,r = 0;
        for(int j=0;j<n;j++){
            if(a[j] < a[i]) l++;
            else if(a[j] > a[i]) r++;
        }
        ans = min(ans , max(l,r));
        }
       cout << ans << endl;
    }
    return 0;
}