#include <iostream>
using namespace std;

int main()
{
    //array implementation of sparse matrix
    int arr[4][5] = {{0,0,3,0,4}, {0,0,5,7,0}, {0,0,0,0,0}, {0,2,6,0,0}};

    //display matrix
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}