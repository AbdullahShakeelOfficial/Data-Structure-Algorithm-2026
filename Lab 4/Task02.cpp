#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

class Linkedlist
{
private:
    Node* head;

public:
    Linkedlist()
    {
        head = NULL;
    }

    void append(int value)
    {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node* current = head;

            while (current->next != NULL)
            {
                current = current->next;
            }

            current->next = newNode;
        }
    }

    void display()
    {
        Node* current = head;

        while (current != NULL)
        {
            cout << current->data << " ";
            current = current->next;
        }
    }
};

int main()
{
    Linkedlist list;

    list.append(10);
    list.append(20);
    list.append(30);
    list.append(40);

    cout << "Linked list: ";
    list.display();

    return 0;
}
