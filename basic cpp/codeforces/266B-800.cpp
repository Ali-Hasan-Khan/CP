#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,t;
	cin >> n >> t;
	string s;
	cin >> s;
	while(t--){
		vector<int> v;
		for(int i=0;i<n;i++){
			if(s[i]=='B') v.push_back(i);
		}
		for(int i=0;i<v.size();i++){
			if(v[i]+1<n) swap(s[v[i]],s[v[i]+1]);
		}
		
	}
	cout << s << endl;

} // O(t*(n+n)) = O(t*n)