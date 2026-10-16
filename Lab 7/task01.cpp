#include <iostream>
using namespace std;

int main() {
    int arr[10], key, temp;

    cout << "Enter 10 values:\n";  // user se array me values le ga input array me.
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }


    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) { // sorting kr raha he array ko 
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    
    cout << "Sorted array: ";
    for (int i = 0; i < 10; i++) {   // sorted array ko print kr raha he
        cout << arr[i] << " ";
    }

    cout << "\nEnter value to search: ";
    cin >> key;


    int low = 0, high = 9, mid;    // binary search kr raha he array me value ko find krne ke liye
    bool found = false;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            found = true;
            break;
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (found)
        cout << "Value found at index " << mid;
    else
        cout << "Value not found.";

    return 0;
}