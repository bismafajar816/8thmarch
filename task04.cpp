#include <iostream>
using namespace std;
float AverageOfArray(int array[], int size);
main()
{
    int size;

    cout << "Enter size: ";
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter number: ";
        cin >> array[i];
    }
    cout << AverageOfArray(array, size);
}
float AverageOfArray(int array[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + array[i];
    }
    return sum / size;
}