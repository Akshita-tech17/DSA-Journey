#include<iostream>
using namespace std ;
int main(){
    int x,y,z;
    cout<<"enter three numbers ";
    cin>>x>>y>>z;
    if(x>y){
        if (x>z){
            cout<<x<<"is  the greatest number ";
        }
        else{
            cout<<z<< "is the greatest number";
        }
    }
    else{//y>x
        if (y>z){
            cout<<y<< " is the largest number ";
        }
        else{
            cout<<z<<"is the largest number ";
        }

    }
}