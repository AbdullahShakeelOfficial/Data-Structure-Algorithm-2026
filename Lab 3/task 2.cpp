#include<iostream>
using namespace std;
void display(int *arr, int size){
    for(int i=0; i<size; i++){
        cout<<*(arr+i)<<" ";
    }
    cout<<endl;
}
void insertElement(int *arr,int &size, int position, int value){
    for(int i = size+1; i>position; i--){
        *(arr+i)= *(arr+i-1);
    }
    *(arr+position) = value;
    size++;
}
void deleteElement(int *arr, int &size, int position){
    for(int i = position; i<size-1; i++){
        *(arr+i) = *(arr+i+1);
    }
    size--;
}
int main(){
    int arr[100];
    int size,position,value;
    cout<<"Enter the size of the array: ";
    cin>>size;
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<size; i++){
        cin>>*(arr+i);
    }
    cout<<"\n Enter position to insert the element: ";
    cin>>position;
    cout<<"Enter the value to insert: ";
    cin>>value;
    insertElement(arr,size,position,value);
    cout<<"\nArray after insertion: ";
    display(arr,size);

    cout<<"\n Enter position to delete the element: ";
    cin>>position;
    deleteElement(arr,size,position);
    cout<<"\nArray after deletion: ";
    display(arr,size);
    return 0;
}