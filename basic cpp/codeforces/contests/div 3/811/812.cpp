#include<bits/stdc++.h>
using namespace std;

#define loop(x,n) for(int x = 0; x < n; ++x)
#define revloop(x,n) for(int x = n-1; x>=0; --x)
#define loop1S(x,n) for(int x = 1; x <= n; ++x)

const long long N = 1e7;
int arr[N] = {};
// int hsh[N] = {};


void A(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int x0 = 0;
		int y0 = 0;
		int dist = 0;

		vector<pair<int,int>> m;
		for(int i=0;i<n;i++){
			int x,y;
			cin >> x >> y;
			m.push_back({x,y});
		}
		sort(m.begin(), m.end());
		// for(int i=0;i<n;i++){
		// 	cout << m[i].first << " " << m[i].second << endl;
		// }
		for(int i=0;i<n;i++){
			int x = m[i].first;
			int y = m[i].second;
			dist += abs(x0-x) + abs(y0-y);
			x0 = x;
			y0 = y;
		}
		dist += abs(x0-0) + abs(y0-0);
		cout << dist << endl;
	}
}




void B(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long min = 1e10;
		int min_ind = 0;
		int mx = 0;
		int mx_ind = 0;
		unordered_set<int> s;
		loop1S(i,n){
			cin >> arr[i];
			// hsh[arr[i]]++;
			s.insert(arr[i]);
			if(min > arr[i]){
				min = arr[i];
				min_ind = i;
			}
			if(mx < arr[i]){
				mx = arr[i];
				mx_ind = i;
			}
		}
		if(s.size()==n){
			if(is_sorted(arr,arr+n)) cout << "YES";
			else cout << "NO";
			continue;
		}
		else{
			
		}
		// loop1S(i,n-1){
		// 	if(arr[i]!=arr[i+1]) it = arr[i+1];
		// }
		// if(min_ind==1 || min_ind==n) cout << "YES";
		// else cout << "NO";
		// cout << mx << " " << mx_ind;
		// loop1S(i,n) cout << arr[i] << " ";
		// loop1S(i,n){
		// 	cout << arr[i]-1 << " ";
		// }
		cout << endl;
	}
}


int main(){
	// A();
	B();
	// C();
	// D();
	// E();
	// F();
	// G();
}