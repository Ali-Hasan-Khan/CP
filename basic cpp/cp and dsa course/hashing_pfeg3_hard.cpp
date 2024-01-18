/* given a string of n size, t test cases, q queries,
range l to r, you have to check if substring from l to r 
(after rearranging of letters of substring in anyway) is 
palindrome or not.

intuition: palindrome condition-
1) for odd size substring (acbca) => 
count of side letters = 2(even)
count of middle letter = 1(odd)

2) for even size substring(abba) =>
count of side letters = 2(even)
count of middle letter = 0(even)

if no of odd count letters > 1 --> not a palindrome

t <= 10
N <= 10^5
q <= 10^5
*/
#include <bits/stdc++.h>
using namespace std;

// int main(){
// 	int t;
// 	cin >> t;
// 	while(t--){
// 		int n,q;
// 		cin >> n >> q;
// 		string s;
// 		cin >> s;
// 		while(q--){
// 			int l,r;
// 			cin >> l >> r;
// 			int hsh[26] = {};
// 			// for(int i=0;i<26;i++){
// 			// 	hsh[i] = 0; // intialise by 0
// 			// }	
// 			for(int i=l-1;i<r;i++){ // 1->2 == 0->1 in string 
// 				hsh[s[i] - 'a']++;
// 			}
// 			int odd_ct = 0;
// 			for(int i=0;i<26;i++){
// 				if(hsh[i]%2!=0){
// 					odd_ct++;
// 				}
// 			}
// 			if(odd_ct>1) cout << "NO" << endl;
// 			else cout << "YES" << endl;

// 		}
// 	}
// } O(t*q*(N+26)) = 10*10^5*10^5 = 10^11 (>10^7)

/*
2d hash array containing position of each letter in string 

for abcec:
	0 1 2 ......... 25
	a b c ... e ... z
0	0 0 0 ... 0 ... 0 // starting from 1 index
1	1 0 0 ... 0 ... 0 // to handle i-1
2	0 1 0 ... 0 ... 0
3	0 0 1 ... 0 ... 0
4	0 0 0 ... 1 ... 0
5	0 0 1 ... 0 ... 0

rows = 1 to n
cols = 0 to 25
*/



const int N=1e5+10;
int hsh[N][26]; // intialised by 0
int main()
{
	int t; 
	cin >> t ;
	while(t--)
	{	
		// initialise hash arr after every test case
		for(int i=0;i<N;i++){
			for(int j=0;j<26;j++){
				hsh[i][j] = 0;
			}
		}
		int n, q;
		cin >> n >> q ;
		string s ;
		cin >> s ;
		for (int i=0;i<n;i++)  //storing  count of every alphabet which comes in s at the position of their respective element , if an alphabet comes in a position that position in the grid gets changed to one
		{
			hsh[i+1][s[i]-'a']++ ;  //example a gets stored in [][0]
		}
		// traversing downwards col by col
		// to find prefix sum
		for (int i=0;i<26;i++) //running through the string for every alphabet
		{
			for (int j=1;j<=n;j++) 
			{
				hsh[j][i] += hsh[j-1][i] ; 
			}
		}
		while(q--)
		{
			int l,r; 
			cin >> l >> r; 
			int odd_ct=0; 
			for(int i=0;i<26;i++)
			{
				int chr_ct = hsh[r][i]-hsh[l-1][i];
				if (chr_ct%2==1) odd_ct++;
			}
			if(odd_ct<=1) cout<<"YES"<<endl ;
			else cout<<"NO"<<endl;
			
		}
	}
} // O(t*(26*N + N + 26*N + q*26)) = O(t*N) = 10^6 