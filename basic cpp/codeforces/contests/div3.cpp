#include<bits/stdc++.h>
using namespace std;
using li = long int;
using lli  = long long int;


#define loop(x,n) for(int x = 0; x < n; ++x)
#define loop1S(x,n) for(int x = 1; x <= n; ++x)
#define revloop(x,n) for(int x = n-1; x>=0; --x)
#define ll long long
#define all(v) (v).begin(),(v).end()
#define in(v) for(auto& item:v) cin >> item;



void solve(){
	int n,k;
	cin >> n >> k;
	loop(i,n){
		int x;
		cin >> x;
		if(x==k) {
			cout << "YES" << endl;
			return;
		}
	}
	cout << "NO" << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}