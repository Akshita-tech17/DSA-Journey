#include<iostream>
using namespace std ;
int main (){
    int x,i;
    bool flag =true;
    cout<<"enter the number ";
    cin>>x;
    for (int i= 2; i<=x/2;i++){
        if (x%i == 0){
            flag=false;
            break;

        }
    }
    if(x==1){
        cout<<"neither prime nor composite";
    }
    else if (flag==false){
        cout<<"composite number";
    }
    else {
        cout<<"prime number";
    }
       
}