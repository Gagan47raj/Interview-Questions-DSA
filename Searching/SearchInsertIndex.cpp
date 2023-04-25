#include<iostream>

using namespace std;

//linear search
int searchInsert(int arr[], int n, int t)
{
    for(int i = 0; i<n;i++)
    {
        if(arr[i] == t)
        {
            return i;
        }
        else if(arr[i] > t)
        {
            return i;
        }
    }
    return n;
}

//binary search
int searchInsertB(int arr[], int n, int t)
{
    int start = 0;
    int end = n - 1;

    while(start <= end)
    {
        int mid = (start+end)/2;

        if(arr[mid] == t)
        {
            return mid;
        }
        else if(arr[mid] < t)
        {
            start = mid + 1;
        }
        else 
        {
            end = mid - 1;
        }
    }
    return end + 1;
}



int main()
{
    int arr[] = { 1, 2, 5, 6 , 8 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int t = 7;
    cout << searchInsertB(arr, n, t) << endl;
    return 0;
}