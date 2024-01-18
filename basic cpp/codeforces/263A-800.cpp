#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[10][10];
	int n_moves=0;
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++) {
			cin >> arr[i][j];
			if(arr[i][j]==1) n_moves = abs(3-i) + abs(3-j);  
		}
	}
	cout << n_moves << endl;
} // O(25)