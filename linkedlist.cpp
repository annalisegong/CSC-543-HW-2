#include <iostream>
using namespace std;

struct Node
{
  public:
    int row;
    int column;
    int value;
    struct Node *nextNode;

    Node(int row, int column, int data)
    {
        this->row = row;
        this->column = column;
        this->value = value;
        this->*nextNode = NULL;
    }
}

struct SinglyLinkedList
{
private:
    Node *head;
    Node *tail;

public:
    SinglyLinkedList()
    {
        this->*head = NULL;
        this->*tail = NULL;
    };

    void append();
    void prepend();
    void display();

    //add newNode to end of list
    void SinglyLinkedList::append(Node newNode)
    {
        if(this->*head == NULL)
        {
            this->*head = newNode;
            this->*tail = newNode;
        }
        else
        {
            tail->nextNode = newNode;
            this->*tail = newNode;
        }
    };
        
    //add newNode to front of list
    void SinglyLinkedList::preprend(Node newNode)
    {
        if(this->*head == NULL)
        {
            this->*head = newNode;
            this->*tail = newNode;
        }
        else
        {
            newNode->nextNode = this->*head;
            this->*head = newNode;
        }
    };

    void SinglyLinkedList::display()
    {
        Node currNode = this->*head;
    
        if(this->*head == NULL)
        {
            cout << "list is empty";
        }
        while(currNode != NULL)
        {
            cout << currNode->value + " ";
            currNode = currNode->nextNode;
        }
    };
}

int main()
{
    class Node{

    };
    SinglyLinkedList list;

    //linked list implementation of sparse matrix
    Node* A = new Node(0,0,0);
    Node* B = new Node(0,1,0);
    Node* C = new Node(0,2,3);
    Node* D = new Node(0,3,4);
    Node* E = new Node(0,4,4);
    Node* F = new Node(1,0,0);
    Node* G = new Node(1,1,0);
    Node* H = new Node(1,2,5); 
    Node* I = new Node(1,3,7);
    Node* J = new Node(1,4,0);
    Node* K = new Node(2,0,0);
    Node* L = new Node(2,1,0);
    Node* M = new Node(2,2,0);
    Node* N = new Node(2,3,0);
    Node* O = new Node(2,4,0);
    Node* P = new Node(3,0,0);
    Node* Q = new Node(3,1,2);
    Node* R = new Node(3,2,6);
    Node* S = new Node(3,3,0);
    Node* T = new Node(3,4,0);

    list.append(Node A);
    list.append(Node B);
    list.append(Node C); 
    list.append(Node D); 
    list.append(Node E);
    list.append(Node F);
    list.append(Node G);
    list.append(Node H);
    list.append(Node I);
    list.append(Node J);
    list.append(Node K);
    list.append(Node L);
    list.append(Node M);
    list.append(Node N);
    list.append(Node O);
    list.append(Node P);
    list.append(Node Q);
    list.append(Node R);
    list.append(Node S);
    list.append(Node T);

    list.display();
    return 0;
}