#include <iostream>
using namespace std;

int main()
{
    int arr1[25];
    int arr2[25];

    for (int i = 0; i < 25; i++)
    {
        arr1[i] = i + 1;
    }

    for (int i = 0; i < 25; i++)
    {
        arr2[i] = (i + 1) * 10;
    }

    cout << "Before Swapping:" << endl;

    cout << "Array 1: ";
    for (int i = 0; i < 25; i++)
    {
        cout << arr1[i] << " ";
    }

    cout << endl;

    cout << "Array 2: ";
    for (int i = 0; i < 25; i++)
    {
        cout << arr2[i] << " ";
    }

    cout << endl << endl;

    int *p1 = arr1;
    int *p2 = arr2;

    for (int i = 0; i < 25; i++)
    {
        int temp = *(p1 + i);
        *(p1 + i) = *(p2 + i);
        *(p2 + i) = temp;
    }

    cout << "After Swapping:" << endl;

    cout << "Array 1: ";
    for (int i = 0; i < 25; i++)
    {
        cout << arr1[i] << " ";
    }

    cout << endl;

    cout << "Array 2: ";
    for (int i = 0; i < 25; i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}