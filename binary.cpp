#include<iostream>
using namespace std ;
int decimal(int dec ){
    int binary =0;
    int pow = 1;
    while(dec>0){
        int rem = dec %2;
        dec/=2;
        binary+=rem*pow;
        pow*=10;

    }
    cout<<"the binary representation is "<<binary;
}
int main(){
    int n;
    cout<<"enter the decimal number ";
    cin>>n;
    for ( int i =0; i<n;i++){
         decimal(i);
         cout<<endl;


    }
   


}