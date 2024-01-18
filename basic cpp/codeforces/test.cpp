#include<bits/stdc++.h>
using namespace std;

bool areSame(int arr[],
             int n)
{
  int first = arr[0];
 
  for (int i = 1; i < n; i++)
    if (arr[i] != first)
      return 0;
  return 1;
}

int firstDigit(int n)
{
    // Find total number of digits - 1
    int digits = (int)log10(n);
  
    // Find first digit
    n = (int)(n / pow(10, digits));
  
    // Return first digit
    return n;
}

int main(){
	long long n;
	cin >> n;
	string s = to_string(n);
	// cout << --(s[0]-'0');
	int n_dig = (int)log10(n)+1;
	int first_dg = (int)(n/pow(10,n_dig-1));
	first_dg--;
	cout << first_dg*pow(10,n_dig-1)+n%(int)pow(10,n_dig-1);
	// string s;
	// cin >> s;
	// cout << (" " +s+" ").size();
	// swap(s[0],s[0+1]);
	// for(int i=0;i<s.size();i++) {
	// 	cout << (char)toupper(s[i]);
	// }
	// int n;
	// cin >> n;
	// while(n++){
	// 	string s = to_string(n);
	// 	int hsh[10] = {};
	// 	for(int a=0;a<4;a++){
	// 		hsh[s[a]-'0']++;
	// 	}
	// 	bool dist = true;
	// 	for(int a=0;a<10;a++){
	// 		if(hsh[a]>1) dist=false;
	// 	}
	// 	if(dist){
	// 		cout << n;
	// 		break;
	// 	}
	// }
	// int a = 7&3;
	// int n = 4;
	// int arr[n] = {3,3,3,3};
	// if (areSame(arr, n))
	//     cout << "All Elements are Same";
	// else
	// 	cout << "Not all Elements are Same";
	// cout << a << endl;
}

// bool areSame(int arr[],
//              int n)
// {
//   int first = arr[1];
 
//   for (int i = 2; i <=n; i++)
//     if (arr[i] != first)
//       return 0;
//   return 1;
// }

// l=1 and r=n
		// int arr2[n+10] = {};
		// // do{
		// for(int j=0;j<=n-1;j++){
		// 	arr2[j+1] = (arr[1+j]&arr[n-j]);
		// 	cout << arr2[j+1] << " ";
		// 	if(arr2[j+1]<min) min = arr2[j+1];
		// }
		// cout << endl;
		// // }while(!areSame(arr2,n));			
		// cout << areSame(arr2,n) << endl;
		// if(!areSame(arr2,n)){
		// 	int arr3[n+10] = {};
		// 	// do{
		// 	for(int j=0;j<=n-1;j++){
		// 		arr3[j+1] = (arr[1+j]&arr[n-j]);
		// 		cout << arr3[j+1] << " ";
		// 		if(arr3[j+1]<min) min = arr3[j+1];
		// 	}
		// 	cout << endl;
		// // }while(!areSame(arr2,n));			
		// 	cout << areSame(arr3,n) << endl;
		// }