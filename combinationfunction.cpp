#include<iostream>
using namespace std;
    int fact(int a){
        int f=1;
        for ( int i=1; i<=a; i++){
            f*=i;
        }
        return f;
    }
    int combination(int n ,int r){
        int cmb= fact(n)/(fact(r)* fact(n-r));
        return cmb;
    }
    int main(){
    int n, r,com;
    cout<<"enter the upper value  n :";
    cin>>n;
    cout<<"enter the lower value  r:";
    cin>>r;
    com=combination(n,r);
    cout<<"the combination of n over r is :"<<com;
    }