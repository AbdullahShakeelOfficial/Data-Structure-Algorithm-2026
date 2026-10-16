#include <iostream>
using namespace std;

int queue[5];

int front = -1;
int rear = -1;

void enqueue(int value)
{
    if (front == -1)
        front = 0;

    rear++;
    queue[rear] = value;
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    for (int i = front; i <= rear; i++)
    {
        cout << queue[i] << " ";
    }

    return 0;
}