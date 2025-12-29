#include<iostream> 
using namespace  std ;
int main(){
    int r;
    cout<<" enter n";
    cin>>r;
    int num=1;
    int p=0;
    for (int i=1 ; i<=r; i++){
        for ( int j = 1; j<= r-i; j++){
            cout<<" ";
        }
        for ( int k=1; k<=2*i-1; k++){
            cout<<num;
            num++;
        }
        cout<<endl;
    }

for (int i=r-1 ; i>=1; i--){
        for ( int j = 1; j<= r-i; j++){
            cout<<" ";
        }
        for ( int k=1; k<=2*i-1; k++){
            cout<<p;
            p++;
        }
        cout<<endl;
    }
}