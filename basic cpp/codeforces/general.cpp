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


string getString(char x)
{
    // string class has a constructor
    // that allows us to specify size of
    // string as first parameter and character
    // to be filled in given size as second
    // parameter.
    string s(1, x);
 
    return s;  
}

// remove consecutive duplicates from string
// string s;
// transform(s.begin(), s.end(), s.begin(), [] (char c) {
// 	        return tolower(c);
// });
// s.erase(unique(s.begin(), s.end()), s.end());


void sortMaps(map<int, int>& M)
{
 
    // Declare a multimap
    multimap<int, int> MM;
 
    // Insert every (key-value) pairs from
    // map M to multimap MM as (value-key)
    // pairs
    for (auto& it : M) {
        MM.insert({ it.second, it.first });
    }
 
    // Print the multimap
    // for (auto& it : MM) {
    //     cout << it.second << ' ' << it.first << endl;
    // }
}



// Function to make the string unique
string unique(string s)
{
    string str;
    int len = s.length();
  
    // loop to traverse the string and
    // check for repeating chars using
    // IndexOf() method in Java
    for(int i = 0; i < len; i++)
    {
          
        // character at i'th index of s
        char c = s[i];
  
        // If c is present in str, it returns
        // the index of c, else it returns npos
        auto found = str.find(c);
        if (found == string::npos) 
        {
              
            // Adding c to str if npos is returned
            str += c;
        }
    }
    return str;
}


void A275(){
	int arr[5][5] = {};
	loop1S(i,3){
		loop1S(j,3){
			cin >> arr[i][j];
		}
	}

	loop1S(i,3){
		loop1S(j,3){
			int c = arr[i][j]+arr[i+1][j]+arr[i][j+1]+arr[i-1][j]+arr[i][j-1];
			if(c%2==0) cout << 1;
			else cout << 0;
		}
		cout << endl;
	}

	// loop(i,5){
	// 	loop(j,5){
	// 		cout << arr[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
}




void A59(){
	string s;
	cin >> s;
	int up = 0;
	int lw = 0;
	loop(i,s.size()){
		if((int)s[i]>96) lw++;
		else up++;
	}
	if(up>lw) transform(s.begin(), s.end(), s.begin(), ::toupper);
	else transform(s.begin(), s.end(), s.begin(), ::tolower);
	cout << s << endl;
}




void A281(){
	string s;
	cin >> s;
	s[0] = toupper((int)s[0]);
	cout << s;
}



void A110(){
	ll n;
	cin >> n;
	int copy = n;
	int c = 0;
	while(n>0){
		int d = n%10;
		if(d==4 || d==7) c++;
		n /= 10;
	}
	if(c==4 || c==7) cout << "YES";
	else cout << "NO";
}


void A266(){
	int n;
	string s;
	cin >> n >> s;
	int c = 0;
	for(int i=1;i<n;i++){
		if(s[i]==s[i-1]) c++;
	}
	cout << c << endl;
}

/*

Sieve of eratosethenes(algo to get array of primes)

for (int x = 2; x <= n; x++) {
		if (sieve[x]) continue;
		for (int u = 2*x; u <= n; u += x) {
			sieve[u] = x;
		}
	} 

*/


void A80(){
	int n,m;
	cin >> n >> m;
	int sieve[60] = {};
	for (int x = 2; x <= 50; x++) {
		if (sieve[x]) continue;
		for (int u = 2*x; u <= 50; u += x) {
			sieve[u] = x;
		}
	}
	bool f = false;
	for(int i=n+1;i<=50;i++){
		if(sieve[i]==0){
			f = true;
			if(i==m) cout << "YES";
			else cout << "NO";
			break;
		}
	}
	if(!f) cout << "NO";

	// loop(i,51) cout << sieve[i] << " ";
}


void A1715(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int megan,stanley;
		if((n==1)&(m==1)){
			cout << 0 << endl;
			continue;
		}
		if(n>=m){
			megan = 2 + n-1 + m-3;
			stanley = 2 + 1 + m-3;
		}
		if(n<m){
			megan = 2 + m-1 + n-3;
			stanley = 2 + 1 + n-3;
		}
		cout << megan + stanley << endl;
	}
}

void B1715(){
	int t;
	cin >> t;
	while(t--){
		int n;
		long long k,b,s;
		cin >> n >> k >> b >> s;
		long long arr[n] = {};
		if((s/k)==b){
			// cout << n << k << b << s << endl;
			arr[n-1] = s;
			loop(i,n) cout << arr[i] << " ";
			cout << endl;
		}
		if((s/k>b)&((s%k)<=((n-1)*(k-1)))){

			arr[n-1] = k*b;
			long long temp = s-k*b;
			int i = 0;
			while(temp>=k-1){
				arr[i] = k-1;
				temp -= k-1;
				i++;
			}
			arr[i] = temp;
			loop(i,n) cout << arr[i] << " ";
			cout << endl;
		}
		else{
			cout << -1 << endl;
		}

	}
}


void A1692(){
	int t;
	cin >> t;
	while(t--){
		int a,b,c,d;
		cin >> a >> b >> c >> d;
		int ct = 0;
		if(a<b) ct++;
		if(a<c) ct++;
		if(a<d) ct++;
		cout << ct << endl;
	}
}


void A61(){
	string a,b;
	cin >> a >> b;
	loop(i,a.size()){
		int a1 = a[i]-'0';
		int b1 = b[i]-'0';
		cout << (a1^b1);
	}
}


void A233(){
	int n;
	cin >> n;
	if(n%2==0){
		for(int i=1;i<=n;i++){
			if(i%2==0) cout << i-1 << " ";
			else cout << i+1 << " ";
		}
	}
	else cout << -1;
}

void A144(){
	int n;
	cin >> n;
	pair<int,int> min={111,0};
	pair<int,int> max={0,0};
	loop(i,n){
		int a;
		cin >> a;
		if(min.first >= a) min = {a,i+1};
		if(max.first < a) max = {a,i+1};
	}
	if((max.second==n) || (min.second<max.second)) cout << n-min.second + max.second-2;
	else cout << n-min.second + max.second-1;
}


void B200(){
	int n;
	cin >> n;
	int copy = n;
	double sum = 0.0;
	while(copy--){
		int a;
		cin >> a;
		sum += (double)a/100;
	}
	cout << (sum/n)*100;
}



void A148(){
	int k,l,m,n,d;
	cin >> k >> l >> m >> n >> d;
	if(k==1) cout << d;
	else if(d<k && d<l && d<m && d<n) cout << 0;
	else{

		int count = 0;
		for(int i=1;i<=d;i++){
			if(i%k==0){
				count++;
				continue;
			}
			if(i%l==0){
				count++;
				continue;
			}
			if(i%m==0){
				count++;
				continue;
			}
			if(i%n==0){
				count++;
				continue;
			}
		}
		cout << count;
	}
}


void A248(){
	int n;
	cin >> n;
	int copy = n;
	int l_open = 0;
	int r_open = 0;
	while(copy--){
		int l,r;
		cin >> l >> r;
		if(l) l_open++;
		if(r) r_open++;
	}
	cout << min(l_open, n-l_open) + min(r_open, n-r_open);
}


void A155(){
	int n;
	cin >> n;
	int x;
	cin >> x;
	int ct = 0;
	int min = x; 
	int max = x;
	for(int i=1;i<n;i++){
		int m;
		cin >> m;
		if(m<min){
			min = m;
			ct++;
		}
		if(m>max){
			max = m;
			ct++;
		}
	}
	cout << ct;
}



void A116(){
	int n;
	cin >> n;
	int cap = 0;
	int p = 0;
	while(n--){
		int a,b;
		cin >> a >> b;
		p += b-a;
		cap = max(cap, p);
	}
	cout << cap;
}


void A339(){
	string s;
	cin >> s;
	vector<char> v;
	loop(i,s.size()){
		if(s[i]!='+') v.push_back(s[i]);
	}
	sort(v.begin(),v.end());
	cout << v[0];
	for(int i=1;i<v.size();i++) cout << "+" << v[i];
}


void A228(){
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	int ct = 0;
	if(a==b || a==c || a==d) ct++;
	if(b==c || b==d) ct++;
	if(c==d) ct++;
	cout << ct;
}


void A71(){
	int n;
	cin >> n;
	while(n--){
		string s;
		cin >> s;
		if(s.size()>10) cout << s[0] << to_string(s.size()-2) << s[s.size()-1] << endl;
		else cout << s << endl;
	}
}


void A236(){
	string s;
	cin >> s;
	unordered_set<char> v;
	loop(i,s.size()) v.insert(s[i]);
	if(v.size()%2==0) cout << "CHAT WITH HER!";
	else cout << "IGNORE HIM!";
}



void A141(){
	string guest,host,pile;
	cin >> guest >> host >> pile;
	string s = guest+host;
	sort(s.begin(),s.end());
	sort(pile.begin(),pile.end());
	if(s==pile) cout << "YES";
	else cout << "NO";
}


void A151(){
	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	int drinks = k*l;
	int limes = c*d;
	cout << min(min(drinks/nl,limes),p/np)/n;
}



void A133(){
	string s;
	cin >> s;
	if(s.find('H') != string::npos || s.find('Q') != string::npos || s.find('9') != string::npos) cout << "YES";
	else cout << "NO";
}


void A112(){
	string a,b;
	cin >> a >> b;
	loop(i,a.size()){
		a[i] = (char)tolower(a[i]);
		b[i] = (char)tolower(b[i]);
	}
	if(a>b) cout << 1;
	if(a==b) cout << 0;
	if(a<b) cout << -1;
}

void A282(){
	int n;
	cin >> n;
	int x = 0;
	while(n--){
		string s;
		cin >> s;
		if(s.find("++") != string::npos) x += 1;
		if(s.find("--") != string::npos) x -= 1; 
	}
	cout << x;
}

const int N = 1e5;
int pos[N+10];


void B227(){
	int n;
	cin >> n;
	loop(i,n){
		int x;
		cin >> x;
		pos[x] = i+1;
	} 
	int m;
	cin >> m;
	long long vasya = 0, petya = 0;
	loop(i,m){
		int x;
		cin >> x;
		vasya += pos[x];
		petya += n-pos[x]+1;
	}
	cout << vasya << " " << petya;

}


void A272(){
	int n;
	cin >> n;
	int sum = 0;
	loop(i,n){
		int x;
		cin >> x;
		sum += x;
	}
	int ct = 0;
	for(int i=sum+1;i<=sum+5;i++){
		if(i%(n+1)==1) ct++;
	}
	cout << 5-ct;
}


void A450(){
	int n,m;
	cin >> n >> m;
	int max = 0,max_id = 0,lm = 0;
	vector<pair<int,int>> v;
	loop(i,n){
		int x;
		cin >> x;
		if(x<=m){
			lm++;
			if(max<=x){
				max = x;
				max_id = i+1;
			}
		}
		if(x>m) v.push_back({x,i+1});
	}
	if(v.size()) max = 0,max_id = 0;
	for(int a=0;a<v.size();a++){
		if((v[a].first)%m==0){ 
			if(((v[a].first)/m)-1>=max){
				max = ((v[a].first)/m)-1;
				max_id = v[a].second;
			}
		}
		else {
			if(((v[a].first)/m)>=max){
				max = (v[a].first)/m;
				max_id = v[a].second;
			}
		}
	}

	if(lm==n) cout << n;
	else cout << max_id;
}



void A165(){
	int n;
	cin >> n;
	vector<pair<int,int>> points;
	while(n--){
		int x,y;
		cin >> x >> y;
		points.push_back({x,y});
	}
	int ct = 0;
	for(pair<int,int> &v:points){
		int x = v.first;
		int y = v.second;
		int neigup = 0;
		int neiglw = 0;
		int neigle = 0;
		int neigri = 0;
		for(pair<int,int> &v:points){
			if(x==v.first){
				if(y==v.second) continue;
				if(y>v.second) neigup++;
				if(y<v.second) neiglw++;
			}  
			if(y==v.second){
				if(x==v.first) continue; 
				if(x>v.first) neigri++;
				if(x<v.first) neigle++;
			}
		}
		if(neigup>0 && neiglw>0 && neigle>0 && neigri>0) ct++;
		// cout << v.first << " " << v.second << endl;
	}
	cout << ct;
}


void A139(){
	int n;
	cin >> n;
	int a[7];
	loop(i,7){
		int x;
		cin >> x;
		a[i] = x;
	}
	int sum = 0;
	int i = 0;
	while(sum<n){
		sum += a[i];
		if(i==6){
			if(sum<n) i = 0;
			else i=7;
		}
		else i++;
	}
	cout << i;
}



void A224(){
	int i,j,k;
	cin >> i >> j >> k;
	int c = sqrt((j*k)/i);
	int a = (i*c)/j;
	int b = i/a;
	cout << 4*a + 4*b + 4*c;
}


void A34(){
	int n;
	cin >> n;
	int a[n+10];
	a[0] = 1000000;
	int min = 1000000;
	int min_i = 0;
	loop1S(i,n){
		cin >> a[i];
		if(abs(a[i]-a[i-1])<min){
			min = abs(a[i]-a[i-1]);
			min_i = i-1;
		}
	}
	if(abs(a[n]-a[1])<min){
		cout << n << " " << 1;
	}
	else cout << min_i << " " << min_i+1;

}



void A318(){
	ll n,k;
	cin >> n >> k;
	if(n%2==0){
		if(k<=n/2) cout << 2*k-1;
		else cout << 2*(k-(n/2));
	}
	else{
		if(k<=((n/2)+1)) cout << 2*k-1;
		else cout << 2*(k-((n/2)+1));
	}
}


void A205(){
	int n;
	cin >> n;
	int copy = n;
	vector<int> c;
	ll min = 1e10;
	int min_i;
	while(n--){
		ll x;
		cin >> x;
		c.push_back(x);
		if(x<=min){
			min = x;
		}
	}
	int ct = 0;
	loop(i,copy){
		if(c[i]==min) {
			ct++;
			min_i = i+1;
		}
	}
	if(ct>1) cout << "Still Rozdil";
	else cout << min_i;
}



void A199(){
	int n;
	cin >> n;
	int fn = (pow((1+sqrt(5)),n)-pow((1-sqrt(5)),n))/(pow(2,n)*sqrt(5));
	cout << fn;
}


void A241(){
	int n,m;
	cin >> n >> m;
	int a = 0;
	int b = 0;
	int c = 0;
	while(a<=1000){
		if(a*a+sqrt(m-a)==n){
			b = sqrt(m-a);
			c++;
		}
		a++;
	}
	cout << c;
}


void A149(){
	int k;
	cin >> k;
	int arr[12];
	int s = 0;
	loop(i,12){
		cin >> arr[i];
		s += arr[i];
	}
	if(s<k) cout << -1;
	else{
		sort(arr, arr+12);
		int sum = 0;
		int i = 11;
		// loop(i,12) cout << arr[i];
		while(sum<k){
			sum += arr[i];
			i--;
		}
		cout << 12-i-1;
	}
}


void A208(){
	string s;
	cin >> s;
	string del = "WUB";
	int start,end = -1*del.size();
	string news = "";
	do{
		start = end + del.size();
		end = s.find(del,start);
		news += s.substr(start, end-start) + " ";
	}while(end!=-1);
	loop(i,news.size()){
		if(news[i]!=32){
			news = news.substr(i,news.size());
			break;
		}
	}
	cout << news;
}



void A219(){
	int k;
	cin >> k;
	string s;
	cin >> s;
	unordered_map<char,int> d;
	for(char i:s){
		d[i]++;
	}
	bool nos = false;
	for(auto& a:d){
		if(a.second%k!=0){
			nos = true;
			break;
		}
	}
	if(nos) cout << -1;
	else{
		string word = "";
		for(auto& a:d){
			for(int i=1;i<=a.second/k;i++) word += a.first;
		}
		loop(i,k) cout << word;
	}
}



void A124(){
	int n,a,b;
	cin >> n >> a >> b;
	if(n-b<=a) cout << n-a;
	else cout << b+1;
}




void A96(){
	string s;
	cin >> s;
	if(s.size()<=7) cout << "NO";
	else{
		bool f = false;
		loop(i,s.size()){
			char res = s[i];
			int count = 0;
			for(int j=i+1;j<s.size();j++){
				if(res!=s[j]) break;
				count++;
			}
			if(count+1>=7){
				f = true;
				break;
			}
		}
		if(f) cout << "YES";
		else cout << "NO";
	}
}

// div3 A march 2,2023
void A1800(){
	int t;
	cin >> t;
	while(t--){
		int n;
		string s;
		cin >> n >> s;
		unordered_set<char> ch;
		transform(s.begin(), s.end(), s.begin(), [] (char c) {
	        return tolower(c);
	    });
	    s.erase(unique(s.begin(), s.end()), s.end());
		if(s=="meow") cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}




void A118(){
	string s;
	cin >> s;
	transform(s.begin(), s.end(), s.begin(), [] (char c) {
        return tolower(c);
    });   
    loop(i,s.length()){
    	if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y'){
    		s = s.replace(i, 1, "");
    		i--;
    	}
    }
    string s_new; 
    loop(i,s.length()){
    	s_new += string(1,'.')+s[i];
    } 
    cout << s_new;
}



void A221(){
	int n;
    cin >> n;
    cout << n;
    for (int i = 1; i < n; ++i)
    {
        cout << " " << i;
    }
    cout << endl;
}


void B118(){
	int n;
	cin >> n;
	int n_space = 2*n;
	int k = n;
	for(int i=1;i<=n+1;i++){
		int c = 0;
		for(int j=1;j<=4*n+1-2*k;j++){
			if(j<=n_space || 4*n+2-j<=n_space){
				cout << " ";
			}
			else if(j%2==0) cout << " ";
			else{
				if(c<i) cout << c;
				else cout << 2*i-2-c;
				c++;
			}
		}
		cout << endl;
		n_space-=2;
		k--;
	}
	n_space=2;
	k=1;
	for(int i=n;i>=1;i--){
		int c = 0;
		for(int j=1;j<=4*n+1-2*k;j++){
			if(j<=n_space || 4*n+2-j<=n_space){
				cout << " ";
			}
			else if(j%2==0) cout << " ";
			else{
				if(c<i) cout << c;
				else cout << 2*i-2-c;
				c++;
			}
		}
		cout << endl;
		n_space+=2;
		k++;
	}

}


// div4 contest
void A1807(){
	int t;
	cin >> t;
	while(t--){
		int a,b,c;
		cin >> a >> b >> c;
		if(a+b==c) cout << "+" << endl;
		else cout << "-" << endl;
	}
}


void B1807(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int even = 0;
		int odd = 0;
		loop(i,n){
			int x;
			cin >> x;
			if(x%2==0) even+=x;
			else odd+=x;
		}
		if(even>odd) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}



void C1807(){
	int t;
	cin >> t;
	while(t--){
		int n;
		string s;
		cin >> n >> s;
		unordered_set<int> k;
		loop(i,n) k.insert(s[i]);
		int m = 0;
		for(auto j:k){
			loop(i,n){
				if(s[i]==j){
					s = s.replace(i, 1, to_string(m));
		    		i--;
				}
			}
			m++;
		}
		cout << s << endl;
	}
}



void D1807(){
	int t;
	cin >> t;
	while(t--){
		int n,q;
		cin >> n >> q;
		int a[n+1];
		while(q--){
			loop1S(i,n) cin >> a[i];
			int l,r,k;
			cin >> l >> r >> k;
			for(int i=l;i<=r;i++) a[i] = k;
			int sum = 0;
			loop1S(i,n) sum+=a[i];
			loop1S(i,n) cout << a[i] << " ";
			cout << endl;
			if(sum%2!=0) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
}


void A1806(){
	int t;
	cin >> t;
	while(t--){
		long long a,b,c,d;
		cin >> a >> b >> c >> d;
		if(d<b){
			cout << -1 << endl;
			continue;
		}
		a += d-b;
		long long moves = 0;
		moves += d-b;
		if(a<c) cout << -1 << endl;
		else{
			cout << moves+(a-c) << endl;
		}
	}
}



void A230(){
	int s,n;
	cin >> s >> n;
	bool defeat = false;
	vector<pair<int,int>> battles;
	while(n--){
		int x,y;
		cin >> x >> y;
		battles.push_back({x,y});
		
	}
	sort(battles.begin(), battles.end());
	loop(i,battles.size()){
		int x = battles[i].first;
		int y = battles[i].second;
		if(x<s) s+=y;
		else{
			defeat = true;
			break;
		}
	}
	if(defeat) cout << "NO";
	else cout << "YES";
}


void A337(){
	int n,m;
    cin >> n >>m;
    int arr[m];
    for(int i=0;i<m;i++){
        cin >> arr[i];
    }

    sort(arr,arr+m);
    int leastvalue = arr[n-1]-arr[0];
    for(int i=1;i<= m-n;++i){ ///  59 136 713 818 946 
        
        if(arr[i+n-1]-arr[i] < leastvalue){
            leastvalue = arr[i+n-1]-arr[i];
        }
    }
    cout<<leastvalue<<"\n";
}

void A1811(){
	int t;
	cin >> t;
	while(t--){
		int n,d;
		cin >> n >> d;
		string s;
		cin >> s;
		bool inserted = false;
		string b = s;
		sort(b.begin(), b.end());
		string l = "";
		for(int i=0;i<s.size();i++){
			if(s[i]-'0'<d){
				l+=to_string(d);
				inserted = true;
				d=-1;
			}
			l+=s[i];
		}
		if(!inserted) l+=to_string(d);
		cout << l << endl;
	}
}


void C1811(){
	int t;
	cin >> t;

	while(t--) {
	    int n;
	    cin >> n;

	    vector<int> b(n-1);
	    for(int i=0; i<n-1; i++) {
	        cin >> b[i];
	    }

	    vector<int> a(n, 0);
	    a[0] = b[0];

	    for(int i=1; i<n-1; i++) {
	        if(b[i] < a[i-1]) {
	            a[i] = b[i];
	        } else {
	            a[i] = a[i-1];
	        }
	    }

	    a[n-1] = b[n-2];

	    for(int i=0; i<n; i++) {
	        cout << a[i] << " ";
	    }
	    cout << endl;
	}

}

void A58(){
	string k;
	cin >> k;
	string s;
	for(int i=0;i<k.size();i++){
		if(k[i]=='h'){
			s = k.substr(i, k.size());
			break;
		}
	}
	string t;
	for(int i=0;i<s.size();i++){
		if(s[i]=='e'){
			t = s.substr(i, s.size());
			break;
		}
	}
	string u;
	for(int i=0;i<t.size();i++){
		if(t[i]=='l'){
			u = t.substr(i, t.size());
			break;
		}
	}
	string c = u.substr(u.find('l')+1, u.size());
	string v;
	for(int i=0;i<c.size();i++){
		int l2 = c.find('l');
		if(i==l2){
			v = c.substr(i, c.size());
			break;
		}
	}
	string w;
	for(int i=0;i<v.size();i++){
		if(v[i]=='o'){
			w = v.substr(i, v.size());
			break;
		}
	}
	string newstr = getString(s[0])+getString(t[0])+getString(u[0])+getString(v[0])+getString(w[0]);
	// cout << newstr;
	if(newstr=="hello") cout << "YES";
	// int h = s.find('h');
	// int e = s.find('e');
	// int l = s.find('l');
	// int l2 = s.substr(s.find('l')+1, s.size()).find('l')+s.find('l')+1;
	// int o = s.find('o');
	// if(h!=string::npos && e!=string::npos && l!=string::npos && l2!=string::npos && o!=string::npos){
	// 	if(h<e && e<l && l<l2 && l2<o) cout << "YES";
	// 	else cout << "NO";
	// }
	else cout << "NO";
}

void showpq(priority_queue<int> gq)
{
    priority_queue<int> g = gq;
    while (!g.empty()) {
        cout << ' ' << g.top();
        g.pop();
    }
    cout << '\n';
}

void showgq(
    priority_queue<int, vector<int>, greater<int> > g)
{
    while (!g.empty()) {
        cout << ' ' << g.top();
        g.pop();
    }
    cout << '\n';
}

void B218(){
	int n,m;
	cin >> n >> m;
	long min = 0;
	long max = 0;
	int arr[m];
	loop(i,m){
		cin >> arr[i];
	}
	priority_queue<int> max_heap;
	priority_queue<int,vector<int>,greater<int>> min_heap;
	loop(i,m){
		if(arr[i]!=0){
			max_heap.push(arr[i]);
			min_heap.push(arr[i]);
		}
	}

	int x=1;
	showpq(max_heap);
    while(!max_heap.empty()){
        if(x==n){
        	int p = max_heap.top();
            max+=p;
            max_heap.pop();
            max_heap.push(--p);
            showpq(max_heap);
	        cout << max << endl;
            break;
        }
        x++;
        int p=max_heap.top();
        max_heap.pop();
        max+=p;
        max_heap.push(--p);
        showpq(max_heap);
        cout << max << endl;
    }

    x=1;
    showgq(min_heap);
    while(!min_heap.empty()){
        if(x==n){
        	int p = min_heap.top(); 
	        min+=p;
	        min_heap.pop();
	        min_heap.push(--p);
	        showgq(min_heap);
	        cout << min << endl;
	        break;
        }
        x++;
        int p=min_heap.top();
        min_heap.pop();
        min+=p;
        p--;
        if(p!=0)
	        min_heap.push(p);
	    showgq(min_heap);
	    cout << min << endl;
    }

    cout << max << " " << min;
	
}




void A445(){
	int n,m;
	cin >> n >> m;
	char S[1100];
	for (int i = 0; i < n; i++) {
		cin >> S;
		for (int j = 0; j < m; j++)
			if (S[j] == '.') {
				if ((i + j) & 1)	S[j] = 'W';
				else	S[j] = 'B';
			}
		cout << S << endl;
	}
}

void B459(){
	long long n;
	cin >> n;
	long long arr[n];
	loop(i,n) cin >> arr[i];
	long long min = *min_element(arr, arr+n);
	long long min_ct = 0;
	long long max = *max_element(arr, arr+n);
	long long max_ct = 0;
	loop(i,n){
		if(arr[i]==max) max_ct++;
		if(arr[i]==min) min_ct++;
	}
	cout << max - min << " ";
	if (min == max)
        cout << n * (n - 1) / 2;
    else
        cout << max_ct * min_ct;

}

void B352(){
	int n;
	cin>>n;
	vector<pair<int,int> > a;
	vector<pair<int,int> > all;
	for(int i=0; i<n; i++) {
		int temp;
		cin>>temp;
		a.push_back(make_pair(temp,i));
	}
 
	sort(a.begin(), a.end());
	int lastVal = a[0].first;
	int diff = 0;
	int lastPos = a[0].second;
	int count = 0;
	if(a.size()==1){
		cout<<1<<endl;
		cout<<lastVal<<" "<<0<<endl;
	}
	for(int i=1; i<n; i++){
		//printf("%d %d\n", i, (int) all.size());
		if(a[i].first == lastVal){
			if(diff==0){
				diff = a[i].second - lastPos;
				lastPos = a[i].second;
				count++;
			}
			else{
				if(diff== a[i].second - lastPos){
					lastPos = a[i].second;
					count++;
				}
				else{
					count = -1;
					while(a[i].first == lastVal) {
						//puts("plis");
						i++;
						if(i==n) break;
					}
					i--;
				}
			}
		}
		else{
			//cout<<lastVal<<endl;
			if(count >= 0) all.push_back(make_pair(lastVal, diff));
			lastVal = a[i].first;
			count = 0;
			diff = 0;
			lastPos = a[i].second;
		}
	}
	if(count>=0){
		all.push_back(make_pair(lastVal, diff));
	}
 
	cout<<all.size()<<endl;
	for(int i=0; i<all.size(); i++){
		cout<<all[i].first<<" "<<all[i].second<<endl;
	}
}


void B276(){
	string s;
	cin >> s;
	int len = s.length();
	unordered_map<char,int> d;
	for(char i:s){
		d[i]++;
	}
	int odd = 0;
	int even = 0;
	for(auto& a:d){
		if(a.second%2==0) even++;
		else odd++;
	}
	// for(auto& a:d){
	// 	cout << a.first << " " << a.second << endl;
	// }
	// cout << odd << " " << even << endl;
	// cout << len << endl;
	if(len%2==0 && odd<=1) cout << "First";
	else if(odd==1) cout << "First";
	else if(odd%2!=0) cout << "First";
	else cout << "Second";
}

void B298(){
	int t;
	ll sx;
	ll sy;
	ll ex;
	ll ey;
	cin >> t >> sx >> sy >> ex >> ey;
	string w;
	cin >> w;
	ll tx = sx;
	ll ty = sy;
	int time = 0;
	bool reached = false;
	for(int i=0;i<w.size();i++){
		time++;
		if(w[i]=='N'){
			if(ty<ey) ty++;
		}
		else if(w[i]=='S'){
			if(ty>ey) ty--;
		}
		else if(w[i]=='E'){
			if(tx<ex) tx++;
		}
		else{
			if(tx>ex) tx--;
		}
		if(tx==ex && ty==ey){
			cout << time;
			reached = true;
			break;
		}
	}
	if(!reached) cout << -1;
}



void B431(){
	int g[6][6];
    int n = 5;
    for(int i = 0 ; i < n ; ++i)
        for(int j = 0 ; j < n ; ++j)
            cin >> g[i][j];
    int p[6], pans[6], ans = -1, tmp;
    for(int i = 0 ; i < n ; ++i)
        p[i] = i;
    
    do
    {
        //01234
        tmp = g[p[0]][p[1]] + g[p[1]][p[0]];
        tmp += g[p[2]][p[3]] + g[p[3]][p[2]];
        
        //1234
        tmp += g[p[1]][p[2]] + g[p[2]][p[1]];
        tmp += g[p[3]][p[4]] + g[p[4]][p[3]];
        
        //234
        tmp += g[p[2]][p[3]] + g[p[3]][p[2]];
        
        //34
        tmp += g[p[3]][p[4]] + g[p[4]][p[3]];
        
        if(tmp > ans)
        {
            ans = tmp;
            for(int i = 0 ; i < n ; ++i)
                pans[i] = p[i];
        }
    }
    while(next_permutation(p, p+n));
    
    cout << ans << "\n";
}

template<typename T>
bool allEqual(std::vector<T> const &v) {
    if (v.size() == 0) {
        return false;
    }
 
    return std::all_of(v.begin(), v.end(), [&] (T const &e) {
        return e == v.front();
    });
}

void A222(){
	int n,k;
	cin >> n >> k;
	vector<int> v;
	for(int i=0;i<n;i++){
		int x;
		cin >> x;
		v.push_back(x);
	}
	int rindex;
	int last = v[n-1];
	for(int i=n-2;i>=0;i--){
		if(v[i]!=last){
			rindex = i+1;
			break;
		}
	}
	if(rindex<k) cout << rindex;
	else cout << -1;
}

int MaxRepeatingElement(int* array, int n)
{
  //modify the array 
  for (int i = 0; i< n; i++)
  {
    array[array[i]%n] += n;
  }
  int max_element = INT_MIN,result = 0;
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    if (array[i] > max_element)
    {
      max_element = array[i];
      result = i;
      count++;
    }
  }
  //get the array back to original values
  for (int i = 0; i< n; i++)
  {
    array[i] = array[i]%n; 
  }
  return count;
}

void A342(){
	int n;
	cin >> n;
	int arr[n];
	bool nondivnum = false;
	int n_twos = 0;
	int n_threes = 0;
	int n_fours = 0;
	int n_sixes = 0;
	loop(i,n){
		cin >> arr[i];
		if(arr[i]==2) n_twos++;
		if(arr[i]==3) n_threes++;
		if(arr[i]==4) n_fours++;
		if(arr[i]==6) n_sixes++;
		if(arr[i]==5 || arr[i]==7){
			nondivnum = true;
			break;
		}
	}
	if(MaxRepeatingElement(arr, n)>n/3) cout << -1;
	else if(nondivnum) cout << -1;
	else if(n_fours+n_sixes==n/3 && n_twos+n_threes==n/3 && n_threes<=n_sixes){
		for(int i=1;i<=n_fours;i++){
			cout << 1 << " " << 2 << " " << 4 << endl;
		}
		for(int i=1;i<=n_sixes;i++){
			if(i<=n_twos-n_fours) cout << 1 << " " << 2 << " " << 6 << endl;
			if(i<=n_threes) cout << 1 << " " << 3 << " " << 6 << endl;
		}
	}
	else cout << -1;

}

string removeWhitespace(string s){
	string m;
	for(int k=0;k<s.size();k++){
		if(s[k]!=' ') m+=s[k];
	}
	return m;
}

void B43(){
	string s1,s2;
	getline(cin, s1);
	getline(cin, s2);
	// cout << removeWhitespace(s2) << endl;
	string n = "";
	for(int i=0;i<s2.size();i++){
		for(int j=0;j<s1.size();j++){
			if(s2[i]==s1[j]){
				n+=s1[j];
				s1.erase(s1.begin()+j);
				break;
			}
		}
	}
	// cout << removeWhitespace(n) << endl;
	if(removeWhitespace(n)==removeWhitespace(s2)) cout << "YES" << endl;
	else cout << "NO";
}

void A433(){
	int n, a=0, b=0;
	cin >> n;
    for (int i = 1, x; i <= n; ++i) {
        cin >> x;
        if (x == 100) ++a;
        else ++b;
    }
    int sum = 100 * a + 200 * b;
    if (sum % 200 != 0) cout << "NO" << endl;
    else {
        int half = sum / 2;
        bool ans = false;
        for (int i = 0; i <= b; ++i)
            if (200 * i <= half && half - 200 * i <= a * 100) ans = true;
        if (ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

void A186(){
	string m,n;
	cin >> m >> n;
	if(m.size()!=n.size()) cout << "NO";
	else{
		int c=0;
		vector<int> vec;
		for(int i=0;i<m.size();i++){
			if(m[i]!=n[i]){
				c++;
				vec.push_back(i);
			}
		}
		if(c!=2) cout << "NO";
		else{
			if(m[vec[0]]==n[vec[1]] && m[vec[1]]==n[vec[0]]) cout << "YES";
			else cout << "NO";
		}
	}
}

void A1850(){
	int t;
	cin >> t;
	while(t--){
		int a,b,c;
		cin >> a >> b >> c;
		if(a+b>=10 || b+c>=10 || a+c>=10) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

}

void B1850(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int max = 0;
		int max_w;
		for(int i=1;i<=n;i++){
			int a,b;
			cin >> a >> b;
			if(a<=10){
				if(max<b){
					max = b;
					max_w = i;
				}
			}
		}
		cout << max_w << endl;
	}
}

void C1850(){
	int t;
	cin >> t;
	int n = 64;
	while(t--){
		string s;
		loop(i,n){
			char x;
			cin >> x;
			if(x!='.') s+=x;
		}
		cout << s << endl;
	}
}

void D1850(){
	int t;
	cin >> t;
	while(t--){
		ll n,k;
		cin >> n >> k;
		ll arr[n];
		loop(i,n) cin >> arr[i];
		sort(arr, arr+n);
		int seq = 0;
		int max_seq = 0;
		loop(i,n-1){
			if(arr[i+1]-arr[i]<=k) seq++;
			else seq = 0;
			if(max_seq<seq) max_seq = seq;
		}
		max_seq+=1;
		cout << n-max_seq << endl;
		// loop(i,n) cout << arr[i] << " ";
		// cout << endl;
	}
}

void A1851(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		long k,H;
		cin >> n >> m >> k >> H;
		long a[n];
		loop(i,n) cin >> a[i];
		int count = 0;
		loop(i,n){
			long h_dif = abs(H-a[i]);
			for(int j=1;j<m;j++){
				if(h_dif==k*(m-j)) count++;
			}
		}
		cout << count << endl;
	}
}

void B1851(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long a[n];
		int n_even = 0, n_odd = 0;
		long min = 1e9;
		long max = 0;
		loop(i,n){
			cin >> a[i];
			if(max<a[i]) max=a[i];
			if(min>a[i]) min=a[i];
			if(a[i]%2==0) n_even++;
			else n_odd++;
		}

		if(max%2==0 && a[n-1]%2!=0) cout << "NO" << endl;
		else if(max%2!=0 && a[n-1]%2==0) cout << "NO" << endl;
		else if(min%2==0 && a[0]%2!=0) cout << "NO" << endl;
		else if(min%2!=0 && a[0]%2==0) cout << "NO" << endl;
		else{
			long b[n];
			loop(i,n){
				b[i] = a[i];
			}
			sort(b,b+n);
			int k = 0;
			bool srt = false;
			for(int i=0;i<n;i++){
				long num = b[k];
				if(num%2==0 && a[i]%2==0) swap(a[i], num);
				else if(num%2!=0 && a[i]%2!=0) swap(a[i], num);
				else {
					srt = true;
					break;
				}
				k++;
			}
			if(srt) cout << "NO" << endl;
			else cout << "YES" << endl;
		}
	}
}

void C1851(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int a[n];
		int b[n+1] = {};
		loop(i,n){
			cin >> a[i];
			b[a[i]]++;
		}
		// loop(i,n+1){
		// 	cout << b[i] << " ";
		// }
		// cout << endl;
		vector<int> v;
		loop(i,n+1){
			if(b[i]>=k){
				v.push_back(i);
			}
		}
		bool fir = false;
		bool sec = false;
		for(int i=0;i<v.size();i++){
			if(a[0]==v[i]) fir=true; 
			if(a[n-1]==v[i]) sec=true; 
		}
		// if(fir && sec) cout << "YES" << endl;
		// cout << fir << sec << endl;
		if(fir && sec){
			int count=0;
			int pos;
			for(int i=0;i<n;i++){
				if(a[0]==a[i]) count++;
				if(count==k){
					pos = i;
					break;
				}
			}
			int count_last = 0;
			for(int i=pos;i<n;i++){
				if(a[i]==a[n-1]) count_last++;
			}
			// cout << count << " " << count_last << endl;
			if(v.size()==1) cout << "YES" << endl;
			else if(count_last>=k) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
		else cout << "NO" << endl;
	}
}


void SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
  
    for (int p = 2; p * p <= n; p++) {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true) {
            // Update all multiples of p greater than or
            // equal to the square of it numbers which are
            // multiple of p and are less than p^2 are
            // already been marked.
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
  
    // Print all prime numbers
    for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}


// Function to generate first n primes
void generatePrime(int n)
{
    int X = 0, i = 2;
    bool flag;
    while(X < n){
        flag = true;
        for(int j = 2; j <= sqrt(i); j++){
            if (i%j == 0){
                flag = false;
                break;
            }
        }
        if(flag){
            cout << i << " ";
            X++;
        }
        i++;
    }
    cout << endl;
}




void B327(){
	int n;
	cin >> n;
	generatePrime(n);
}



void A1849(){
	int t;
	cin >> t;
	while(t--){
		int b,c,h;
		cin >> b >> c >> h;
		if(b>c+h) cout << 2*(c+h)+1 << endl;
		else cout << 2*b-1 << endl;
	}
}

void PrefixSum(ll *a, int n){
	vector<ll> pref(n+1);
	loop1S(i,n){
		pref[i] = pref[i-1] + a[i-1];
	}
	loop1S(i,n) cout << pref[i] << " ";
	cout << endl;
}


// Function to find the permutations
void findPermutations(int n)
{	
	int arr[n];
	loop(i,n){
		arr[i] = i+1;
	}
	// Sort the given array
	sort(arr, arr + n);

	do {
		for (int i = 0; i < n; i++) {
		    cout << arr[i] << " ";
		}
		cout << endl;
	} while (next_permutation(arr, arr + n));
}

int checkDuplicates(ll *numRay, int arr_size)
{
    // ll max = 0;
    // loop(i,arr_size){
    // 	if(numRay[i]>max) max=numRay[i];
    // }
    ll n = 1e5;
    ll b[n] = {};
    // loop(i,arr_size) b[numRay[i]]++;
    int count = 0;
    // loop(i,max+1){
    // 	if(b[i]>1) count++;
    // }
    return count;
}

void D1851(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		ll pref[n-1];
		loop(i,n-1) cin >> pref[i];
		// PrefixSum(a,n-1);
		// findPermutations(n);
		ll a[n-1];
		a[0] = pref[0];
		for(int i=1;i<n-1;i++){
			a[i] = pref[i] - pref[i-1];
		}
		loop(i,n-1) cout << a[i] << " ";
		cout << endl;
		int count_grt = 0;
		bool inv = false;
		loop(i,n-1){
			if(a[i]>n) count_grt++;
			if(count_grt>1){
				inv = true;
				break;
			}
		}
		cout << checkDuplicates(a,n-1) << endl;
		if(inv) cout << "NO" << endl;

		// else if(checkDuplicates(a,n-1)>=1) cout << "NO" << endl;
		else{
			cout << "YES" << endl;
		}
	}
}

void B242(){
	int n;
	cin >> n;
	int min = 1e9;
	int max = 0;
	vector<pair<int,int>> v;
	while(n--){
		int l,r;
		cin >> l >> r;
		v.push_back(make_pair(l,r));
		if(l<min) min=l;
		if(r>max) max=r;
	}
	bool found = false;
	int index = 1;
	for(auto &i:v){
		if(i.first==min && i.second==max){
			found = true;
			break;
		}
		index++;
	}
	if(found) cout << index << endl;
	else cout << -1 << endl;
}


void A258(){
	string s;
	cin >> s;
	int c=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='0') c++;
	}
	if(c==0){
		s.erase(s.begin());
		cout << s << endl;
	}
	else{
		string m = "";
		int ind = s.find('0');
		for(int i=0;i<s.size();i++){
			if(ind != i) m+=s[i];
		}
		cout << m << endl;
	}
}

void A296(){
	int n; 
	cin >> n;
 
	int x, mx = -1;
	map<int, int> mp;
 
	loop(i,n)
	{
		cin >> x;
		mp[x]++;
		mx = max(mx, mp[x]);
	}
 
	if (mx + mx - 1 <= n) cout << "YES\n";
	else cout << "NO\n";
}


void B363(){
	int n,k;
	cin >> n >> k;
	vector<int> av;
	loop(i,n) {
		int x;
		cin >> x;
		av.push_back(x);
	}
	vector<ll> pref(n+1);
	loop1S(i,n){
		pref[i] = pref[i-1] + av[i-1];
	}
	// loop1S(i,n) cout << pref[i] << " ";
	// cout << endl;
	vector<pair<int,int>> p;
	loop(i,n){
		if(i+k<=n) {
			// cout << i+1 << " " << i+k << endl;
			p.push_back(make_pair(i,i+k-1));
		}
	}
	ll mn = 1e9;
	// int l = 1;
	// int index;
	for(auto i:p){
		// cout << i.first << " " << i.second << endl;
		ll sum = pref[i.second+1]-pref[i.first];
		mn = min(sum,mn); 
		// cout << sum << endl;
		// l++;
	}
	int l=1;
	for(auto i:p){
		int sum = pref[i.second+1]-pref[i.first];
		if(mn == sum){
			break;
		}
		l++;
	}
	if(n==k) cout << 1 << endl;
	else cout << l << endl;

}



void A350(){
	int n,m;
	cin >> n >> m;
	int mx=0;
	vector<int> correct, wrong;
	loop(i,n){
		int x;
		cin >> x;
		mx = max(mx,x);
		correct.push_back(x);
	}
	int limit = 101;
	loop(i,m){
		int x;
		cin >> x;
		limit = min(limit,x);
		wrong.push_back(x);
	}
	if(mx<=limit){
		int tl = 0;
		bool found = false;
		for(int i=mx;i<limit;i++){
			for(int j=0;j<n;j++){
				if(2*correct[j]<=i){
					tl = i;
					found = true;
					break;
				}
			}
			if(found) break;
		}
		if(found) cout << tl << endl;
		else cout << -1 << endl;
	}
	else cout << -1 << endl;
}

bool all_equal_to_zero(const vector<ll>& vec) {
	int count = 0;
	for (const auto& element : vec) {
		if (element <= 0) {
			count++;
		}
	}
	if(count==vec.size()) return true;
	else return false;
}

void printVector(const vector<ll>& vec){
	loop(i,vec.size()) cout << vec[i] << " ";
	cout << endl;
}

ll findMax(const vector<ll>& vec){
	// int mx_elem=0;
	// loop(i,vec.size()){
	// 	mx_elem = max(mx_elem,vec[i]);
	// }
	auto mx_elem = max_element(vec.begin(), vec.end());
	return *mx_elem;
}

ll find_max_element_index(const vector<ll>& vec) {
	auto max_element_iter = max_element(vec.begin(), vec.end());
	return distance(vec.begin(), max_element_iter);
}

void B1849(){
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		vector<int> a(n);
		for (auto &x : a) {
			cin >> x;
			x %= k;
			if (!x) x = k;
		}
		vector<int> ord(n);
		iota(ord.begin(), ord.end(), 0);
		stable_sort(ord.begin(), ord.end(), [&](int i, int j) {
		  return a[i] > a[j];
		});
		for (auto &x : ord) cout << x + 1 << ' ';
		cout << endl;
	}
}

void perform_operation(int *arr, int i, int j){
	if (i!=j)
	{
		arr[i]++;
		arr[j]--;
	}		
		
}

void printArray(int *arr, int size){
	loop(i,size) cout << arr[i] << " ";
	cout << endl;
}

int checkEqual(int *arr, int size){
	unordered_map<int, int> countMap;
    int maxCount = 0;
    int maxElement = 0;

    for (int i = 0; i < size; i++) {
        int num = arr[i];
        countMap[num]++;

        if (countMap[num] > maxCount) {
            maxCount = countMap[num];
            maxElement = num;
        }
    }
    return maxCount;
}



int findPivot(const vector<int>& arr){
    int start = 0;
    int end = arr.size() - 1;
    while(start <= end)
    {
        int mid = start + (end - start)/2;
        if(mid < end && arr[mid] > arr[mid + 1])
            return mid;
        if(mid > start && arr[mid] < arr[mid - 1])
            return mid - 1;
        if(arr[mid] == arr[start] && arr[mid] == arr[end])
        {
            if(start == mid && mid == end)
                return mid;
            if(arr[start] > arr[start + 1])
                return start + 1;
            start++;
            if(arr[end] < arr[end - 1])
                return end + 1;
            end--;
        }else if(arr[start] < arr[mid] || (arr[start] == arr[mid] && arr[mid] > arr[end]))
            start = mid + 1;
        else    
            end = mid - 1;
        
    }
    return -1;
}

bool binarySearch(const vector<int>& arr, int target){
	int left = 0;
	int right = arr.size()-1;
	while(left<right){
		int mid = (left+right)/2;
		if(target<arr[mid]) right = mid-1;
		else if(target>arr[mid]) left = mid+1;
		else return true;
	}
	return false;
}

int findPivotv2(const vector<int>& array, int left, int right){
   if (right < left)  
       return -1;
    
   if (right == left) 
       return left;
  
   int middle = (left + right)/2;
    
 
   if (middle < right && array[middle] >= array[middle + 1])
       return middle;
 
   if (middle > left && array[middle] <= array[middle - 1])
       return middle-1;
     
   if (array[left] >= array[middle]){
       return findPivotv2(array, left, middle-1);
   } else {
       return findPivotv2(array, middle+1, right);
   }
}

void solution(){
	vector<int> v{1,1,1,1,1,1,2,1,1,1};
	int target = 0;
	cout << findPivotv2(v, 0, v.size()-1) << endl;
	int pivot = findPivotv2(v, 0, v.size()-1);
	vector<int> l,r;
	loop(i,pivot+1) l.push_back(v[i]);
	for(int i=pivot+1;i<v.size();i++) r.push_back(v[i]);
	cout << binarySearch(l,6);
}



void B246(){
	int n;
	cin >> n;
	int a[n];
	loop(i,n) cin >> a[i];
	int sum = 0;
	loop(i,n) sum+=a[i];
	if(sum%n==0) cout << n;
	else cout << n-1;
	// sort(a,a+n);
	// int f=0,l=n-1;
	// int s = n;
	// int mx = 0;
	// printArray(a,n);	
	// while(f<l){
	// 	perform_operation(a,f,l);
	// 	if(a[f]<a[l]) f++;
	// 	else {
	// 		f++;
	// 		l--;
	// 	}
	// 	cout << f << " " << l << endl;
	// 	mx = max(mx, checkEqual(a,n));
	// 	printArray(a,n);
	// }
	// // printArray(a,n);
	// cout << mx;
}

void A239(){
	int y, k, n;
    cin >> y >> k >> n;
    int x = k - y % k;
    int top = n - y;
    if (x <= top)
    {
        cout << x << " ";
        x += k;
        while (x <= top)
        {
            cout << x << " ";
            x += k;
        }
        cout << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}


void A1857(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		loop(i,n) cin >> a[i];
		int even = 0,odd = 0;
		loop(i,n){
			if(a[i]%2==0) even++;
			else odd++;
		}
		// cout << even << " " << odd << endl;
		if(odd%2!=0) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
}

void printMap(unordered_map<ll,int> &ma){
	for(auto i:ma){
		cout << i.first << " " << i.second << endl;
	}
}

void B1857(){
	int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        s='0'+s;
        int p=s.size();
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]>='5')s[i-1]++,p=i;
        }
        for(int i=(s[0]=='0');i<s.size();i++)
        {
            cout<<(i>=p?'0':s[i]);
        }
        cout<<"\n";
    }
}


void C1857(){
	int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int m=n*(n-1)/2,b[m];
        for(int i=0;i<m;i++)cin>>b[i];
        sort(b,b+m);
        for(int i=0;i<m;i+=--n)cout<<b[i]<<' ';
        cout<<"1000000000\n";
    }
}

void B160(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	int lesser = 0;
	int greater = 0;
	string f = "",l = "";
	loop(i,n) f+=s[i];
	for(int i=n;i<2*n;i++) l+=s[i];
	sort(f.begin(),f.end());
	sort(l.begin(),l.end());
	// cout << f+l;
	s = f+l;
	for(int i=0;i<n;i++){
		int f_half = s[i]-'0';
		int s_half = s[i+n]-'0';
		if(f_half<s_half) lesser++;
		if(f_half>s_half) greater++;
	}
	if(lesser==n || greater==n) cout << "YES";
	else cout << "NO";
}

void A253(){
	size_t n, m;

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> n >> m;

    if (n >= m)
    {
        string s(n+m, 'B');
        for (size_t i = 1; i < m * 2; i += 2)
        {
            s[i] = 'G';
        }
        cout << s << endl;
    }
    else
    {
        string s(m+n, 'G');
        for (size_t i = 1; i < n * 2; i += 2)
        {
            s[i] = 'B';
        }
        cout << s << endl;
    }
}



void B236(){
	int a,b,c;
	cin >> a >> b >> c;
	int size = a*b*c+1;
	int divisor_arr[size] = {};
	for(int i=1;i<size;i++){// O(a*b*c*log(a*b*c))
		for(int j=0;j<size;j+=i){
			divisor_arr[j]++;
		}
	}
	ll sum = 0, mod = 1073741824;
	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			for(int k=1;k<=c;k++){
				int prod = i*j*k;
				sum += divisor_arr[prod];
				sum = sum % mod;
			}
		}
	}
	cout << sum;
}

// unordered_set<pair<int,int>> sp;

void A304(){
	int t, counter = 0;
	cin >> t;

	double tmp;

	for (int i = 1; i < t; i++) {
		for (int j = i; (i*i) + (j*j) <= (t*t); j++) {
			tmp = i*i + j*j;

			if (int(sqrt(tmp)) * int(sqrt(tmp)) == tmp)
				counter++;
		}
	}

	cout << counter << endl;
}



void A254(){
	// freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
	// int P;
	// cin >> P;
	// int a[2*P+1];
	// for(int i=1;i<=2*P;i++){
	// 	cin >> a[i];
	// }
	// bool nfound = false;
	// for(int i=1;i<=5000;i++){
	// 	vector<int> v;
	// 	for(int j=1;j<=2*P;j++){
	// 		if(a[j]==i) v.push_back(j);
	// 	}
	// 	if(v.size()%2!=0){
	// 		nfound = true;
	// 		break;
	// 	}
	// }
	// if(nfound) cout << -1;
	// else{
	// 	for(int i=1;i<=5000;i++){
	// 		vector<int> v;
	// 		for(int j=1;j<=2*P;j++){
	// 			if(a[j]==i) v.push_back(j);
	// 		}
	// 		int first = 0,second = 1;
	// 		while(second<v.size()){
	// 			cout << v[first] << " " << v[second] << "\n";
	// 			first+=2;
	// 			second+=2;
	// 		}
	// 	}
	// }
	// freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
	int n,i,k,p,l;

    while (scanf("%d",&n) != EOF)
    {
        map <int,vector<int>> mp;
        map <int,vector<int>> :: iterator it;

        for (i=1; i<=2*n; i++)
        {
            scanf("%d",&k);
            mp[k].push_back(i);
        }

        p = 1;

        for (it=mp.begin(); it!=mp.end(); it++)
        {
            if ((it->second).size() & 1)
            {
                p = 0;
                printf("-1\n");
                break;
            }
        }

        if (p)
        {
            for (it=mp.begin(); it!=mp.end(); it++)
            {
                l = (it->second).size();

                for (i=0; i<l; i+=2)
                    printf("%d %d\n",(it->second)[i],(it->second)[i+1]);
            }
        }

        mp.clear();
    }
	
}

void A353(){
	int n;
	cin >> n;
	int count=0;
	// vector<pair<int,int>> vp;
	int sumx =0,sumy=0;
	int countx=0,county=0;
	for(int i=1;i<=n;i++){
		int x,y;
		cin >> x >> y;
		sumx+=x;sumy+=y;
		if((x+y)%2!=0) count++;
		if(x%2!=0) countx++;
		if(y%2!=0) county++;
	}
	if(count==0) {
		if(sumx%2==0) cout << 0;
		else cout << -1;
	}
	else if(count%2==0) {
		if(countx%2==0) cout << 0;
		else cout << 1;
	}
	else cout << -1;
}


void A349(){
	int n;
	cin >> n;
	int a[n];
	int twentyfive=0,fifty=0,hundred=0;
	bool np = false;
	loop(i,n) {
		cin >> a[i];
		if(a[i]==25) twentyfive++;
		if(a[i]==50){
			fifty++;
			if(twentyfive<1){
				np = true;
				break;
			}
			else twentyfive--;
		}
		if(a[i]==100){
			hundred++;
			if(twentyfive>=1 && fifty>=1){
				twentyfive--;fifty--;
			}
			else if(twentyfive>=3) twentyfive-=3;
			else{
				np = true;
				break;
			}
		}
		// cout << twentyfive << " " << fifty << " " << hundred << endl;
	}
	if(np) cout << "NO\n";
	else cout << "YES\n";
}

bool cmp(pair<int,int> a, pair<int,int> b){
	if(a.first!=b.first){
		if(a.first>b.first) return true;
		return false;
	}
	else{
		if(a.second<b.second) return true;
		return false;
	}
}


void A166(){
	int n,k;
	cin >> n >> k;
	vector<pair<int,int>> vp;
	loop(i,n){
		int x,y;
		cin >> x >> y;
		vp.push_back(make_pair(x,y));
	}
	sort(vp.begin(), vp.end(), cmp);
	int foundf = vp[k-1].first;
	int founds = vp[k-1].second;
	int count=0;
	loop(i,n){
		if(vp[i].first==foundf && vp[i].second==founds) count++;
		// cout << vp[i].first << " " << vp[i].second << endl;
	}
	cout << count;
}


void A287(){
	vector<string> vs(4);
    for (size_t i = 0; i < 4; ++i)
    {
        cin >> vs[i];
    }

    bool pass = false;
    for (size_t top = 0; top <= 2 && !pass; ++top)
    {
        for (size_t left = 0; left <= 2; ++left)
        {
            int dot = 0;
            for (size_t r = 0; r < 2; ++r)
            {
                for (size_t c = 0; c < 2; ++c)
                {
                    if (vs[top+r][left+c] == '.')
                    {
                        dot += 1;
                    }
                }
            }
            if (dot != 2)
            {
                pass = true;
                break;
            }
        }
    }
    cout << (pass ? "YES" : "NO") << endl;
}


// Div 3. (Round 833)

void A1846(){
	int t;
	cin >> t;
	while(t--){
		int count=0;
		int n;
		cin >> n;
		while(n--){
			int x,y;
			cin >> x >> y;
			if(x-y>0) count++;
		}
		cout << count << endl;
	}
}

void B1846(){
	char mat[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin >> mat[i][j];
		}
	}
	set<char> s;
	bool found=false;
	for(int i=0;i<3;i++){
		// check rows
		for(int j=0;j<3;j++){
			s.insert(mat[i][j]);
		}
		if(s.size()==1 && *(s.begin())!='.'){
			cout << *(s.begin()) << endl;
			found = true;
			// break;
			return;
		}
		s.clear();

		// check columns
		for(int j=0;j<3;j++){
			s.insert(mat[j][i]);
		}
		if(s.size()==1 && *(s.begin())!='.'){
			cout << *(s.begin()) << endl;
			found = true;
			// break;
			return;
		}
		s.clear();
	}
	// s.clear();

	// check diagonals
	for(int i=0;i<3;i++){
		s.insert(mat[i][i]);
	}
	if(s.size()==1 && *(s.begin())!='.'){
		cout << *(s.begin()) << endl;
		found = true;
		return;
	}

	s.clear();

	for(int i=0;i<3;i++){
		s.insert(mat[i][2-i]);
	}
	if(s.size()==1 && *(s.begin())!='.'){
		cout << *(s.begin()) << endl;
		found = true;
	}

	else cout << "DRAW" << endl;
	// for(int i=0;i<3;i++){
	// 	for(int j=0;j<3;j++){
	// 		cout << mat[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	// cout << endl;
}

// struct {
// 	int score, time, index;
// } info;

class info{
public: 
	ll score, time, index;
	info(ll a,ll b,ll c){
		score = a;
		time = b;
		index = c;
	}
};

void C1846(){
	int t;
	cin >> t;
	while(t--){
		ll n,m,h;
		cin >> n >> m >> h;
		vector<vector<ll>> v(n, vector<ll> (m));
		vector<info> pts;
		loop(i,n){
			in(v[i]);
			sort(all(v[i]));
			ll score=0,time=0,penalty=0;
			for(int j=0;j<m;j++){
				if(time+v[i][j]<=h){
					time+=v[i][j];
					score++;
					penalty+=time;
				}
			}

			info newitem(score, penalty, i);
			pts.push_back(newitem);
		}

		sort(all(pts), [](info &a, info &b){
			if(a.score==b.score){
				if(a.time==b.time){
					return a.index < b.index;
				}
				return a.time < b.time;
			}
			return a.score > b.score;
		});

		loop(i,pts.size()){
			// cout << pts[i].score << " " << pts[i].time << " " << pts[i].index << endl;
			if(pts[i].index==0) cout << i+1 << endl;
		}
	}
}

void D1846(){
	int t;
	cin >> t;
	while(t--){
		double n,d,h;
		cin >> n >> d >> h;
		vector<double> ve(n);
		in(ve);
		const double area = 0.5*d*h;
		// for(auto& i:ve){
		// 	cout << i << " ";
		// }
		double ans = 0;
		for(int i=0;i<n-1;i++){
			ans+=area;
			if(ve[i+1]-ve[i]<h){
				double hi = ve[i]+h-ve[i+1];
				double di = (d*hi)/h;
				double rem_area = 0.5*di*hi;
				ans-=rem_area;
			}
		}
		cout << fixed << setprecision(10) << ans+area << endl;
	}
}

int expo(int a,int n){ 
	int res=1; 
	while(n){ 
		if(n&1){
			res *= a;
			--n;
		} 
		else {
			a *= a;
			n >>= 1;
		}
	} 
	return res;
}


void E21846(){
	ll n;
    cin >> n;
    for(int i=2;i<64;i++){
        ll l = 2;
        ll h = 1e9 + 10;
 
        while(l < h - 1){
            ll mid = l + (h - l) / 2;
 
            __int128 val = 0;
            __int128 toadd = 1;
 
            for(int j=0;j<i+1;j++){
                val += toadd;
                toadd *= mid;
                if(val > n)
                    break;
            }
 
            if(val <= n)
                l = mid;
            else
                h = mid;
        }
 
        ll val = 0;
 
        for(int j=0;j<i+1;j++) 
        	val += expo(l, j);
 
        if(val == n){
            cout << "YES\n";
            return;
        }
    }
 
    cout << "NO\n";
    
}

// codeforces 898 div 3

void A1862(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		char arr[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin >> arr[i][j];
			}
		}
		string name = "vika";
		int ct = 0;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(arr[j][i]==name[ct]) {
					ct++;
					break;
				}
			}
			// cout << ct << endl;
			if(ct>3) break;
		}
		if(ct<4) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
}

void B1862(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		vector<ll> v;
		loop(i,n){
			ll x;
			cin >> x;
			v.push_back(x);
		}
		vector<ll> new_vec;
		new_vec.push_back(v[0]);
		for(int i=1;i<n;i++){
			if(v[i-1]<=v[i]) new_vec.push_back(v[i]);
			else{
				new_vec.push_back(v[i]);
				new_vec.push_back(v[i]);
			}
		}
		cout << new_vec.size() << endl;
		loop(i,new_vec.size()) cout << new_vec[i] << " ";
		cout << endl;
	}
}

// TLE on C
// void C1862(){
// 	int t;
// 	cin >> t;
// 	while(t--){
// 		ll n;
// 		cin >> n;
// 		vector<ll> v(n);
// 		in(v);
// 		vector<ll> m(v[0]);
// 		for(int i=0;i<n;i++){
// 			for(int j=0;j<v[i];j++){
// 				m[j]++;
// 			}
// 		}
// 		// for(int i=0;i<m.size();i++){
// 		// 	cout << m[i] << " ";
// 		// }
// 		if(m==v) cout << "YES" << endl;
// 		else cout << "NO" << endl;
// 	}
// }

// const ll P = 1e6;


void C285(){
	ll n;
	cin >> n;
	vector<ll> v(n);
	for(auto& item:v){
		cin >> item;
	}
	vector<ll> perm(n);
	ll k = 1;
	for(int i=0;i<n;i++){
		perm[i] = k;
		k++;
	}
	sort(v.begin(), v.end());
	ll sum = 0;
	for(int i=0;i<n;i++){
		// cout << abs(v[i]-perm[i]) << " ";
		sum += abs(v[i]-perm[i]);
	}
	// cout << endl;
	cout << sum << endl;
}

void B433(){
	ll n;
	cin >> n;
	vector<ll> v(n);
	in(v);
	vector<ll> pref(n+1);
	loop1S(i,n){
		pref[i] = pref[i-1] + v[i-1];
	}
	// for(int i=0;i<=n;i++){
	// 	cout << pref[i] << " ";
	// }
	// cout << endl;
	vector<ll> copy;
	for (int i=0; i<n; i++) 
		copy.push_back(v[i]); 
	sort(copy.begin(), copy.end());
	vector<ll> pref_copy(n+1);
	loop1S(i,n){
		pref_copy[i] = pref_copy[i-1] + copy[i-1];
	}
	// for(int i=0;i<=n;i++){
	// 	cout << pref_copy[i] << " ";
	// }
	// cout << endl;
	ll m;
	cin >> m;
	while(m--){ // O(m*n)
		ll l,r,type;
		cin >> type >> l >> r;
		if(type==1){
			// ll sum=0;
			// for(int i=l-1;i<r;i++) sum+=v[i];
			cout << pref[r]-pref[l-1] << endl;
		}
		else{
			// ll sum=0;
			// for(int i=l-1;i<r;i++) sum+=copy[i];
			cout << pref_copy[r]-pref_copy[l-1] << endl;
		}
	}
}


void D1862(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll high = 2e9;
		ll low = 0;
		while(low < high-1){
			ll mid = (low+high)/2;
			ll val = mid*(mid-1)/2;
			if(val>n) high = mid;
			else low = mid;
		}
		ll curr = low*(low-1)/2;
		// cout << low << " " << high << endl;
		cout << low + (n-curr) << endl;
	}
}


void E1862(){
	int t;
	cin >> t;
	while(t--){
		ll n, m, d;
        cin >> n >> m >> d;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        ll ans = 0;
        set<pair<ll, ll>> s;
        ll sum = 0;
        for (int i = 0; i < n; ++i) {
            ll cur = sum + a[i] - d * (i + 1);
            ans = max(ans, cur);
            if (a[i] > 0) {
                s.insert({a[i], i});
                sum += a[i];
                if (s.size() >= m) {
                    sum -= (s.begin()->first);
                    s.erase(s.begin());
                }
            }
        }
        cout << ans << endl;
	}
}

// bool isPrime(ll n)
// {
//     // Corner case
//     if (n <= 1)
//         return false;
 
//     // Check from 2 to n-1
//     for (ll i = 2; i <= n / 2; i++)
//         if (n % i == 0)
//             return false;
 
//     return true;
// }

bool sieve[1000001];

bool check(lli d){
	double sq = pow((double)d,0.5);
	if(floor(sq) != sq) return false;
	if(sieve[(lli)sq]) return false;
	return true;
}


void B230(){
	ll n;
	cin >> n;
	sieve[1] = true;
	for(int i = 2; i <= 1000; ++i){
		if(sieve[i] == false){
			for(int j = 2; i*j <= 1000000; ++j){
				sieve[i*j] = true;
		}
	  }
	}
	while(n--){
		lli x;
		cin >> x;
		if(x==1) {
			cout << "NO" << endl;
			continue;
		}
		if(check(x)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}


void B368(){
	int n,m;
	cin >> n >> m;
	vector<int> v(n);
	in(v);
	unordered_map<int,int> d;
	for(auto& i:v){
		d[i]++;
	}
	vector<int> dup(n);
	for(int i=0;i<n;i++){
		if(d[v[i]]>1){
			d[v[i]]--;
			dup[i] = 0;
		}
		else dup[i] = 1;
	}
	// loop(i,n){
	// 	cout << dup[i] << " ";
	// }
	// cout << endl;
	dup.push_back(0);
	// vector<int> m;
	for(int i=n-1;i>=0;i--){
		dup[i] += dup[i+1]; 
	}
	// loop(i,n){
	// 	cout << dup[i] << " ";
	// }
	// cout << endl;
	while(m--){
		int li;
		cin >> li;
		cout << dup[li-1] << endl;
	}
}

void A327(){
	int n, a, count1(0), extra0(0), extra0max(-1);
    cin >> n;
    while (n--)
    {
        cin >> a;
        if (a == 1)
        {
            count1 += 1;
            if (extra0 > 0)
            {
                extra0 -= 1;
            }
        }
        else
        {
            extra0 += 1;
            if (extra0 > extra0max)
            {
                extra0max = extra0;
            }
        }
    }
    cout << count1 + extra0max << endl;
}

void A1843(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		loop(i,n) cin >> a[i];
		sort(a,a+n);
		ll sum = 0;
		for(int i=0;i<n/2;i++){
			sum += (a[n-i-1]-a[i]);
		}
		cout << sum << endl;
	}
}



void B1843(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		ll a[n];
		ll sum = 0;
		loop(i,n) {
			cin >> a[i];
			sum += abs(a[i]);
		}
		vector<ll> b;
		loop(i,n) {
			if(a[i]!=0) b.push_back(a[i]);
		}
		vector<int> vi;
		loop(i,b.size()){
			if(b[i]<=0) vi.push_back(i);
		}
		int count = 0;
		// cout << vi[0] << " ";
		for(int i=1;i<vi.size();i++){
			// cout << vi[i] << " ";
			if(vi[i]-vi[i-1]>1){
				count++;
			} 
		}
		// cout << endl;
		if(vi.size()==0) cout << sum << " " << 0 << endl;
		else cout << sum << " " << count+1 << endl;
		// cout << endl;
	}
}



void C1843(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll sum=0;
		while(n!=1){
			sum+=n;
			n = n/2;
		}
		cout << sum+1 << endl;
	}
}

const int M=1e5+10;
vector<int> g[M];
int height[N];

void dfs(int vertex, int par=0){


	for(int child:g[vertex]){
		if(child==par) continue;
		dfs(child, vertex);
		height[vertex] = max(height[vertex], height[child]+1);
	}
}

void D1843(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i=0;i<n-1;i++){
			int x,y;
			cin >> x >> y;
			g[x].push_back(y);
			g[y].push_back(x);
		}
		int q;
		cin >> q;
		int qu[q];
		for(int i=0;i<q;i++){
			int xi,yi;
			cin >> xi >> yi;
			qu[i] = xi;
		// // 	queries[i].push_back(xi);
		// // 	queries[i].push_back(yi);
		} 
		// dfs(1);
		// for(int i=1;i<=n;i++){
		// 	cout << height[i] << endl;
		// }
		// cout << endl;
	}
}

void B1811(){
	int t;
	cin >> t;
	while(t--){
		ll n,x1,y1,x2,y2;
		cin >> n >> x1 >> y1 >> x2 >> y2;
		ll x = min(x1, n-x1+1);
		ll y = min(y1, n-y1+1);
		ll l1 = min(x,y);

		x = min(x2, n-x2+1);
		y = min(y2, n-y2+1);
		ll l2 = min(x,y);

		cout << abs(l1-l2) << endl;
	}
}

void A1872(){
	int t;
	cin >> t;
	while(t--){
		int a,b,c;
		cin >> a >> b >> c;
		double diff = abs(a-b)/2.0;
		int count = 0;
		for(int i=1;i<=diff;i++){
			if(i%c==0) count = i;
		}
		// cout << count << " " << diff << " ";
		if(count<diff) cout << count/c+1 << endl; 
		else cout << count/c << endl;
	}
}

void B1872(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<pair<int,int>> v(n);
		int ans = 2e9;
		for(auto& item:v){
			cin >> item.first >> item.second;
			int k = item.first+floor((item.second-1)/2);
			ans = min(ans, k);
		}
		cout << ans << endl;
	}
}

void A237(){
	int n;
	cin >> n;
	vector<pair<int,int>> v(n);
	for(pair<int,int>& it:v){
		cin >> it.first >> it.second;
	}
	int count = 0;
	int count_mx = 0;
	for(int i=1;i<n;i++){
		if(v[i].first==v[i-1].first & v[i].second==v[i-1].second) count++;
		else count = 0;
		count_mx = max(count_mx, count);
	}
	cout << count_mx+1;
}

const int MOD = 1e9+7;
void B450(){
	ll x,y,n;
	cin >> x >> y >> n;
	ll s[] = {x, y, y - x, -x, -y, x - y};
    cout << (s[(n - 1) % 6] % MOD + MOD) % MOD;
}

// void B462(){
// 	int n,k;
// 	cin >> n >> k;
// 	string s;
// 	cin >> s;
// 	ll alph[26] = {0};
// 	loop(i,n) alph[s[i]-'A']++;
// 	vector<int> m;
// 	loop(i,26){
// 		if(alph[i]>0) {
// 			cout << i << " " << alph[i] << endl;
// 			m.push_back(alph[i]);
// 		}
// 	}
// 	sort(m.begin(), m.end());
// 	int size = m.size();
// 	int j = size-1;
// 	while(k>0){
// 		if(m[j]<=k) sum += (m[j]*m[j]);
// 		else{
// 			for(int l=1;i<=k;i++) sum+=m[j];
// 		}
// 		k -= m[j];
// 		j--;
// 	}
// }

int XOR(int x, int y) { return ((x|y)-(x&y)); }

void A1869(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		loop(i,n) cin >> a[i];

		// // 1 to n
		// int sum = 0;
		// loop(i,n) sum = XOR(a[i],sum);
		// loop(i,n) a[i] = sum;

		// cout << sum << endl;
		// loop(i,n) cout << a[i] << " ";
		// cout << endl;
		if(n%2==0){
			// // 1 to n
			// sum = 0;
			// loop(i,n) sum = XOR(a[i],sum);
			// loop(i,n) a[i] = sum;
			cout << 2 << endl;
			cout << 1 << " " << n << endl;
			cout << 1 << " " << n << endl;
		}
		else{
			// // 1 to n-1
			// sum = 0;
			// loop(i,n-1) sum = XOR(a[i],sum);
			// loop(i,n-1) a[i] = sum;

			// // n-1 to n
			// sum = 0;
			// for(int i=n-2;i<n;i++) sum = XOR(a[i],sum);
			// for(int i=n-2;i<n;i++) a[i] = sum;

			// // n-1 to n
			// sum = 0;
			// for(int i=n-2;i<n;i++) sum = XOR(a[i],sum);
			// for(int i=n-2;i<n;i++) a[i] = sum;

			cout << 4 << endl;
			cout << 1 << " " << n << endl;
			cout << 1 << " " << n-1 << endl;
			cout << n-1 << " " << n << endl;
			cout << n-1 << " " << n << endl;
		}
		// loop(i,n) cout << a[i] << " ";
		// cout << endl;
		// cout << endl;
	}
}

bool cmp2(pair<int, int>& a, pair<int, int>& b){
    if(a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}


void leet(){
	int k=3;
	int mat[][5] = {
		{1,1,0,0,0},
		{1,1,1,1,0},
		{1,0,0,0,0},
		{1,1,0,0,0},
		{1,1,1,1,1}};
	int m = sqrt(sizeof(mat)/4);
    int n = sizeof(mat[0])/4;
    // cout << m << " " << n << endl;
    vector<int> v(m,0);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]==1) v[i]++;
        }
    }
    vector<pair<int,int>> ml;
    int l = 0;
    for(int& i:v){
        ml.push_back(make_pair(l,i));
        l++; 
    }
    sort(ml.begin(), ml.end(), cmp2);
    for(int i=0;i<k;i++){
    	cout << ml[i].first << endl;
    }

}

void A1870(){
	int t;
	cin >> t;
	while(t--){
		int n,k,x;
		cin >> n >> k >> x;
		if(n<k){
			cout << -1 << endl;
			continue;
		}
		if(k>x+1){
			cout << -1 << endl;
			continue;
		}
		ll sum = 0;
		loop(i,k) sum += i;
		if(k==x) sum += (n-k)*(x-1);
		else sum += (n-k)*x;
		cout << sum << endl;
	}
}

bool isPrime(int n){
	int i, flag=0;   
	if(n == 1) {
		return true;
	}
	for(i = 2; i*i <= n; i++)  
	{  
		if(n % i == 0)  return false;  
	}  
	return true;
}

void C1872(){
	int t;
	cin >> t;
	while(t--){
		int l,r;
		cin >> l >> r;
		// cout << isPrime(l) << " " << isPrime(r) << endl;
		if(l==r){
			if(isPrime(l)) cout << -1 << endl;
			else{
				for(int i=2;i<l/2;i++){
					if(l%i==0) {
						cout << i << " " << l-i << endl;
						break;
					}
				}
				continue;
			}
		}
		// else cout << isPrime(l) << " " << isPrime(r) << endl;
		else{
			if(r<=3){
				cout << -1 << endl;
				continue;
			}
			int i;
			for(i=l;i<=r;i++){
				if(i%2==0 && i!=2) break;
			}
			cout << i/2 << " " << i/2 << endl;
		}
		// if(isPrime(l)&&isPrime(r)) cout << -1 << endl;
		// else{
		// 	if(!isPrime(l)){
		// 		// if(l%2==0) cout << l/2 << " " << l/2 << endl;
		// 		// else cout << sqrt(l)*2 << " " << l-sqrt(l)*2 << endl;
		// 		continue;
		// 	}
		// 	if(!isPrime(r)){
		// 		// if(r%2==0) cout << r/2 << " " << r/2 << endl;
		// 		// else cout << sqrt(r)*2 << " " << r-sqrt(r)*2 << endl;
		// 		continue;
		// 	}
		// }

	}
}


ll gcd(ll a, ll b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 


void D1872(){
	int t; 
	cin >> t;
	while(t--){
		ll n,x,y;
		cin >> n >> x >> y;
		if(x==y){
			cout << 0 << endl;
			continue;
		}
		ll mxy = n/((x*y)/gcd(x,y)); // O(log(N))
		ll mx = n/x - mxy;
		ll my = n/y - mxy;

		// 1+2+3.... my
		ll diff = my*(my+1)/2;

		// n + n-1 + n-2 .... mx = sum(n) - sum(n-mx)
		ll sum = (n*(n+1)/2) - ((n-mx)*(n-mx+1)/2);

		cout << sum-diff << endl;
	}
}

void A1873(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		string s;
		cin >> s;
		int count = 0;
		for (int i = 0; i < n; i++) {
			if (s[i] == 'B') {
				count++; i += k - 1;
			}
		}
		
		cout << count << endl;
	}
}

void E1873(){
	int t;
	cin >> t;
	while(t--){
		ll n,x;
		cin >> n >> x;
		vector<ll> v(n);
		in(v);
		ll low = 0, high = 2e9+7;
		while (low < high) {
			ll mid = low + (high - low + 1) / 2;
			ll tot = 0;
			loop(i,n) {
				tot += max(mid - v[i], 0LL);
			}
			if (tot <= x) low = mid; 
			else high = mid - 1;
		}
		cout << low << endl;
	}
}


void F1873(){
	int t;
	cin >> t;
	while(t--){
		int n;
		ll k;
		cin >> n >> k;
		vector<int> a(n);
		in(a);
		vector<ll> h(n);
		in(h);
		vector<ll> pref(n+1);
		loop1S(i,n){
			pref[i] = pref[i-1] + a[i-1];
		}
		int x=0;
		map<int,pair<int,int>> ma;
		loop(i,n-1){
			if(h[i]%h[i+1]==0) ma[x].first++;
			else x++;
		}
		int l = 1;
		for(auto& i:ma){
			int r = i.second.first+1;
			i.second.second = pref[r]-pref[l-1];
			cout << i.first << " " << i.second.first+1 << " " << i.second.second << endl;
			l = i.second.first;
		}
		cout << endl;
	}
}


int main(){
	F1873();
}



