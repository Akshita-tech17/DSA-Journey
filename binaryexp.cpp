#include<iostream>
using namespace std ;
int binary (int x , int n ){
   // well known conditions 
    int bf=n;
    int ans = 1;
    if ( n==0){
        return 1;
    }
    if (x==1 && x ==0 ){
        return x;
    }
    if (x== -1 && n%2==0){
        return 1;
    }
    if (x =-1 && n %2!=0){
        return -1 ;
    }
    if ( bf<0 ){
        x= 1/x;
        bf = -bf;
    }
    while (bf>0){
        if ( bf%2==1){
            ans = ans *x;
        }
        x = x*x;
        bf = bf/2;
    }
    return ans ;
    }
int main(){
    int x ;
    cout<<"enter the base "<<endl ;
    cin>>x;
    int n ;
    cout<<"enter the power "<<endl;
    cin>>n;
    cout <<" the optimised exponentiation form is "<< binary(x,n)<<endl;

}
//time complexity = O(logn)