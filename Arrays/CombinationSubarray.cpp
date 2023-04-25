//Given an array arr[] of N integers, 
//the task is to find all the pairs possible from the given array.

#include <bits/stdc++.h>
using namespace std;

void printPairs(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "(" << arr[i] << ", "
                 << arr[j] << ")"
                 << ", ";
        }
    }
}

int main()
{
    int arr[] = { 1, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    printPairs(arr, n);
 
    return 0;
}