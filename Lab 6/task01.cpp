#include <iostream>
using namespace std;

int main()
{
    int queue[5];

    int rear = -1;

    rear++;
    queue[rear] = 10;

    rear++;
    queue[rear] = 20;

    cout << queue[0] << " ";
    cout << queue[1];

    return 0;
}