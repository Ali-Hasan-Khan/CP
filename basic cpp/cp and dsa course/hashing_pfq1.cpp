#include<bits/stdc++.h>
using namespace std; 

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		// if count of atleast 1 letter is more than 1 -> double string
		int hsh[26] = {};
		for(int i=0;i<s.size();i++){
			hsh[s[i] - 'a']++;
		}
		int even_ct = 0;
		for(int i=0;i<26;i++){
			if(hsh[i]>1) even_ct++;
		}
		if(even_ct>0) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	// O(t*n*26) = 10^4
}