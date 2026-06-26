#include <iostream>
using namespace std;
 
int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
 
    int a = (k * l) / nl;
    int b = c * d;
    int s = p / np;
 
    if (b < a)
        a = b;
 
    if (s < a)
        a = s;
 
    cout << a / n;
 
    return 0;
} //streak