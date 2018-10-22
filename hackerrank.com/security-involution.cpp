#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int count;
    cin >> count;
    int f[count+1];
    for(int i=1; i <= count; i++) {
      cin >> f[i];
    }
    
    for(int i = 1; i <= count; i++) {
      if(f[f[i]] != i){ 
        cout << "NO" << endl;
        return 0; 
      }
    }
    cout << "YES" << endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

