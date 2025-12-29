#include<iostream>
using namespace std ;
int main(){
    int cp,sp;
    cout<<"enter the cost price";
    cin>>cp;
    cout<<"ener the selling price";
    cin>>sp;
    if (sp>cp){
        cout<<"profit is made of "<<sp-cp;
    }
    else if (cp>sp){
        cout<<"loss is occured of "<<cp-sp;
    }
    else if(sp=cp){
        cout<<"no profit no loss occured";
    }    
    return 0;


}