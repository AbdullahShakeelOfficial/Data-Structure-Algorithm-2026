#include<iostream>
using namespace std;

int main() {
    int n, m;
    char operation;

    cout << "Enter the two numbers: " << endl;
    cin >> n >> m;
    if(n==0 || m==0){
        cout<<"Invalid input. Please enter valid integers."<<endl;
        return 1;
    }
    cout<<"S for SUM\n A for AVERAGE\n M for MULTIPLICATION\n D for DIVISION\n";
    cin >> operation;

switch(operation) {
    case 'S':
    case 's':
        cout<<"SUM: "<<n+m<<endl;
        break;
    case 'A':
    case 'a':
        cout<<"AVERAGE: "<<(n+m)/2.0<<endl;
        break;
    case 'M':
    case 'm':
        cout<<"MULTIPLICATION: "<<n*m<<endl;
        break;
    case 'D':
    case 'd':
        if(m!=0)
            cout<<"DIVISION: "<<static_cast<double>(n)/m<<endl;
        else
            cout<<"Division by zero is not allowed."<<endl;
        break;
    default:
        cout<<"Invalid operation."<<endl;
}
return 0;   
}