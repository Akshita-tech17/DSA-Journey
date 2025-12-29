#include<iostream>
using namespace std ;
void greet(){
    cout<<"hello";
    greet();
}
int main(){
    cout<<"hii"<<endl;
    greet();
    cout<<endl;

}