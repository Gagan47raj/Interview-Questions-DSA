#include <bits/stdc++.h>
using namespace std;
 
//brute force
bool subArrayExists(int arr[], int N)
{
    int flag = 0;
    for(int i = 0;i<N;i++)
    {
        int sum = 0;
        for(int j=i;j<N;i++)
        {
            sum += arr[j];
            if(sum==0)
            {
                flag = 1;
                break;
            }
        }
        if(flag==1)
        {
            break;
        }
    }

    if(flag==1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//optimized
bool subArraySumZero(int arr[], int N)
{
    int sum = 0;
    int flag = 0;
    unordered_map<int,int> map;
    for(int i = 1; i<=N; i++)
    {
        sum += arr[i];

        if(sum == 0 or map[sum] or arr[i] == 0)
        {
            flag = 1;
            break;
        }
        else
        {
            map[sum] = 1;
        }
    }

    if(flag == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int arr[] = {4, 2, -3, 1, 6};
    int N = sizeof(arr) / sizeof(arr[0]);
 
    if (subArrayExists(arr, N))
        cout << "Found a subarray with 0 sum";
    else
        cout << "No Such Sub Array Exists!";
    return 0;
}