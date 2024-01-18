#include<bits/stdc++.h>
using namespace std;

#define loop(x,n) for(int x = 0; x < n; ++x)
#define revloop(x,n) for(int x = n-1; x>=0; --x)


void A(){
	int t;
	cin >> t;
	while(t--){
		int n;
		string s;
		cin >> n >> s;
		sort(s.begin(),s.end());
		// cout << s << endl;
		if(s=="Timru") cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}

void B(){
	int t;
	cin >> t;
	while(t--){
		int n;
		string s1,s2;
		cin >> n >> s1 >> s2;
		bool ni = false;
		loop(i,n){
			if((s1[i]=='R') && (s2[i]!='R')){
				ni=true;
				break;
			}
			if((s2[i]=='R') && (s1[i]!='R')){
				ni=true;
				break;
			}
		}
		if(ni) cout << "NO" << endl;
		else cout << "YES" << endl;
		
	}
}


void C(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[3] ={};
		map<string,unordered_set<int>> dict;
		for(int j=0;j<3;j++){
			loop(i,n){
				string s;
				cin >> s;
				dict[s].insert(j);
			}
		}
		for (auto x : dict) {
			for(auto i : x.second){
				if(x.second.size()==1) a[i]+=3;
				if(x.second.size()==2) a[i]+=1;
			}
			// cout << endl;
		}
		cout << a[0] << " " << a[1] << " " << a[2] << endl;

	}
}


long long sumDir(string s){
	int n = s.size();
	long long sum = 0;
	loop(i,n){
		if(s[i]=='L') {
			// cout << i << " "; 
			sum+=i;
		}
		if(s[i]=='R'){ 
			// cout << n-i-1 << " "; 
			sum+=(n-i-1);
		}
	}
	return sum;
}

void D(){
	int t;
	cin >> t;
	while(t--){
		int n;
		string s;
		cin >> n >> s;
		int a[n] = {};
		vector<int> st;
		int mid = n/2;
		int l_ct = 0;
		int r_ct = 0;
		loop(i,mid){
			if(s[i]=='L'){ 
				l_ct++;
				a[i] = 1;
				st.push_back(mid-i);
			}
		}
		if(n%2==0){
			for(int i=mid;i<n;i++){
				if(s[i]=='R') {
					r_ct++;
					a[i] = 1;
					st.push_back(i-mid+1);
				}
			}
		}
		else{
			for(int i=mid+1;i<n;i++){
				if(s[i]=='R') {
					r_ct++;
					a[i] = 1;
					st.push_back(i-mid);
				}
			}
		}

		long long sum = sumDir(s);
		// cout << l_ct << " " << r_ct << endl;
		sort(st.rbegin(),st.rend());
		// loop(i,st.size()) cout << st[i] << " ";
		// cout << endl;
		// for (auto x : st) {
		// 	cout << x << " ";
		// }

		int k_max = l_ct+r_ct;
		// loop(i,n){
		// 	int k=i+1;

		// }

		for(int j=0;j<st.size();j++){
			int i = st[j];
			// int k = i;

			if(s[mid-i]=='L'){
				s[mid-i] = 'R';
				sum -= mid-i;
				sum += n-mid-i-1;
			}
			// else if(s[mid+i-1]=='R'){
			// 	s[mid-i] = 'L';
			// 	sum -= n-mid+i-1-1;
			// 	sum += mid+i-1;
			// }
			cout << sum << " ";
			// if(s[j]=='L'){
			// 	sum -= j;
			// 	sum += n-j-1;
			// }
			// if(s[j]=='R'){
			// 	sum -= n-j-1;
			// 	sum += j;
			// }

		}
		cout << endl;
		// cout << sum << " " << k_max << endl;

		// loop(i,n){
		// 	int k=i+1;
		// 	for(int j=1;j<=k;j++){
		// 		int m=0;
		// 		while(j)
		// 	}
		// }
		// cout << sumDir(s);
		// cout << endl;
	}
}


int main(){
	// A();
	// B();
	// C();
	D();
	// E();
	// F();
	// G();
}