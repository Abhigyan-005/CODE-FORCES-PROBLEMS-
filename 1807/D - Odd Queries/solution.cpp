#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
    int n,q;
    cin >> n >> q;
    long long a[n+1]; //(n+1) because to covert into 1 based indexing
    long long prefix[n+1];
    prefix[0] = 0;
    for(int i=1 ; i<=n; i++){
        cin >> a[i];
        prefix[i] = prefix[i-1] + a[i];
    }
    while(q--){
       long long l,r,k;
       cin >> l >> r >> k;
    //    int sum = 0, sum1=0;
    //    for(int i=1;i<=n;i++){
    //     sum = sum + a[i];
    //    }
    //    for(int j=l; j<=r;j++){
    //     sum1= sum1 + a[j];
    //    }
    //    int sum3 = (sum-sum1);
    //    int sum4 = (sum3+ (r-l+1)*k);
    long long total = prefix[n];
    long long removed = prefix[r] - prefix[l-1];
    total = total - removed;
    total = total + (r-l+1)*k;
       if(total % 2 == 0){
        cout << "NO
";
       } else cout << "YES
";
    }
}
}