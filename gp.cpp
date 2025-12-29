#include<iostream>
using namespace std;
#include<cmath>
int main(){
    int n,a,r;
    cout<<"enter the no. of terms in an GP";
    cin>>n;
    cout<<"enter the first term";
    cin>>a;
    cout<<"enter the common ratio";
    cin>>r;
    for(int i=0;i<=n;i++){
        cout<<a*pow(r,i)<<endl;
    }
}