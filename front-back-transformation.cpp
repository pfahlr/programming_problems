#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        string s;
        cin >> s;
        for(int i = 0; i < s.size(); i++) {
            int tmp = s[i];
            if(65 <= tmp && tmp <= 90) { //upper
                cout << (char)(90 - (tmp - 65));
            }
            else if(97 <= tmp && tmp <= 122) { //lower
                cout << (char)(122 - (tmp - 97));
            }
        }
        cout << endl;
    }
}
