#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        unsigned int i;
        unsigned int finalnum;
        int tmp;
        int counter;
        cin >> i;
        int j=0;
        for(;;) {
            tmp = i << j >> j;
            if(tmp != i) break;
            j++;
        }
        final = ~i << j >> j;
        cout << finalnum << endl;
    }
}
