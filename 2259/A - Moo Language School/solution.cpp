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
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    int yo =0;
    for(int i=0;i<n;i+=k){
       int yes=1;
       for(int j=i;j<i+k;j++){
        if(s[j]=='0'){
            yes =0;
            break;
        }
       }
       if(yes) yo++;
    } cout << yo << endl;
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