#include <bits/stdc++.h>
using namespace std;
 
/*
====================================================
                    TYPE ALIASES
====================================================
*/
 
using ll = long long;
 
/*
====================================================
                    CONSTANTS
====================================================
*/
 
const ll INF = 1e18;
const int MOD = 1e9 + 7;
 
/*
====================================================
                    FAST IO
====================================================
*/
 
void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
 
/*
====================================================
                COMMON STL CHEATSHEET
====================================================
 
VECTOR
vector<int> v;
v.push_back(5);
v.size();
 
PAIR
pair<int,int> p = {1,2};
p.first
p.second
 
SORT
sort(v.begin(),v.end());
sort(v.rbegin(),v.rend());
 
MAP
map<int,int> mp;
mp[x]++;
 
SET
set<int> st;
st.insert(x);
 
====================================================
PREFIX SUM
====================================================
 
vector<ll> pref(n+1,0);
for(int i=1;i<=n;i++)
    pref[i]=pref[i-1]+a[i];
 
Range Sum:
pref[r]-pref[l-1]
 
====================================================
BINARY SEARCH
====================================================
 
int l=1,r=1e9;
while(l<=r){
    int mid=l+(r-l)/2;
}
 
====================================================
TWO POINTERS
====================================================
 
int l=0,r=0;
while(r<n){
    while(condition){
        l++;
    }
    r++;
}
 
====================================================
FREQUENCY COUNTING
====================================================
 
map<int,int> freq;
for(int x:a)
    freq[x]++;
 
====================================================
GREEDY
====================================================
 
1. Sort
2. Pick best option
3. Continue
*/
 
ll gcdll(ll a,ll b){
    return __gcd(a,b);
}
 
ll lcmll(ll a,ll b){
    return (a/gcdll(a,b))*b;
}
 
ll binpow(ll a,ll b){
    ll res=1;
    while(b){
        if(b&1) res*=a;
        a*=a;
        b>>=1;
    }
    return res;
}
 
void solve(){
    int n;
    cin >> n;
    int yo = n+1;
    // vector<int> v;
    // for(int i=2;i<=n+1;i++){
    //    v.push_back(i);
    // }
    int flag=1;
    for(int j=2;j*j<=yo;j++){
    if(yo%j==0){
        flag=0;
        break;
    } 
}
    if(flag) cout << "YES
";
    else cout << "NO
";
}
 
 
int main(){
    fastIO();
 
    int t;
    cin>>t;
 
    while(t--){
        solve();
    }
 
    return 0;
}