#include<iostream>
using namespace std ;
int main (){
    int count = 0;
    string d;
    cout<<" enter the string ";
    cin>>d;
    getline(cin ,d);
    cout<<d;
    int n= d.length();
    for (int i=0 ; i<n; i++){
        if (i%2==0 ){
            d[i]=='a';
        }
    }
    cout<< "the update string i s:"<<d;
}