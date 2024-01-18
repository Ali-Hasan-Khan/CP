#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin >> n;
	while(n>1){
		if(n%2==0) {
			cout << n << " ";
			n /= 2;
		}
		else {
			cout << n << " ";
			n = n*3+1;
		}
	}
	cout << 1 << endl;
}