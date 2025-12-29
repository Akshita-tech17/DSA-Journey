#include<iostream>
using namespace std;
int factorial ( int n){
    if(n==1 || n==0) return 1;
    return factorial(n-1)*n;
}
int main(){
    cout<<"enter the number:";
    int n;
    cin>>n;
    cout<<"the factorial of n is :"<<factorial(n);
    
}
