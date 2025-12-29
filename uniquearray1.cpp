#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter the size of the array: ";
    cin >> x;

    int arr[x];
    for (int i = 0; i < x; i++) {
        cin >> arr[i];
    }

    bool found = false;
    for (int i = 0; i < x; i++) {
        int count = 0;
        for (int j = 0; j < x; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == 1) { // element occurs only once
            cout << "Unique element is " << arr[i] << endl;
            found = true;
            break; // stop after finding first unique
        }
    }

    if (!found) {
        cout << "No unique element in the array" << endl;
    }

    return 0;
}

