#include <iostream>
using namespace std;

const int MAX = 5;

class Queue
{
private:
    int queue[MAX];
    int front;
    int rear;

public:

    Queue()
    {
        front = -1;
        rear = -1;
    }

    bool isEmpty()
    {
        return front == -1 || front > rear;
    }

    bool isFull()
    {
        return rear == MAX - 1;
    }

    void enqueue(int value)
    {
        if (isFull())
        {
            cout << "Queue is Full!" << endl;
            return;
        }

        if (front == -1)
            front = 0;

        rear++;
        queue[rear] = value;
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty!" << endl;
            return;
        }

        cout << queue[front] << " removed." << endl;

        front++;

        if (front > rear)
        {
            front = -1;
            rear = -1;
        }
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty!" << endl;
            return;
        }

        cout << "Queue: ";

        for (int i = front; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }

        cout << endl;
    }
};

int main()
{
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();

    q.display();

    q.enqueue(40);
    q.enqueue(50);

    q.display();

    return 0;
}