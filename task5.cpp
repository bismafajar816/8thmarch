#include <iostream>
using namespace std;
// int sparse(int array[][3], int count);
bool check(int array[][3], int size);
main()
{
    int size = 3;
    int array[3][3] = {{1, 2, 3}, {0, 0, 1}, {4, 5, 0}};
    int count = 0;

    cout << check(array, size);
}
bool check(int array[][3], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (array[i][j] == 0)
            {
                count++;
            }
        }
    }

    int mul = (size * 3) / 2;
    if (count > mul)
    {
        return true;
    }
    else
    {
        return false;
    }
}
