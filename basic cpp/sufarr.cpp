#include <bits/stdc++.h>
// #include <cmath>
// #include <cstring>
// #include <vector>
// #include <string>
// #include <algorithm>
// #include <map>
// #include <set>
// #include <array>
using namespace std;


int main()
{	
	string s;
	cin >> s;
	s += "$";
	int n = s.size();
	vector<int> p(n), c(n);
	{
		// k=0
		vector<pair<char,int>> a(n);
		for(int i=0; i<n; i++) a[i] = {s[i], i};
		sort(a.begin(), a.end());
	
		for(int i=0; i<n; i++) cout << a[i].first << " " << a[i].second << endl;
	}
}