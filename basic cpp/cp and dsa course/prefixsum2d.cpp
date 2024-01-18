/* to print sum of elements of square with top left 
index as (a,b) to bottom right index 
as(c,d)(both inclusive)
of a 2d array of length N*N */

#include<bits/stdc++.h>
using namespace std; 

const int N = 1e3+10;
int arr[N][N];
// prefix array
int pf[N][N];

int main(){
	int n; 
	cin >> n;
	// staring index from 1 to handle (i-1)
	for (int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin >> arr[i][j];
			pf[i][j] = arr[i][j] + pf[i-1][j] + pf[i][j-1] - pf[i-1][j-1];
		}
	}
	int q;
	cin >> q;
	while(q--){
		int a,b,c,d;
		cin >> a >> b >> c >> d;
		cout << pf[c][d] - pf[c][b-1] - pf[a-1][d] + pf[a-1][b-1] << endl;
	}
} // O(N*N) + O(Q) = O(N^2) = 10^6(<10^7)