#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int a[n];
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    // for(int i=0 ; i<n ; i++){
    //     cout << a[i] << " ";
    // }
    int sum =0 ;
    for(int i=0 ; i<m ;i++){
        if(a[i]<0){
        sum = sum + a[i];
    }
}
    cout << abs(sum) << endl;
    return 0;
 
}