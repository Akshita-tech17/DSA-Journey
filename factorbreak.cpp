#include<iostream>
using namespace std ;
int main (){
    int x;
    int i;
    cout<<"enter a number :";
    cin>>x;
    int factor =1;
    for (int i=x/2; i>=1 ; i--){
        if (x%i==0){
            factor =i ;
            break;
            
        }
    }
    cout<< " "<< factor <<"is the highest factor  of  "<<x;
    return 0;
}