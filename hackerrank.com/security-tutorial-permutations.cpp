#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int count;
    cin >> count;
    int f[count+1];
    for(int i = 1; i <= count; i++) cin >> f[i];
    for(int i = 1; i <= count; i++) 
        cout << f[f[i]] << endl;
    return 0;
}

