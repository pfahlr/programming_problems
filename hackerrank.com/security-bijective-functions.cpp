#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int count;
    int tmp;
    cin >> count;
    int seen[count];
    for(int i = 1; i <= count; i++) {
        cin >> tmp;
        for(int j = 0; j < i; j++){
            if(seen[j] == tmp) {
                cout << "NO" << endl;
                return 0;
            }
        }
        seen[i] = tmp;
    }
    cout << "YES" << endl;
    return 0;
}

