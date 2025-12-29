#include<iostream>
using namespace std ;
int main(){
    int x;
    cout<<" enter the number 1"<<endl;
    cin >> x;
    if (x>99 && x<=999){
        cout<<"the number is three digit";
    }
    else{
        cout<<"no.is not 3 digit number ";
    }
    return 0;
}