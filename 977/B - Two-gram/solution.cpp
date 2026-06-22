#include <iostream>
using namespace std;
 
int main() {
    int n;
    string s;
    cin >> n >> s;
 
    string ans = "";
    int mx = 0;
 
    for (int i = 0; i < n - 1; i++) {
        int cnt = 0;
 
        for (int j = 0; j < n - 1; j++) {
            if (s[i] == s[j] && s[i + 1] == s[j + 1]) {
                cnt++;
            }
        }
 
        if (cnt > mx) {
            mx = cnt;
            ans = "";
            ans += s[i];
            ans += s[i + 1];
        }
    }
 
    cout << ans;
}