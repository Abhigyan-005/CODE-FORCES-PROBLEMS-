#include <iostream>
using namespace std;
 
int main() {
    char s[210];
    cin >> s;
    int i = 0;
    while (s[i] != '\0'){
        if (s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
          while(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')  {
              i = i+3;
          }
          if(s[i] != '\0')
              cout << " ";
        }
          else{
              cout << s[i];
              i++;
          }
        }
        return 0;
    }
// print space only if next part is not WUB and not end
         //   if (s[i] != '\0' &&
         //    !(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')) {
         //     cout << " ";
         // }