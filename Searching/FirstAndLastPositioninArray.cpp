#include<iostream>

using namespace std;

void firstAndLast1(int arr[], int n, int t)
{
    int first = -1, last = -1;

    for(int i = 0; i< n;i++)
    {
        if(t != arr[i])
        {
            continue;
            cout << "If Condition 1st : "<<arr[i]<<endl;
        }

        if(first == -1)
        {
            first = i;
            cout << "If Condition 2nd : "<<i<<endl;
        }
        last = i;
    }
    if(first != -1)
    {
        cout << "First Occurence : "<<first << endl;
        cout << "Last Occurence : "<<last << endl;
    }
    else
    {
        cout << "Not Found";
    }
}

int first(int arr[], int n, int t)
{
    int l = 0, h = n-1, res = -1;

    while(l <= h)
    {
        int mid = (l+h)/2;

        if(arr[mid] > t)
        {
            h = mid - 1;
        }
        else if(arr[mid] < t)
        {
            l = mid + 1;
        }
        else
        {
            res = mid;
            h = mid - 1;
        }
    }
    return res;
}

int last(int arr[], int n, int t)
{
     int l = 0, h = n-1, res = -1;

    while(l <= h)
    {
        int mid = (l+h)/2;

        if(arr[mid] > t)
        {
            h = mid - 1;
        }
        else if(arr[mid] < t)
        {
            l = mid + 1;
        }
        else
        {
            res = mid;
            l = mid + 1;
        }
    }
    return res;
}


int main()
{
    int arr[] = {1,2,3,4,5,5,5,5,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int t = 5;

    // firstAndLast1(arr,n,t);

    cout << "First Occurence : "<<first(arr,n,t)<<endl;
    cout << "Last Occurence : "<<last(arr,n,t)<<endl;

    return 0;

}