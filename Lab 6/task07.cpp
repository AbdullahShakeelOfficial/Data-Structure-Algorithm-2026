#include <iostream>
using namespace std;

int main()
{
    int queue[5];

    int front = 0;
    int rear = -1;

    rear++;
    queue[rear] = 10;

    rear++;
    queue[rear] = 20;

    rear++;
    queue[rear] = 30;

    cout << "Front: " << queue[front] << endl;
    cout << "Rear: " << queue[rear] << endl;

    cout << "Removed: " << queue[front] << endl;
    front++;

    cout << "New Front: " << queue[front] << endl;

    return 0;
}