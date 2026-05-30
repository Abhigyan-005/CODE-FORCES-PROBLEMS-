#include <bits/stdc++.h>
using namespace std;
int main() {
    string s1 = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char c;
    cin >> c;
    string s;
    cin >> s;
    for(int i=0; i< s.length() ; i++ ){
        for(int j=0; j< s1.length() ; j++){
        if(s[i] == s1[j]){
               if(c == 'R'){
                cout << s1[j-1];
               } else cout << s1[j+1];
                 break; //Without break, the loop would still work correctly for this problem because every character appears only once in s1, but it would do unnecessary iterations.
        }
    }
}
return 0;
}