#include<iostream>
using namespace std;
int main(){
    int arr[7];
    int *max = &arr[0];
    int *min = &arr[0];

    cout<<"Enter 7 numbers: " << endl;
    for(int i=0; i<7; i++){
        cin>>arr[i];
        if(arr[i] > *max){
            max = &arr[i];
        }
        if(arr[i] < *min){
            min = &arr[i];
        }
    }
    cout << "Maximum: " << *max << endl;
    cout << "Minimum: " << *min << endl;
    return 0;
}