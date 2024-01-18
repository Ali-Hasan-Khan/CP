#include<bits/stdc++.h>
using namespace std;

int main(){
	int x = (1<<1)|(1<<3)|(1<<4)|(1<<8);
	int b = 0;
	do {
	// process subset b
		for(int i=31;i>=0;i--){
			// printing b in binary 
			// if(b&(1<<i)) cout << 1;
			// else cout << 0;
		}
		// cout << " " << b << endl;
	} while (b=(b-x)&x);
	bitset<10> p,q;
	p[8] = 1;
	q[7] = 1;
	bitset<10> c = p&q;
	bitset<10> d = p|q;
	cout << c.count() << " " << d.count();

}