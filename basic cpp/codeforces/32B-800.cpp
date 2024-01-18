#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	s = " " + s + " ";
	for(int i=1;i<s.size()-1;i++){
		if((s[i]=='-')&&(s[i+1]=='.')){
			cout << 1;
			i++;
		}
		else if((s[i]=='-')&&(s[i+1]=='-')){
			cout << 2;
			i++;
		}
		else cout << 0;
	}
}