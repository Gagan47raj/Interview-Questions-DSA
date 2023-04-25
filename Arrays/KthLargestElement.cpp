#include <bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int N, int K)
{
    sort(arr, arr + N);
    return arr[K - 1];
}

int kthLargest(int arr[], int N, int K)
{
    sort(arr, arr + N);
    return arr[N - K];
}
 
int main()
{
    int arr[] = { 12, 3, 5, 7, 19 };
    int N = sizeof(arr) / sizeof(arr[0]), K = 2;
 

    cout << "K'th smallest element is "
         << kthSmallest(arr, N, K);
         
         cout << endl;

    cout << "K'th largest element is "
         << kthLargest(arr, N, K);
    return 0;
}