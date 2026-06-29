#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        long long n, x, y, z;
        cin >> n >> x >> y >> z;
 
        // Option 1: Without AI
        long long withoutAI = (n + (x + y) - 1) / (x + y);
 
        // Option 2: With AI
        long long withAI;
 
        if (x * z >= n) {
            withAI = (n + x - 1) / x;
        } else {
            long long rem = n - x * z;
            long long extra = (rem + (x + 10 * y) - 1) / (x + 10 * y);
            withAI = z + extra;
        }
 
        cout << min(withoutAI, withAI) << "
";
    }
 
    return 0;
}