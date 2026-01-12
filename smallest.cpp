#include<iostream>
using namespace std ;
//O(1)
int main(){
    int x,y,z;
    cout<<"enter three numbers ";
    cin>>x>>y>>z;
    if(x<y){
        if (x<z){
            cout<<x <<" is the smallest number ";
        }
        else{
            cout<<z<< "is the smallest number";
        }
    }
    else{//y<x
        if (y<z){
            cout<<y<< " is the smallest number ";
        }
        else{
            cout<<z<<"is the smallest number ";
        }

    }
}