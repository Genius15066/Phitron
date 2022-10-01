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
 
void printOdd(Node *n)
{
    while (n != NULL)
    {
        n->value%2!=0?cout << n->value:cout<< -1;
        n->next!=NULL?cout<<" -> ":cout<<"";
        n=n->next;
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
    printOdd(head);
}
