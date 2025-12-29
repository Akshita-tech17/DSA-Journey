#include<iostream>
using namespace std ;
int main (){
    int n;
    int digit;
    int reverse=0;
    cout<<"enter a number ";
    cin>>n;
    while (n!=0){
        digit=n%10;
        reverse = reverse *10 + digit;
        n=n/10;
        
    }
    cout<<"the reversed number  is :"<< reverse;
}