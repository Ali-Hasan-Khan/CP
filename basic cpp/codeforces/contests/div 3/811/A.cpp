#include<bits/stdc++.h>
using namespace std;

#define loop(x,n) for(int x = 0; x < n; ++x)
#define revloop(x,n) for(int x = n-1; x>=0; --x)

void A(){
	int t;
	cin >> t;
	while(t--){
		int n,H,M;
		cin >> n >> H >> M;
		int h_Diff = 24;
		int m_Diff = 60;
		while(n--){
			int h,m;
			cin >> h >> m;
			int h_diff = h - H;
			int m_diff = m - M;
			if (m_diff < 0){
				h_diff -= 1;
	            m_diff += 60;
			}
	            
	        if (h_diff < 0){
	        	h_diff += 24;
	        }
	            
	        if (h_diff * 60 + m_diff < h_Diff * 60 + m_Diff){
	        	swap(h_diff,h_Diff);
	        	swap(m_diff,m_Diff);
	        }
	            
		}
		cout << h_Diff << " " << m_Diff << endl;
	}
}

/*
// solution 2 to A --


void A2(){
	int t;
	cin >> t;
	while(t--){
		int n,H,M;
		cin >> n >> H >> M;
		int min_t = 2359;
		int total_mins = 1440;
		int sleep = H*60+M;
		int diff = 1440;
		while(n--){
			int h,m;
			cin >> h >> m;
			int alarm = h*60+m;
			diff = min(diff, (alarm - sleep + 1440) % 1440); 
		}
		cout << diff/60 << " " << diff%60 << endl;
	}
}

*/


// bool isDistinct(vector<int> &arr){
// 	int n = arr.size();
// 	unordered_set<int> s;
// 	loop(i,n){
// 		s.insert(arr[i]);
// 	}
// 	return (s.size()==arr.size());
// }

// bool isDistinct2(vector<int> &arr){
// 	sort(begin(arr), end(arr));
// 	auto pos = adjacent_find(begin(arr), end(arr));
// 	return !(pos != end(arr));
// }

void B(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		vector<int> arr(n);
		loop(i,n){
			int x;
			cin >> x;
			arr[i] = x;
		}

		set<int> SET;
	    int i = n - 1;
	    while (i >= 0 and !SET.count(arr[i])){
	        SET.insert(arr[i]);
	 		i--;
	 	}
	    cout << i + 1 << "\n";
		
	}
	// O(t*n)
}

void C(){
	int t;
	cin >> t;
	while(t--){
		int s;
		cin >> s;
		int n = 123456789;
		for(int i=45;i>=0;i--){
			if(s==i) cout << n << endl;
			else{
				// string m = to_string(n);
				int n_dig = (int)log10(n)+1;
				int first_dg = (int)(n/pow(10,n_dig-1));
				first_dg--;
				int m = first_dg*pow(10,n_dig-1)+n%(int)pow(10,n_dig-1);
				n = m;
			}
		}
	} 

}

bool allsame(long long arr[],int n){
	unordered_set<int> s;
	loop(i,n) s.insert(arr[i]);
	return (s.size()==1);
}

void E(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long arr[n];
		int c[2] = {};
		loop(i,n){
			cin >> arr[i];
		}
		loop(i,n){
			if(arr[i]%10==0) c[0]++;
			else if(arr[i]%10==5){
				c[0]++;
				arr[i] += 5;
			}
			else{
				c[1]++;
				while(arr[i]%10!=2) arr[i] += (arr[i]%10); // O(5)
			}
			// cout << arr[i] << " ";

		}
		if(c[0]==n){
			sort(arr,arr+n);
			if(arr[0]==arr[n-1]) cout << "yes";
			else cout << "no";
		}
		else if(c[1]==n){
			sort(arr,arr+n);
			bool diff = false;
			loop(i,n-1){
				if((arr[i]-arr[i+1])%20!=0){
					cout << "no";
					diff = true;
					break;
				} 
			}
			if(!diff) cout << "yes";
		}
		else{
			cout << "no";
		}
		cout << endl;
	}
} // O(t*(n+5n+nlogn+n)) = O(t*nlogn) = 2*10^5*17 = 10^5

int main(){
	// A();
	// C();
	E();
	// B();
}


/* 

solution 3 to A --

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,H,M;
		cin >> n >> H >> M;
		int min_t = 2359;
		while(n--){
			int h,m;
			cin >> h >> m;
			int hi = 0;
			int mi = 0;
			if((m<M) && (h<H)){
				hi = 23+h-H;
				mi = 60+m-M;
			} 
			if((m>=M) && (h>=H)){
				hi = h-H;
				mi = m-M;
			} 
			if((m<M) && (h>=H)){
				if(h==H) hi = 23;
				else hi = h-H-1;
				mi = 60+m-M;
			}
			if((m>=M) && (h<H)){
				hi = 24+h-H;
				mi = m-M;
			} 
			if((hi*100+mi)<min_t) min_t = (hi*100+mi);
			// cout << hi << " " << mi << endl;

		}
		cout << min_t/100 << " " << min_t%100 << endl;
		// cout << h_min << " " << m_min << endl;
	}
}

*/



