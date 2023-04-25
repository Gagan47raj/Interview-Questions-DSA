#include<iostream>
#include<algorithm>

using namespace std;

void reverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void display(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
   cout << endl;
}

int main()
{
    int arr[] = {2,1,7,8,4,9};
     
    int n = sizeof(arr) / sizeof(arr[0]);
 
    display(arr, n);
     
    reverseArray(arr, 0, n-1);

    // reverse(arr, arr+n);
     
    cout << "Reversed array is" << endl;
     
    display(arr, n);
     
    return 0;
}

