#include<iostream>
using namespace  std ;
int main(){
    int r, c;
    int num =1;
    cout<<" enter  i and j ";
    cin>>r>>c;
    for (int i = 1 ; i<=r ; i++){
        for ( int j = 1 ; j<=i; j++){
            cout<< num <<" ";
            num++;
        }
        cout<<endl;
    }
}