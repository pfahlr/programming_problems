#include <iostream>
using namespace std;

int main() {
    int time, size;
    int T, ans;
    cin >> T;
    while (T--) {
      cin >> size;
      cin >> time;
      if(time > size) time = size;
      int trees[size];
      for(int i = 0; i < size; i++) {
        cin >> trees[i];
      }

      ans = 0;
      for(int i = 0; i < size; i++) {
        int tmp = 0;

        for(int j = 0; j < time; j++) {
            int currTree = (j+i) % size;
            tmp += trees[currTree];
          }
        if(tmp > ans) ans=tmp;
      }
      cout << ans << endl;
    }
    return 0;
}
