#include<bits/stdc++.h>
using namespace std; 



vector<long long> findMissing(long long A[], long long B[],  
             int N, int M) 
{   
	const int n=1e6;
	int hshA[n+10]={};
	int hshB[n+10]={};
    vector<long long> arr(0);
    for(int i=0;i<N;i++){
        hshA[A[i]]++;
    }
    for(int i=0;i<M;i++){
        hshB[B[i]]++;
    }
    for(int i=0;i<N;i++){
        if(hshB[A[i]]==0){
            arr.push_back(A[i]); 
        }
    }
    return arr;
} 

int main(){
	int N,M; 
	cin >> N >> M;
	long long A[N],B[M];
	for(int i=0;i<N;i++){
		cin >> A[i];
	}
	for(int i=0;i<M;i++){
		cin >> B[i];
	}

	vector<long long> arr(M);
	arr = findMissing(A,B,N,M);
	for(int i:arr){
		cout << i << " ";
	}
}
