#include<bits/stdc++.h>
using namespace std;
using li = long int;
using lli  = long long int;


#define loop(x,n) for(int x = 0; x < n; ++x)
#define loop1S(x,n) for(int x = 1; x <= n; ++x)
#define revloop(x,n) for(int x = n-1; x>=0; --x)
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define all(v) (v).begin(),(v).end()
#define in(v) for(auto& item:v) cin >> item;



void solve(){
    ll n,m;
    cin >> n >> m;
    vector<ll> a(n);
    vector<ll> b(m);
    in(a);
    in(b);
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());
    ll ans = 0;
    int i=0, j=0;
    int starti=0,startj=0;
    int endi=n-1,endj=m-1;
    ll c = n;
    while(c--){
        // ans += max(b[i]-a[i],b[m-i]-a[n-i]);
        if(abs(b[startj]-a[starti])>abs(b[endj]-a[endi])) {
            ans += abs(b[startj]-a[starti]);
            starti++;startj++;
        }
        else{
            ans += abs(b[endj]-a[endi]);
            endj--;endi--;
        }
    }
    cout << ans << "\n";
}



int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    // return 0;
}