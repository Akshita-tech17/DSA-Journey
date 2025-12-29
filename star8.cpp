#include<iostream>
using namespace  std ;
int main(){
    int r;
    cout<<" enter  n ";
    cin>>r;
    for (int i =0; i<=r ; i++){
        for ( int j = 1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

for (int k=r-1 ;k>=1 ; k--){
        for ( int l= 1; l<=k; l++){
            cout<<"*";
        }
        cout<<endl;
    }
}