#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	int ca = 1;
	int cb = 2;
	while(true){
		a-=ca;
		if(a<0) {
			cout << "Vladik";
			break;
		}
		else ca+=2;
		b-=cb;
		if(b<0) {
			cout << "Valera";
			break;
		}
		else cb+=2;
	}
}