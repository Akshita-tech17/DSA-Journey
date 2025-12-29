#include<iostream>
using namespace  std ;
int main(){
    int r;
    cout<<" enter  n ";
    cin>>r;
    for (int i =0; i<=r ; i++){
        for ( int j = 1; j<=i; j++){
            cout<<" ";
        }
        for ( int k=1; k<=r-i; k++){
            cout<<"*";
        }
        cout<<endl;
    }
}