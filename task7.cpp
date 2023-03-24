#include <iostream>
using namespace std;
void rotate(int array[], int size, int number);
main()
{
    int size = 10;
    int array[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int number;
    cout << "Enter number to rotate array: ";
    cin >> number;
    rotate(array, size, number);
}
void rotate(int array[], int size, int number)
{
    int zero;
    for (int j = 0; j < number; j++)
    {
        for (int i = 0; i < size; i++)
        {
            if (i == 0)
            {
                zero = array[0];
            }
            else
            {
                array[i-1] = array[i];
            }
           
        }
          array[size - 1] = zero;
        
    }

   
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << "\t";
    }
}
