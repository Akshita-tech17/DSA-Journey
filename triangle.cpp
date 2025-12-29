#include<iostream>
using namespace std ;
int main(){
    int x,y,z;
    cout<<"enter the sides of triangle ";
    cin>>x>>y>>z;
    if (x+y>=z && y+z>=x&& x+z>=y){
        cout<<"these sides ca form a triangle ";
    }
    else{
        cout<<"these sides can't form a triangle ";

    }
}