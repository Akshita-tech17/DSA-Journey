#include<iostream>
using namespace std ;
int binary (int x , int n ){
    int ans = 1;
    int bf= 0;
    int pow = 1 ;
    while (n>0){
        int digit = n%2;
        bf =bf+ digit *pow;
        n= n/2;
        pow = pow *2;

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