#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    string first, second;

    cin >> T;

    while(T--) {
        cin >> first;
        cin >> second;
        if(first.size() == second.size()) {
            std::sort(first.begin(), first.end());
            std::sort(second.begin(), second.end());

            if(first == second) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}
