#include<iostream>
using namespace std ;
//using pointer
// int change ( int * a){
//     *a=20;
// }
// int main(){
//     int a = 10;
//     change(&a);
//     cout<<endl;
//     cout<<a;
// }

// //without pointer
// int change ( int a){
//     a=20;
//}
// int main(){
//     int a = 10;
//     change(a);
//     cout<<endl;
//     cout<<a;


// }

//by referencing
int change (int &b){
    b=20;
}
int main(){
    int a = 10;
    change (a);
    cout<<endl;
    cout<<a;


}


    