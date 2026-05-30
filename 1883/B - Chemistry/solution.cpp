#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin >> t;
    while(t--){
    long long n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    int freq[26]={0};
    for(int i=0; i<s.size(); i++){
      freq[s[i]-'a']++;
    }
    int oC = 0;
    for(int i=0; i<26;i++){
        if(freq[i]%2 != 0){
            oC++;
        }
    }
    if(oC <= k+1){
        cout << "YES
";
    } else cout << "NO
";
}
}