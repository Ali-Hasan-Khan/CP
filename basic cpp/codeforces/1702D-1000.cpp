#include<bits/stdc++.h>
using namespace std; 

int main(){
	int t;
	cin >> t; 
	while(t--){
		string s;
		cin >> s; 
		int p;
		cin >> p;
		int pr = 0;
		for(int i=0;i<s.size();i++) pr += s[i] - 'a' + 1;
		string w(s);
		sort(w.rbegin(), w.rend());
		// for(int i=0;i<w.size();i++) cout << w[i];
		// cout << endl;
		map<char,int> del;
	     
		
		for(int i=0;i<w.length();i++){
	        if (pr > p) {
	            del[w[i]]++;
	            pr -= w[i] - 'a' + 1;
	        }
        }


     //    map<char, int>::iterator itr; 
	    // for (itr = del.begin(); itr != del.end(); ++itr) { 
	    //     cout << " " << itr->first << " " << itr->second 
	    //          << '\n'; 
	    // } 
	    // cout << endl;

        for(int i=0;i<s.size();i++){
        	if(del[s[i]]>0){
        		del[s[i]]--;
        		continue;
        	}
        	cout << s[i];
        }

        cout << endl;

		// 	if(s[i]-'a'<min_chr-'a') min_chr = s[i];
		// }
		// // cout << min_chr << endl;
		// if(pr<p) cout << s << endl; 
		// if(min_chr-'a'+1>p) cout << "" << endl;
		// // if(pr>p) cout << s.size() << endl; 
	}
}