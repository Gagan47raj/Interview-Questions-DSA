#include <bits/stdc++.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

void closestToZero(int arr[], int n)
{
    if(n < 2)
    {
        cout << "Invalid";
        return;
    }

    int left_min = 0;
    int right_min = 1;
    int sum_min = arr[0] + arr[1];

    for(int i = 0; i<n - 1;i++)
    {
        for(int j = i+1; j<n; j++)
        {
           int sum = arr[i] + arr[j];
           cout<<"on "<<i<<" "<<j<<" sum is  "<<sum<<" and sum_min is : " <<sum_min<< " "<<endl;

           if(abs(sum_min) > abs(sum))
           {
            sum_min = sum;
            left_min = i;
            right_min = j;
           }
        }
    }

    cout << "Sum closest to zero elements : " << arr[left_min] << " and " << arr[right_min];
}

void closestToZero(int arr[], int n)
{
    if (n < 2) {
        cout << "Invalid";
        return;
    }

    int sum = 0, sum_min = INT_MAX ;
    int start = 0, end = n - 1;
    int start_min = 0, end_min = n - 1;

    // sort the elements
    sort(arr, arr + n);

    while (start < end) {
        sum = arr[start] + arr[end];

        // finding minimum sum
        if (abs(sum) < abs(sum_min)) {
            sum_min = sum;
            start_min = start;
            end_min = end;
        }
        if (sum < 0)
            start++;
        else
            end--;
    }

    cout << "Sum closest to zero elements: "
         << arr[start_min] << " and " << arr[end_min];
}

int main()
{
    int arr[] = {1,-3,10,2,-2,8};

    int n = sizeof(arr)/sizeof(arr[0]);

    closestToZero(arr, n);

    return 0;
}