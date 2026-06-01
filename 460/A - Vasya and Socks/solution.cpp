#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    if(m>n) cout << n << endl;
    else if(m==n) cout << n+1 << endl;
    else if(m<n) {
        cout << n+((n-1)/(m-1)) << endl;
    }
    return 0;
}
 
//can we another methhod