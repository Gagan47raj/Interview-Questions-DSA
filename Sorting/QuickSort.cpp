#include<bits/stdc++.h>

using namespace std;

int partition(int arr[],int low,int high,int pivot)
{
    int i = low;
    int j = low;

    while(i <= high)
    {
        if(arr[i] > pivot)
        {
            i++;
        }
        else
        {
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
    }
    return j-1;
}

void quickSort(int arr[], int low, int high)
{
    if(low < high)
    {
        int pivot = arr[high];
        int position = partition(arr,low,high,pivot);

        quickSort(arr,low,position-1);
        quickSort(arr,position+1,high);
    }
}


int main()
{
    int arr[] = {4,2,5,1,7,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr,0,n-1);

    for(int i = 0; i<n;i++)
    {
        cout << arr[i]<<" ";
    }
    return 0;
}