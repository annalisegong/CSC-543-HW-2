#include <iostream>
using namespace std;

class Node
{
  public:
    int row;
    int column;
    int value;
    Node* nextNode;

    Node(int row, int column, int value)
    {
        this->row = row;
        this->column = column;
        this->value = value;
        this->nextNode = NULL;
    }
};

class SinglyLinkedList
{
private:
    Node* head;
    Node* tail;
public:
    SinglyLinkedList()
    {
        this->head = NULL;
        this->tail = NULL;
    }

    //add newNode to end of list (after tail)
    void append(Node* newNode)
    {
        if(this->head == NULL)
        {
            this->head = newNode;
            this->tail = newNode;
        }
        else
        {
            tail->nextNode = newNode;
            this->tail = newNode;
        }
    }
        
    //add newNode to front of list (before head)
    void preprend(Node* newNode)
    {
        if(this->head == NULL)
        {
            this->head = newNode;
            this->tail = newNode;
        }
        else
        {
            newNode->nextNode = this->head;
            this->head = newNode;
        }
    }

    //displays row, column, and value for every node and shows how nodes are linked
    void display()
    {
        Node* currNode = this->head;
    
        if(this->head == NULL)
        {
            cout << "list is empty";
        }
        while(currNode != NULL)
        {
            cout << "row: " << currNode->row << ", ";
            cout << "column: " << currNode->column << ", ";
            cout << "value: " << currNode->value << endl;
            currNode = currNode->nextNode;
        }
    }
};

//linked list implementation of sparse matrix
int main()
{
    //allocate memory space
    Node* A = NULL;
    Node* B = NULL;
    Node* C = NULL;
    Node* D = NULL;
    Node* E = NULL;
    Node* F = NULL;

    //assign Node values(row, column, value) to allocated memory space
    A = new Node(0,2,3);
    B = new Node(0,4,4);
    C = new Node(1,2,5);
    D = new Node(1,3,7);
    E = new Node(3,1,2);
    F = new Node(3,2,6);
    
    SinglyLinkedList* list = new SinglyLinkedList();

    list->append(A);
    list->append(B);
    list->append(C); 
    list->append(D); 
    list->append(E);
    list->append(F);

    list->display();
    return 0;
}