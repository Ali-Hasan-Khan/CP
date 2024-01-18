#include<bits/stdc++.h>
using namespace std;

int main(){
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	long long dx = abs(x1-x2);
	long long dy = abs(y1-y2);
	if(dx>dy){
		cout << dx << endl;
	}
	else{
		cout << dy << endl;
	}
}