#include<iostream>
using namespace std;

struct Node
{
int data;
Node* next;
};

int main()
{
Node *head = new Node;
head -> data = 10;
head -> next = NULL;
cout<<"Value in head is: " << head -> data;
return 0;
}
