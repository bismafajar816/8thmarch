#include <iostream>
using namespace std;
void combine(int array1[][3], int array2[][3], int array3[][6], int size);
main()
{
    int size = 1;
    int array1[2][3] = {{1, 2, 3}, {9, 10, 11}};
    int array2[2][3] = {{4, 5, 6}, {12, 13, 14}};
    int array3[2][6];
    combine(array1, array2, array3, size);
}
void combine(int array1[][3], int array2[][3], int array3[][6], int size)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            array3[i][j] = array1[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 3; j < 6; j++)
        {
            array3[i][j] = array2[i][j - 3];
        }
        cout << endl;
    }
    for (int j = 0; j < 2; j++)
    {
        for (int i = 0; i < 6; i++)
        {
            cout << array3[j][i] << " ";
        }
        cout << endl;
    }
}