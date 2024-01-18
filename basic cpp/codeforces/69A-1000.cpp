#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int sumarr[3] = {};
	while(n--){
		int x,y,z;
		cin >> x >> y >> z;
		int v[3]={x,y,z};
		sumarr[0] += v[0];
		sumarr[1] += v[1];
		sumarr[2] += v[2];
	}
	int ct=0;
	for(int i=0;i<3;i++) { 
		if(sumarr[i]==0) ct++;
	}
	if (ct==3) cout << "YES" << endl;
	else cout << "NO" << endl;
} // O(n+3) = O(n)