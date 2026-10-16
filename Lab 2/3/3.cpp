#include<iostream>
using namespace std;
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    
   
    int num=2;
    
    bool found = false;
    for(int i=0; i<7; i++){
        if(arr[i] == num){
            cout<<"Number found at index: "<<i<<endl;
            found = true;
            break;
        }
    }
    if(!found){
        cout<<"Number not found"<<endl;
    }
    system("pause");
    return 0;
}