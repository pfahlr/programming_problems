#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    //it's just n factorial.
    int input;
    int result = 0;
    cin >> input; 
    result = input;
    for(int i = (input-1); i > 0; i--) {
      result *= i;
    }
    cout << result << endl;
    return 0;
}

