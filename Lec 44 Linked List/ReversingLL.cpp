#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor use in LL
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    // // destructor
    // ~Node()
    // {
    //     int value = this->data;
    //     if (this->next != NULL)
    //     {
    //         delete next;
    //         this->next = NULL;
    //     }
    //     cout << "Memory free for node with data :" << value << endl;
    // }
};

void insertAtHead(Node *&head, int d)
{
    // create new node
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

void inserAtPos(Node *&tail, Node *&head, int position, int d)
{
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    // creating a node for d
    Node *NodeToInsert = new Node(d);

    NodeToInsert->next = temp->next;
    temp->next = NodeToInsert;
}

Node *reverseRec(Node *&head)
{

    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *newHead = reverseRec(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead;
}

int main()
{
    Node *node1 = new Node(10);

    // head pointed to node1
    Node *head = node1;
    Node *tail = node1;

    insertAtHead(head, 12);
    insertAtHead(head, 15);

    insertAtTail(tail, 22);
    insertAtTail(tail, 25);

    inserAtPos(tail, head, 4, 33);
    // print the list
    cout << "the Linked List is :";
    print(head);

    Node *newHead = reverseRec(head);
    // printing the reverse list
    cout << "The reversed list is :";
    print(newHead);

    Node *node2 = new Node(100);

    // head pointed to node1
    Node *headd = node2;
    Node *taill = node2;

    insertAtHead(headd, 112);
    insertAtHead(headd, 115);

    insertAtTail(taill, 122);
    insertAtTail(taill, 125);

    inserAtPos(taill, headd, 4, 133);
    // print the list
    cout << "the 2nd Linked List is :";
    print(headd);

    Node *newHeadd = reverseRec(headd);
    // printing the reverse list
    cout << "The 2nd reversed list is :";
    print(newHeadd);
    return 0;
}