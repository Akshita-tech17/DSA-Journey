#include<iostream>
using namespace std;

int main(){
    int n,digit;
    int product = 1;
    cout<<"enter the number ";
    cin>>n;
for (int i =1 ; i<=n; i++){
    product = product *i;
    cout<<product<<" ";
}
}