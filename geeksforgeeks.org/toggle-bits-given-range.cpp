#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        int number, L, R;
        cin >> number;
        cin >> L;
        cin >> R;
        int iXor = 0;
        for(int i = L; i <= R; i++) {
            iXor += (1 << (i-1));
        }
        number ^= iXor;
        cout << number << endl;
    }
}
