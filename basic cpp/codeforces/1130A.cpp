#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1001],pos=0,neg=0;
    cin>>n;

    int div=0;
    if(n%2 == 0){
        div = n/2;
    }
    else if( n%2 != 0){
        div = (n/2)+1;
    }
    for(int i=0; i<n; i++){
        cin>>a[i];
        if( a[i] > 0){
            pos++;
        }
        else if( a[i]  < 0 ){
            neg++;
        }
    }

    if( div <= pos ){
        cout<<1<<"\n";
    }
    else if( div <= neg){
        cout<<-1<<"\n";
    }
    else{
        cout<<0<<"\n";
    }
    return 0;
}