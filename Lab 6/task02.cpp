#include <iostream>
using namespace std;

int queue[5];
int rear = -1;

void enqueue(int value)
{
    rear++;
    queue[rear] = value;
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    cout << queue[0] << " ";
    cout << queue[1] << " ";
    cout << queue[2];

    return 0;
}