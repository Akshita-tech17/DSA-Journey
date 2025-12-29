#include<iostream>
using namespace std;
int main(){
    int n,a,d;
    cout<<"enter the no. of terms in an AP";
    cin>>n;
    cout<<"enter the first term";
    cin>>a;
    cout<<"enter the common difference";
    cin>>d;
    for(int i=0;i<=n;i++){
        cout<<a+i*d<<endl;
    }
}