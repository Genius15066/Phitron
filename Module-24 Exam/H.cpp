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
 
 
Node *deleteNnodes(Node *&head, int m, int n)
{
    Node *curr = head;
    Node *t;
    while (curr)
    {
        for (int i = 1; i < m && curr != NULL; i++)
        {
            curr = curr->next;
        }
        if (curr == NULL)
        {
            return head;
        }
        t = curr->next;
        for (int i = 1; i <= n && t != NULL; i++)
        {
            Node *temp = t;
            t = t->next;
            delete temp;
        }
        curr->next = t;
        curr = t;
    }
    return head;
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
    int k,m,n;
    cin>>k>>m>>n;
    for(int i=0;i<k;i++){
        int x;
        cin>>x;
        if(i==0){
            insertAtHead(head,x);
        }
        else{
            insertAtTail(head,x);
        }
    }
    head=deleteNnodes(head,m,n);
    printArray(head); 
}
