#include<iostream>
using namespace std ;
int main(){
    int x,y;
    cout<< "enter the x coordinate";
    cin>>x;
    cout<<"enter the y coordinate ";
    cin>>y;
    if (x>0 && y>0){
        cout<<" point lies in first quad";
    }
    else if (x<0 && y>0){
        cout<<"point lies in 2nd quad ";
    }
    else if (x<0 && y< 0){
        cout<< "point lies in 3rd quad ";
    }
    else if (x>0 && y <0){
        cout<<"point lies in 4th quad";
    }
    else {
        cout<< "point lies on origin";
    }
}
    