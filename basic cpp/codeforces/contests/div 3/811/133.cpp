#include<bits/stdc++.h>
using namespace std;

#define loop(x,n) for(int x = 0; x < n; ++x)
#define revloop(x,n) for(int x = n-1; x>=0; --x)


void A(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(n==1) cout << 2;
		else if(n%3==0) cout << n/3;
		else cout << (n/3)+1;
		cout << endl;
	}
}

void B(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> permutation;
		for (int i = 1; i <= n; i++) {
			permutation.push_back(i);
		}
		vector<int> fx_v(1,101);
		cout << n << endl;
		do {
		// process permutation
			int c = 0;
			for (int i = 0; i < n; i++){
				if((i+1)==permutation[i]) c++;
			}
			for (int i = 0; i < n; i++){
				if(c<fx_v.back()){
					cout << permutation[i] << " ";
				}
			}
			// s.insert(c);
			if(c<fx_v.back()) {
				cout << endl;
				fx_v.push_back(c);
			}
		} while (next_permutation(permutation.begin(),permutation.end()));
		
// O(t*n^2)
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