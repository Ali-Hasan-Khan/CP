#include <bits/stdc++.h>
using namespace std; 


int main(){
	int t;
	cin >> t;
	while(t--){
		int a,b,c; 
		cin >> a >> b >> c;
		int m2 = max(a,b);
		int mx = max(m2,c);
		if(((a==mx)&&(b==mx)) || ((c==mx)&&(b==mx)) || ((a==mx)&&(c==mx))) {
			cout << mx+1-a << " " << mx+1-b << " " << mx+1-c << " " << endl;  
		}
		else{
			if(a==mx) cout << 0 << " " << mx+1-b << " " << mx+1-c << endl;
			if(b==mx) cout << mx+1-a << " " << 0 << " " << mx+1-c << endl;
			if(c==mx) cout << mx+1-a << " " << mx+1-b << " " << 0 << endl;
		} 		
	}
}