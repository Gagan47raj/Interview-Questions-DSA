#include<bits/stdc++.h>
using namespace std;
 

//for sorted array
int removeDuplicates(int arr[], int n)
{
    if (n==0 || n==1)
        return n;
 
    
    int j = 0;
 
    for (int i=0; i < n-1; i++)
        if (arr[i] != arr[i+1])
            arr[j++] = arr[i];
 
    arr[j++] = arr[n-1];
 
    return j;
}

//for unsorted array

// void removeDups(int arr[], int n)
// {
//     unordered_map<int, bool> mp;
 
//     for (int i = 0; i < n; ++i) {
 
//         if (mp.find(arr[i]) == mp.end()) {
//             cout << arr[i] << " ";
//         }
 
//         // Insert the element in the hash map
//         mp[arr[i]] = true;
//     }
// }
 
int main()
{
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
    //int arr[] = {1, 2, 5, 1, 7, 2, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

     n = removeDuplicates(arr, n);

    //removeDups(arr, n);

     for (int i=0; i<n; i++)
         cout << arr[i] << " ";
 
    return 0;
}