#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter A Number"<< endl;
    cin>>m;
    if (m%2==0){
        cout<<"The Number is even"<< endl;
    }
    else if(m==0){
        cout<<"number is zero"<<endl;
    }
    else {
        cout<<"the number is odd"<< endl;
    }
    return 0;
}
