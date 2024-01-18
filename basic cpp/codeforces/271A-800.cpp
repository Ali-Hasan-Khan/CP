#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n++){
		string s = to_string(n);
		int hsh[10] = {};
		for(int a=0;a<4;a++){
			hsh[s[a]-'0']++;
		}
		bool dist = true;
		for(int a=0;a<10;a++){
			if(hsh[a]>1) dist=false;
		}
		if(dist){
			cout << n;
			break;
		}
	}
}