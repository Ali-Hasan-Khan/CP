#include<bits/stdc++.h>
using namespace std; 

int main(){
	int t; 
	cin >> t;   
	while(t--){
		int field[2][2];
		int ct = 0;
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				cin >> field[i][j];
				if(field[i][j]==1) ct++;
			}
		}
		if(ct==0) cout << 0 << endl;
		else if(ct==4) cout << 2 << endl;
		else cout << 1 << endl;
	}
}