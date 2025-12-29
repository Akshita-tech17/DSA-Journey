// #include<iostream>
// using namespace std ;
// int main (){
// int x , y;
// cout<< " enter two numbers";
// cin >> x;
// cin >> y;
// cout <<"the sum of two numbers is :"<< x+y;
// }
#include <iostream>
using namespace std;

int main() {
    int num1, num2, sum;

    // Taking input from the user
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Calculating sum
    sum = num1 + num2;

    // Displaying result
    cout << "The sum is: " << sum << endl;

    return 0;
}
