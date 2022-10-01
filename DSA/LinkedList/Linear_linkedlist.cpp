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

struct Test
{
    int position[1000];
};
// Find the length of the linkedlist
int length(Node *&head)
{

    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

// Insertion at the head of the linked list
void insertAtHead(Node *&head, int val)
{
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}

// Insertion at the end of the linked list
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

// Insertion at the specific position of the linked list
void insertAtPosition(Node *&head, int pos, int val)
{
    Node *newnode = new Node(val);
    Node *temp = head;
    int i = 0;
    while (i < pos - 2)
    {
        temp = temp->next;
        i++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

// Find a value position in an unique array
int searchByValueUnique(Node *&head, int val)
{
    Node *temp = head;
    int pos = 1;

    if (temp == NULL)
    {
        return -1;
    }

    while (temp->value != val)
    {
        if (temp->next == NULL)
        {
            return -1;
        }
        temp = temp->next;
        pos++;
    }
    return pos;
}

// Serach by value in duplicate array
Test searchByDuplicate(Node *&head, int val)
{
    Node *temp = head;
    Test T;
    int k = 1, count = 1;
    while (temp != NULL)
    {
        if (temp->value == val)
        {
            T.position[k] = count;
            k++;
        }
        temp = temp->next;
        count++;
    }
    T.position[0] = k;
    return T;
}

// insert a value after a specific value
void searchByValueUnique(Node *&head, int val, int val2)
{
    int position = searchByValueUnique(head, val);
    Node *temp = head;
    insertAtPosition(head, position + 1, val2);
}

// Delete a value from the linked list
void deletionAtHead(Node *&head)
{

    Node *temp = head;
    if (head == NULL)
    {
        cout << "Linked list is empty" << endl;
    }
    else
    {
        head = head->next;
        delete temp;
    }
}

// deletion at the end of the linked list
void deletionAtTail(Node *&head)
{
    Node *temp = head;
    if (temp != NULL && temp->next != NULL)
    {
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        Node *delNode = temp->next;
        temp->next = NULL;
        delete delNode;
    }
    else
    {
        if (temp == NULL)
        {
            deletionAtHead(head);
        }
        else
        {
            cout << "Linked list is empty" << endl;
        }
    }
}

// Print the linked list
void printArray(Node *n)
{
    while (n != NULL)
    {
        cout << n->value << " ";
        n = n->next;
    }
    cout << endl;
}

// print in reverse order linked list
void printReverse(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    printReverse(head->next);
    cout << head->value << " ";
}

int main()
{
    Node *head = NULL;
    int n;
    cout << "Choice List:\n";
    cout << "1. Insert At Head\n";
    cout << "2. Insert At Tail\n";
    cout << "3. Insert At Specific position\n";
    cout << "4. Find a value position in an unique array\n";
    cout << "5. Find a value position in an duplicate element containing array\n";
    cout << "6. Insert a value after a specific value\n";
    cout << "8. Delete the head of the linkedlist\n";
    cout << "9. Delete the tail of the linkedlist\n";
    cout << "A. Length of the linkedlist\n";
    cout << "B. Print the linkedlist\n";
    cout << "C. Print the linkedlist in reverse order\n";
    bool c = true;
    while (c != false)
    {
        int n, pos;
        char choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case '1':
            cout << "Enter value: ";
            cin >> n;
            insertAtHead(head, n);
            break;
        case '2':
            cout << "Enter value: ";
            cin >> n;
            insertAtTail(head, n);
            break;
        case '3':
            cout << "Enter position and value respectively: ";
            cin >> pos >> n;
            insertAtPosition(head, pos, n);
            break;
        case '4':
            cout << "Enter value to find its position : ";
            cin >> n;
            pos = searchByValueUnique(head, n);
            if (pos != -1)
            {
                cout << "Position is: " << pos << endl;
            }
            else
            {
                cout << "Not exist in the linkedlist" << endl;
            }
            break;
        case '5':
            cout << "Enter value to find its position : ";
            cin >> n;
            Test T;
            cout << "The number is at position :";
            T = searchByDuplicate(head, n);
            if (T.position[0] == 1)
            {
                cout << "Not exist in the linkedlist" << endl;
            }
            else
            {
                int size = T.position[0];
                for (int i = 1; i < size; i++)
                {
                    cout << T.position[i] << " ";
                    if (i != T.position[0] - 1)
                    {
                        cout << ",";
                    }
                }
                cout << endl;
            }
            break;
        case '6':
            cout << "Enter the value after which you want to insert: ";
            cin >> n;
            cout << "Enter the value you want to insert: ";
            int value;
            cin >> value;
            searchByValueUnique(head, n, value);
            break;
        case '8':
            deletionAtHead(head);
            break;
        case '9':
            deletionAtTail(head);
            break;

        case 'A':
            cout << "Length of linked list is: " << length(head) << endl;
            break;
        case 'B':
            cout << "Linkedlist is (actual order): ";
            printArray(head);
            break;
        case 'C':
            cout << "Linkedlist is (reverse order): ";
            printReverse(head);
            cout << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
            c = false;
            break;
        }
    }
}