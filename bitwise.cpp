#include<iostream>
using namespace std ;
int main(){
    int a, b;
    cout<<"enter num 1";
    cin>>a;
    cout<<"enter num 2";
    cin>>b;
    // int result = a & b;
    // int result= a|b;
    //int result = a^b;
    //int result =a<<b;
    int result = a>>b;
    cout<< result;
}