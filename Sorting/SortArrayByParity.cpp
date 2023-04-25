#include<bits/stdc++.h>

using namespace std;

void sortArrayByParity(int arr[], int n)
{
    int i = 0;
    int j = n-1;

    while(i < j)
    {
        if(arr[i]%2==0)
        {
            i++;
        }
        else
        {
            swap(arr[i],arr[j]);
            j--;
        }
    }

    for(int i = 0; i<n;i++)
    {
        cout << arr[i]<<" ";
    }

}


int main()
{
    int arr[] = {4,2,5,1,7,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    sortArrayByParity(arr,n);

    
    return 0;
}