#include<iostream>
using namespace std ;
int main(){
    int a = 20;
    int * ptr = & a ;
    int **pptr = &ptr;
    cout<<*pptr<<endl;
    cout<<ptr<<endl;
    cout<<&a;
    // cout<<a<<endl;
    // cout<<*ptr;
    // cout<<ptr<<endl;
    // cout<<&a;
}