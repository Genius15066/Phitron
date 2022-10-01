#include <bits/stdc++.h>
using namespace std;
 
class Node
{
public:
    int value;
    Node *next;
 
    Node(int val)
    {
        value = val;
        next = NULL;
    }
};
void insertAtHead(Node *&head, int val)
{
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}
void insertAtTail(Node *&head, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}
 
//reverse every k nodes
Node *reverseK(Node *&head, int k)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *nextptr;
    int count = 0;
    while (curr != NULL && count < k)
    {
        nextptr = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextptr;
        count++;
    }
    if (nextptr != NULL)
    {
        head->next = reverseK(nextptr, k);
    }
    return prev;
}
 
void printArray(Node *n)
{
    while (n != NULL)
    {
        n->next!=NULL?cout << n->value << "->":cout << n->value;
        n = n->next;
    }
    cout << endl;
}
 
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Node *head=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(i==0){
            insertAtHead(head,x);
        }
        else{
            insertAtTail(head,x);
        }
    }
    int k;
    cin>>k;
    head=reverseK(head,k);
    printArray(head);
}
