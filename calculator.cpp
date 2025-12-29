#include<iostream>
using namespace std ;
int main(){
    int x,y;
    cout<<"enter number 1:";
    cin>>x;
    cout<<"enter a number 2:";
    cin>>y;
    char ch;
    cout<<"enter the first letter of operation";
    cin>>ch;
    switch(ch){
        case 'a':
        cout<<x+y;
        break;
        case 's':
        cout<<x-y;
        break;
        case 'm':
        cout<<x*y;
        break;
        case 'd':
        cout<<x/y;
        break;
        default:
        cout<<"invalid operation";
    }
    return 0;
}