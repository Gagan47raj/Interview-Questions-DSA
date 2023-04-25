#include<bits/stdc++.h>

using namespace std;

void merge(int arr[], int l, int mid, int r, int n)
{
    int i = l;
    int j = mid + 1;
    int inc = l;

    int temp[n];

    while(i <= mid && j <= r)
    {
        if(arr[i] <= arr[j])
        {
            temp[inc] = arr[i];
            i++;
            inc++;
        }
        else
        {
            temp[inc] = arr[j];
            j++;
            inc++;
        }
    }

    while(i <= mid)
    {
        temp[inc] = arr[i];
        i++;
        inc++;
    }

    while(j <= r)
    {
        temp[inc] = arr[j];
        j++;
        inc++;
    }

    for(int x = l; x<=r; x++)
    {
        arr[x] = temp[x];
    }
}

void mergeSort(int arr[],int l, int r, int n)
{
    if(l < r)
    {
        int mid = (l+r)/2;

        mergeSort(arr,l,mid,n);
        mergeSort(arr,mid+1,r,n);

        merge(arr,l,mid,r,n);
    }
}




int main()
{
    int arr[] = {4,2,5,1,7,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr ,0, (n-1), n);

    for(int i = 0; i<n;i++)
    {
        cout << arr[i]<<" ";
    }
    return 0;
}