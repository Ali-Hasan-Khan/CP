#include<bits/stdc++.h>
using namespace std;


#define loop(x,n) for(int x = 0; x < n; ++x)
#define loop1S(x,n) for(int x = 1; x <= n; ++x)
#define revloop(x,n) for(int x = n-1; x>=0; --x)

const int N = 1e6;
int arr[N+10];


void wieralgo(){
	long long n;
	cin >> n;
	while(n>1){
		if(n%2==0) {
			cout << n << " ";
			n /= 2;
		}
		else {
			cout << n << " ";
			n = n*3+1;
		}
	}
	cout << 1 << endl;
}





void missingnum(){
	int n;
	cin >> n;
	for(int i=1;i<=n;i++) cin >> arr[i];
	sort(arr,arr+n);
	for(int i=1;i<=n;i++){
		if(arr[i]!=i){
			cout << i;
			break;
		}
	}
}



void repetitions(){
	string s;
	cin >> s;
	s = s+" ";
	int mx = 0;
	int ct = 0;
	bool distinct = false;
	for(int i=0;i<s.size();i++){
		// cout << s[i] << " \n";
		if(s[i]==s[i+1]) ct++;
		else {
			if(mx<ct) mx=ct;
			ct=0;
			distinct = true;
		}
	}
	if(distinct) cout << mx+1;
	else cout << ct+1;

}





void increasingarray(){
	int n;
	cin >> n;
	arr[0] = 0;
	long long c = 0;
	loop1S(i,n){
		cin >> arr[i];
		if(arr[i]<arr[i-1]) {
			c += arr[i-1]-arr[i];
			arr[i] = arr[i-1];
		}
	}
	cout << c;
}




void permut(){
	int n;
	cin >> n;
	vector<int> permutation;
	for (int i = 0; i < n; i++) {
		permutation.push_back(i);
	}
	do {
	// process permutation
		for (int i = 0; i < n; i++) cout << permutation[i] << " ";
		cout << endl;
	} while (next_permutation(permutation.begin(),permutation.end()));

}

void permutation(){
	int n;
	cin >> n;
	if(n==1) cout << 1;
	else if(n<4) cout << "NO SOLUTION";
	else{
		vector<int> v = {2,4,1,3};
		if(n==4) loop(i,n) cout << v[i] << " ";
		else{
			for(int i=5;i<=n;i++){
				if(abs(v.back()-i)>1) v.push_back(i);
				else{
					int a = v.back();
					v.pop_back();
					int b = v.back();
					v.pop_back();
					v.push_back(i);
					v.push_back(b);
					v.push_back(a);
				}
			}
			loop(i,n) cout << v[i] << " ";
		}

	}
}



void numspiral(){
	int t;
	cin >> t;
	while(t--){
		int y,x;
		cin >> y >> x;
		
	}
}

int main(){
	// wieralgo();
	// missingnum();
	// repetitions();
	// increasingarray();
	// permutation();
	numspiral();
}