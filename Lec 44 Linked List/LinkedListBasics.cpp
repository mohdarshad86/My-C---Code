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
    // destructor
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory free for node with data :" << value << endl;
    }
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

void deletionNode(int position, Node *&head)
{

    // deleting start node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;

        // memory free start node
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting any middle node or last

        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
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
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // head pointed to node1
    Node *head = node1;
    Node *tail = node1;

    print(head);

    // insertAtHead(head, 12);
    // print(head);

    // insertAtHead(head, 15);
    // print(head);

    insertAtTail(tail, 12);
    print(head);

    insertAtTail(tail, 15);
    print(head);

    inserAtPos(tail, head, 4, 22);
    print(head);

    // cout << "Head :" << head->data << endl;
    // cout << "Tail :" << tail->data << endl;

    // deletionNode(3, head);
    // print(head);

    // cout << "Head :" << head->data << endl;
    // cout << "Tail :" << tail->data << endl;

    Node *newHead = reverseRec(head);
    // reverseRec(head);
    print(newHead);
    return 0;
}