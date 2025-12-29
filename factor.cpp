#include<iostream>
using namespace std ;
int main (){
    int x;
    int highest =0;
    int  i;
    cout<<"enter a number :";
    cin>>x;
    for(i=1 ; i<x ; i++){
        if (x%i==0){
            highest=i;
        }
    }
    cout<< highest  <<" is a highest factor of  "<<x; 

}