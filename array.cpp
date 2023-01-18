#include <iostream>
using namespace std;

int main()
{
    //array implementation of sparse matrix
    int arr[3][6] = {{0,0,1,1,3,3}, {2,4,2,3,1,2}, {3,4,5,7,2,6}};
    string s[3] = {"row", "column", "value"};

    //display matrix
    for(int i = 0; i < 3; i++)
    {
        cout << s[i] << ": ";
        for(int j = 0; j < 6; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}