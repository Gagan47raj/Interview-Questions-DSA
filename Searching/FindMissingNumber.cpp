#include<iostream>

using namespace std;

void findMissing(int arr[], int n)
{
    int i;
    int temp[n+1];

    for(int i = 0; i<=n; i++)
    {
        temp[i] = 0;
    }

    for(int i = 0; i<n; i++)
    {
        cout<<"Second for loop : "<<temp[i]<<endl;
        temp[arr[i] - 1] = 1;
    }

    int ans;

    for(int i=0; i<=n;i++)
    {
        if(temp[i] == 0)
        {
            ans = i+1;
        }
    }

    cout << ans << endl;
}



int main()
{
    int arr[] = { 1, 2, 5, 6 , 8 };
    int n = sizeof(arr) / sizeof(arr[0]);

    findMissing(arr, n);
    return 0;
}