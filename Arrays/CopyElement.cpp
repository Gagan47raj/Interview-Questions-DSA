#include <iostream>
using namespace std;
int main()
{
    int initA[10], finA[10], i, size;
    cout << "Input the size of the array : ";
    cin >> size;

    cout << "Input the elements of the first array";
    for (i = 0; i < size; i++)
    {
        cin >> initA[i];
    }

    for (i = 0; i < size; i++)
    {
        finA[i] = initA[i];
    }

    cout << "The final array is\n";
    for (i = 0; i < size; i++)
        cout << finA[i] << " ";

    return 0;
}