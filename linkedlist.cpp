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

    void display()
    {
        Node* currNode = this->head;
    
        if(this->head == NULL)
        {
            cout << "list is empty";
        }
        while(currNode != NULL)
        {
            //i < 5 because 5 = # of values that should be in a row
            for(int i = 0; i < 5; i++)
            {
                cout << currNode->value << " ";
                currNode = currNode->nextNode;
            }
            cout << endl;
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
    Node* G = NULL;
    Node* H = NULL; 
    Node* I = NULL;
    Node* J = NULL;
    Node* K = NULL;
    Node* L = NULL;
    Node* M = NULL;
    Node* N = NULL;
    Node* O = NULL;
    Node* P = NULL;
    Node* Q = NULL;
    Node* R = NULL;
    Node* S = NULL;
    Node* T = NULL;

    //assign Node values(row, column, value) to allocated memory space
    A = new Node(0,0,0);
    B = new Node(0,1,0);
    C = new Node(0,2,3);
    D = new Node(0,3,4);
    E = new Node(0,4,4);
    F = new Node(1,0,0);
    G = new Node(1,1,0);
    H = new Node(1,2,5); 
    I = new Node(1,3,7);
    J = new Node(1,4,0);
    K = new Node(2,0,0);
    L = new Node(2,1,0);
    M = new Node(2,2,0);
    N = new Node(2,3,0);
    O = new Node(2,4,0);
    P = new Node(3,0,0);
    Q = new Node(3,1,2);
    R = new Node(3,2,6);
    S = new Node(3,3,0);
    T = new Node(3,4,0);
    
    SinglyLinkedList* list = new SinglyLinkedList();

    list->append(A);
    list->append(B);
    list->append(C); 
    list->append(D); 
    list->append(E);
    list->append(F);
    list->append(G);
    list->append(H);
    list->append(I);
    list->append(J);
    list->append(K);
    list->append(L);
    list->append(M);
    list->append(N);
    list->append(O);
    list->append(P);
    list->append(Q);
    list->append(R);
    list->append(S);
    list->append(T);

    list->display();
    return 0;
}