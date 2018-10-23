#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string message = ""; 
    string result = "";
    cin >> message;
    for(int i = 0; i < message.length(); i++) {
        if(message[i]-'0' < 0 || 9 < message[i]-'0') {
          cout << "Error: invalid input" << endl;
          return 1;
        }
        else {
          result += char((((message[i]-'0')+1) % 10)+'0');
        }
    }
    cout << result << endl;
    return 0;
}

