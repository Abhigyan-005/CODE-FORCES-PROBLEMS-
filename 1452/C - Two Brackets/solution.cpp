#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        string s;
        cin >> s;
 
        int round = 0;
        int square = 0;
        int ans = 0;
 
        for (char c : s) {
            if (c == '(') {
                round++;
            }
            else if (c == ')') {
                if (round > 0) {
                    round--;
                    ans++;
                }
            }
            else if (c == '[') {
                square++;
            }
            else if (c == ']') {
                if (square > 0) {
                    square--;
                    ans++;
                }
            }
        }
 
        cout << ans << '
';
    }
 
    return 0;
} //streak...ehhu