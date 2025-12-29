#include<iostream>
using namespace std ;
int main (){
    int x= 23;
    int *p = &x;
    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;
    *p=98;
    cout<<p<<endl;
    cout<<*p<<endl;
}