#include<iostream>
using namespace std ;
int main (){
    int x,i;
    int count =0;
    cout<<"enter the number ";
    cin>>x;
    for (int i= 1; i<=x/2;i++){
        if (x%i==0){
            count= count + 1;
        }
    }
    if (count > 2){
        cout<< x  << "  is a composite number";
    }
    else{
        cout<< x << "  is not a composite number ";
    }
    
}