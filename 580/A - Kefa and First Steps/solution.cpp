#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    long long a[n];
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }
    int count = 1;
    int mex = 1;
    for(int i=1 ; i<n ; i++){
        if(a[i-1] <= a[i]){
            count++;
        } else count = 1;
        mex = max(mex , count);
    }
     cout << mex << endl;
    return 0;
}