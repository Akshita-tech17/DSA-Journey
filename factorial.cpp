#include<iostream>
using namespace std;
int main(){
    int n, r,com;
    int facta=1;
    int factb=1;
    int factc=1;
    int p;
    cout<<"enter the number of whose factorial to find  n :";
    cin>>n;
    cout<<"enter the number of whose factorial to find  r:";
    cin>>r;
    
    for (int i=1; i<=n; i++){
        facta*=i;
    }
    for(int i  = 1; i<=r; i++){
        factb*=i;
    }
    for(int i  = 1; i<=(n-r); i++){
        factc*=i;
    }
    p=factb*factc;
    com=facta/p;;
    // cout<<facta<<endl;
    // cout<<factb<<endl;
    // cout<<factc<<endl;

    // cout<<p<<endl;
    //cout<<com<<endl;
   cout<<"the combination of a number is :"<<com;
    return 0;
}