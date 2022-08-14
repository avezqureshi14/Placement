#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node*next;
};

void push(Node**head, int new_data){
    Node*new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head);
    (*head) = new_node;
}

int MidPoint(Node**head){
    Node*fast = *head;
    Node*slow = *head;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }

    return slow->data;
    
}

int main()
{
    Node*head = new Node();
    head->data = 5;
    head->next = NULL;    
    push(&head,8);
    push(&head,9);
    push(&head,10);
    push(&head,15);
    cout<<"The Midpoint of the Linked List "<<MidPoint(&head);
    return 0;
}