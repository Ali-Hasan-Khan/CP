#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i=30;i>=0;i--){
			if(n>=(1<<i)) {
				cout << (1<<i)-1 << endl;
				break;
			}
		}
		// normal method
		// for(int i=n;i>=1;i--){
		// 	if((i&i-1)==0){
		// 		cout << i-1 << endl;
		// 		break;
		// 	}
		// }
	} //O(t*31)
}