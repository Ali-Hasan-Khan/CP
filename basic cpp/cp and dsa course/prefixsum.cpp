/* to print sum of elements 
from indexes L to R(L,R inclusive)
of an array of length N*/

#include<bits/stdc++.h>
using namespace std; 

const int N = 1e5+10;
int a[N];
// prefix array
int pf[N];

int main(){
	int n; 
	cin >> n;
	// staring index from 1 to handle (i-1)
	for (int i=1; i<=n; i++){
		cin >> a[i];
		pf[i] = pf[i-1] + a[i];
	}
	// long long sum=0;
	int q;
	cin >> q;
	while(q--){
		int L,R;
		cin >> L >> R;
		cout << pf[R] - pf[L-1] << endl;
	}
} // O(N) + O(Q) = O(N) = 10^5