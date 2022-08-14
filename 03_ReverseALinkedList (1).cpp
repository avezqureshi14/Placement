#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void reverse(Node **head)
{
    Node *curr = *head;
    Node *prev = NULL;
    while (curr != NULL)
    {
        Node*temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    *head = prev;
}

void print(Node*n){
    while (n != NULL)
    {
        cout<<n->data<<" ";
        n = n->next;
    }
    
}


int main()
{
    Node*head = new Node();
    Node*second = new Node();
    Node*third = new Node();
    Node*fourth = new Node();
    head->data = 21;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 24;
    third->next = fourth;
    fourth->data = 42;
    fourth->next = NULL;
    cout<<"Before Reversing "<<endl;
    print(head);
    cout<<endl;
    cout<<"After Reversing "<<endl;
    reverse(&head);
    print(head);
    
    return 0;
}