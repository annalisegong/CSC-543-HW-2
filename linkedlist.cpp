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

void displayList(Node* n)
{
    while(n != NULL)
    {
        for(int i = 0; i < 5; i++)
        {
           cout << n->value;
           n = n->nextNode; 
        }
        cout << endl;
    }
}

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

    //assign Node values(row, column, value) to correct memory space
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

    //link each node to following node
    A->nextNode = B;
    B->nextNode = C;
    C->nextNode = D;
    D->nextNode = E;
    E->nextNode = F;
    F->nextNode = G;
    G->nextNode = H;
    H->nextNode = I;
    I->nextNode = J;
    J->nextNode = K;
    K->nextNode = L;
    L->nextNode = M;
    M->nextNode = N;
    N->nextNode = O;
    O->nextNode = P;
    P->nextNode = Q;
    Q->nextNode = R;
    R->nextNode = S;
    S->nextNode = T;

    displayList(A);
    return 0;

    /*list->append(Node A);
    list->append(Node B);
    list->append(Node C); 
    list->append(Node D); 
    list->append(Node E);
    list->append(Node F);
    list->append(Node G);
    list->append(Node H);
    list->append(Node I);
    list->append(Node J);
    list->append(Node K);
    list->append(Node L);
    list->append(Node M);
    list->append(Node N);
    list->append(Node O);
    list->append(Node P);
    list->append(Node Q);
    list->append(Node R);
    list->append(Node S);
    list->append(Node T);

    list->display();*/
}

/*struct SinglyLinkedList
{
private:
    Node* head;
    Node* tail;
public:
    SinglyLinkedList()
    {
        this->*head = NULL;
        this->*tail = NULL;
    };

    //add newNode to end of list
    void append(Node newNode)
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
    void preprend(Node newNode)
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

    void display()
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
};*/