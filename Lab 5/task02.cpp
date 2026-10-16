#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
class SingleLinkedList
{
private:
    Node* head;

public:
    SingleLinkedList()
    {
        head = NULL;
    }
    void insertAtBeginning(int value)
    {
        Node* newNode = new Node(value);

        newNode->next = head;
        head = newNode;
    }
    void insertAtEnd(int value)
    {
        Node* newNode = new Node(value);
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void insertAtPosition(int value, int position)
    {
        if (position <= 1)
        {
            insertAtBeginning(value);
            return;
        }
        Node* temp = head;
        for (int i = 1; i < position - 1 && temp != NULL; i++)
        {
            temp = temp->next;
        }
        if (temp == NULL)
        {
            cout << "Invalid position!" << endl;
            return;
        }
        Node* newNode = new Node(value);
        newNode->next = temp->next;
        temp->next = newNode;
    }
    void deleteFromBeginning()
    {
        if (head == NULL)
        {
            cout << "List is empty!" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    void deleteFromEnd()
    {
        if (head == NULL)
        {
            cout << "List is empty!" << endl;
            return;
        }
        if (head->next == NULL)
        {
            delete head;
            head = NULL;
            return;
        }
        Node* temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    void deleteFromPosition(int position)
    {
        if (head == NULL)
        {
            cout << "List is empty!" << endl;
            return;
        }
        if (position <= 1)
        {
            deleteFromBeginning();
            return;
        }
        Node* temp = head;
        for (int i = 1; i < position - 1 && temp->next != NULL; i++)
        {
            temp = temp->next;
        }
        if (temp->next == NULL)
        {
            cout << "Invalid position!" << endl;
            return;
        }
        Node* deleteNode = temp->next;
        temp->next = deleteNode->next;
        delete deleteNode;
    }
    bool search(int value)
    {
        Node* temp = head;

        while (temp != NULL)
        {
            if (temp->data == value)
            {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
    void display()
    {
        if (head == NULL)
        {
            cout << "List is empty!" << endl;
            return;
        }
        Node* temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";

            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
    ~SingleLinkedList()
    {
        Node* temp;
        while (head != NULL)
        {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};
int main()
{
    SingleLinkedList list;
    list.insertAtBeginning(20);
    list.insertAtBeginning(10);
    list.insertAtEnd(30);
    list.insertAtEnd(40);
    cout << "List: ";
    list.display();
    list.insertAtPosition(25, 3);
    cout << "After inserting 25: ";
    list.display();
    cout << "Searching for 25: ";
    if (list.search(25))
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;
    list.deleteFromBeginning();
    cout << "After deleting beginning: ";
    list.display();
    list.deleteFromEnd();
    cout << "After deleting end: ";
    list.display();
    list.deleteFromPosition(2);
    cout << "After deleting position 2: ";
    list.display();
    return 0;
}