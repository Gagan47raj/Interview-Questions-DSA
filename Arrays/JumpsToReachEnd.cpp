#include <bits/stdc++.h>
using namespace std;
 
int max(int x, int y)
{
    return (x > y) ? x : y;
}
 
int minJumps(int arr[], int n)
{
 
    int maxReach = arr[0];
    int step = arr[0];
    int jump = 1;

    if(n==1)
    {
        return 0;
    }
    else if(arr[0] == 0)
    {
        return -1;
    }
    else{
        for(int i=1;i<n;i++)
        {
            if(i == n-1)
            {
                return jump;
            }

            maxReach = max(maxReach, i+arr[i]);
            step--;

            if(step == 0){
                jump++;
                if(i >= maxReach)
                {
                    return -1;
                }
                step = maxReach - i; 
            }
        }
    }
    return 0;
}
 

int main()
{
    int arr[] = { 1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9 };
    int size = sizeof(arr) / sizeof(int);
 
    cout << ("Minimum number of jumps to reach end is %d ",
             minJumps(arr, size));
    return 0;
}