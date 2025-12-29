#include<iostream>
using namespace std ;
int fibonnaci(int n){
    int sum= 0;
    int fib;
    if (n==0 || n==1) return n;
    return fibonnaci(n-1)+ fibonnaci(n-2);
    //return sum=sum+fib;

}
    
int main(){
    int n;
    cout<<"enter the num";
    cin>>n;
    cout<<fibonnaci(n);
}