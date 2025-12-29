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
    for (int i = 0 ; i<n ; i++ ){
        if ( d[i]== 'a' || d[i]==   'e' || d[i]== 'o'|| d[i] == 'i' || d[i]=='u' || d[i]== 'A'|| d[i]== 'E'|| d[i]== 'O' || d[i]== 'I' || d[i]=='U'){
            count += 1;

        }
    }
    cout<<" the count of vowels:"<<count ;
}

//     string x= "Raghav Garg";
//     x[0]='M';
//     x[2]='d';
//     cout<<x;
// }

