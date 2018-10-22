/*******************************************************************************
//Rick Pfahl
//pfahlr@gmail.com
//11.6.2017
===============================================================================
Given two binary strings that represent value of two integers, find the product
of two strings. For example, if the first bit string is “1100” and second bit
string is “1010”, output should be 120.

Input:
First line consists of T test cases. Only line of every test case consists of
2 binary strings.

Output:
Single line output, print the multiplied value.

Constraints:
1<=T<=100
1<=Length of string<=100

Example:
Input:
2
1100 01
01 01
Output:
12
1

================================================================================
*******************************************************************************/
#include<iostream>

using namespace std;

int convertBinToInt(string s) {
    int tmp = 0;
    for(int i = 0; i < s.size(); i++) {
        if(i == 0) tmp = s[i]-'0';
        else tmp = (tmp << 1) + s[i]-'0';
    }
    return tmp;
}

int main() {
    int T;
    cin >> T;

    while(T--) {
        string a, b;
        int iA = 0;
        int iB = 0;
        cin >> a;
        cin >> b;
        iA = convertBinToInt(a);
        iB = convertBinToInt(b);
        cout << (iA * iB) << endl;
	}
	return 0;
}
