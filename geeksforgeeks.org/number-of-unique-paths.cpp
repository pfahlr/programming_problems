#include<iostream>

using namespace std;

int subPath( int i, int j, int m, int n);
bool canMove( int i, int j, int m, int n);

int main() {

    int T;
    cin >> T;

    while(T--) {
	    int M, N;
	    cin >> M;
	    cin >> N;

	    int total = 0;
	    if(canMove( 0, 0, M, N)) total = subPath( 0, 0, M, N);

	    cout << total << endl;

	}
	return 0;
}

bool canMove(int i, int j, int m, int n) {
    return (0 <= i && i < m && 0 <= j && j < n);
}

int subPath( int i, int j, int m, int n) {
    if(i == (m-1) && j == (n-1)) {return 1;}

    int total = 0;

    if(canMove( i+1, j, m, n)) total += subPath( i+1, j, m, n);
    if(canMove( i, j+1, m, n)) total += subPath( i, j+1, m, n);

    return total;
}
