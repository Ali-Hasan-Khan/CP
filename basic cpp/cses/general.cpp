#include<bits/stdc++.h>
using namespace std;


#define loop(x,n) for(int x = 0; x < n; ++x)
#define loop1S(x,n) for(int x = 1; x <= n; ++x)
#define revloop(x,n) for(int x = n-1; x>=0; --x)
#define ll long long


void numspiral(){
	int t;
	cin >> t;
	while(t--){
		ll y,x;
		cin >> y >> x;
		ll ans = 0;
		if(y>x){
			if(y%2==0) ans = y*y - (x-1);
			else ans = (y-1)*(y-1) + 1 + (x-1);
		}
		else{
			if(x%2==0) ans = (x-1)*(x-1) +1 + (y-1);
			else ans = x*x - (y-1);
		}
		cout << ans << endl;
	}
}


void twoknights(){
	ll n;
	cin >> n;
	for(ll i=1;i<=n;i++){
		ll placed = (i*i)*(i*i-1)/2;
		ll attack = 4*(i-1)*(i-2);
		cout << placed - attack << endl;
	}
}


void distinctnums(){
	ll n;
	cin >> n;
	set<ll> s;
	for(int i=0;i<n;i++){
		ll x;
		cin >> x;
		s.insert(x);
	}
	cout << s.size();
}



int main(){
	// numspiral();
	// twoknights();
	distinctnums();
	// return 0;
}