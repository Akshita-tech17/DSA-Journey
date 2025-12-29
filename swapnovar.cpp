#include<iostream>
using namespace std;
void swap (int a , int b ){
        a=a+b;
        b=a-b;
        a=a-b;
        cout<<a<< endl<< b;


    }
    

int main(){
    int a ;
    cout<< "enter a ";
    cin>>a;
    int b;
    cout<<"enter b";
    cin>>b;
    cout<<a<<endl<<b<<endl;
    cout<<"reversed numbers are : "<< endl;
    swap (a, b);
    cout<<endl;
    cout<<"numbers are :"<<endl;
    cout<<a<< endl<< b;
    




    

    }
    