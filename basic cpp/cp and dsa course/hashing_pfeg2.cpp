/*
Starting with a 1-indexed array of zeros and a 
list of operations, for each operation add a value
to each the array element between two given indices, 
inclusive. Once all operations have 
been performed, return the maximum value in the array.

constraints:
3 ≤ n ≤ 10^7 
1 < m < 2*10^5
1 ≤ a < b ≤ n
0 ≤ k ≤ 10^9

input:
n(size of array) m(no of queries)
a(left bound) b(right bound) k(value to add)
.
.
m queries

eg:
10 3
1 5 3
4 8 7
6 9 1 

*/

#include<bits/stdc++.h>
using namespace std; 

const int N = 1e7+5;
long long arr[N]; // array initialised by 0 by default

int main()
{
	int n,m;
	cin >> n >> m;
	while(m--){
		int a,b,k;
		cin >> a >> b >> k;
		arr[a] += k;
		arr[b+1] -= k;
	}
	// now take prefix sum to get the resulting array
	for(int i=1;i<=n;i++){
		arr[i] += arr[i-1];
	}
	long long max = -1;
	for(int i=1;i<=n;i++){
		if(arr[i]>max) max = arr[i];
	}
	cout << max << endl;
}

