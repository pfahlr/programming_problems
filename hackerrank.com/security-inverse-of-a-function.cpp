#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    scanf("%d\n", &n);
    int *y_values = (int *) malloc(sizeof(int) * n);
    
    // INPUT
    for (int i = 0; i < n; i++) 
        scanf("%d ", &y_values[i]);
    
    // BASIC SEARCH
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n; j++) {
            if (y_values[j] == i)
                printf("%d\n", j+1);
        }
    }
    return 0;
}

