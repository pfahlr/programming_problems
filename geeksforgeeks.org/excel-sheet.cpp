/******************************************************************************
//Rick Pfahl
//pfahlr@gmail.com
//11.6.2017
//Excel Sheet Part 1
-------------------------------------------------------------------------------
Given a positive integer, return its corresponding column title as appear in
an Excel sheet.

For example:

    1 -> A
    2 -> B
    3 -> C
    ...
    26 -> Z
    27 -> AA
    28 -> AB

NOTE: The alphabets are all in uppercase.

Input:

The first line contains an integer T, depicting total number of test cases.
Then following T lines contains an integer N.

Output:

Print the string corrosponding to the column number.

Constraints:

1 ≤ T ≤ 100
1 ≤ N ≤ 10000000

Example:

Input
1
51
Output
AY

Test Data:
28
2
1
2
25
26
27
28
51
676
677
678
690
691
692
693
694
695
696
697
698
699
700
701
702
703
704
705
10000

*******************************************************************************/

#include<iostream>

using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
	    int n;
	    cin >> n;
	    string colName = "";

	    while(n > 0) {
	        int r;
            r = (n-1)%26;
            n = (n - 1)/26;
            colName = char(r + 65) + colName;
	    }
	    cout << colName << endl;
	}

	return 0;
}
