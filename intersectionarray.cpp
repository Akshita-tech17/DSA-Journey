#include <iostream>
using namespace std;
int arraycommon(int arr[] , int brr[] ,int n){
        bool flag= false;
        for (int i=0 ; i<n; i++){
            for(int j=0; j<n; j++){
                if (arr[i]==brr[j]){
                    cout<< arr[i]<<" ";
                    flag=1;
                }
            }
        }
        if(flag==false){
            cout<<"no common ";
        }
    }

int main() {
    int arr[]={1,2,3,4,5,1,2};
    int brr[]={0,2,3,7,6,8,6};
    int n = sizeof(arr)/4;
    arraycommon(arr, brr,n);
}
    // int x;
    // cout << "Enter the size of the array: ";
    // cin >> x;

    // int arr[x];
    // for (int i = 0; i < x; i++) {
    //     cin >> arr[i];
    // }
//     for (int i = 0; i < x; i++) {
//         int count = 0;
//         for (int j = 0; j < x; j++) {
//             if (arr[i] == arr[j]) {
//                 count++;
//             }
//         }
//         if (count == 1) { // element occurs only once
//             cout << "Unique element is " << arr[i] << endl;
//             found = true;
//             break; // stop after finding first unique
//         }
//     }

//     if (!found) {
//         cout << "No unique element in the array" << endl;
//     }

//     return 0;
// }

