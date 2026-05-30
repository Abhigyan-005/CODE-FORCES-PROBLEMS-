#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    // int l = m*n;
    // if(sqrt(l)){
    //     l= sqrt(l);
    //     count++;
    // }
    int x = min(n,m);
    if(x % 2 != 0){
        cout << "Akshat";
    } else cout << "Malvika";
    return 0;
}