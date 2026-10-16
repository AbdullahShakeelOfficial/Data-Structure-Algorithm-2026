#include <iostream>
using namespace std;

int queue[5];

int front = -1;
int rear = -1;

void enqueue(int value)
{
    if (rear == 4)
    {
        cout << "Queue is Full!" << endl;
        return;
    }

    if (front == -1)
        front = 0;

    rear++;
    queue[rear] = value;

    cout << value << " inserted." << endl;
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);

    return 0;
}