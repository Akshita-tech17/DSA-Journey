#include<iostream>
using namespace std;
void swap (int *a , int *b ){
        int temp= *a;
        *a=*b;
        *b=temp;
        


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
    swap (&a, &b);
    cout<<a<< endl<< b;
}
    

    
    