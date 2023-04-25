#include <algorithm>
#include <iostream>
using namespace std;
 
struct Pair {
    int min;
    int max;
};

//O(nlogn) 
Pair getMinMax(int arr[], int n)
{
    Pair minmax;
 
    sort(arr, arr + n);
 
    minmax.min = arr[0];
    minmax.max = arr[n - 1];
 
    return minmax;
}

//O(n)
// Pair getMinMax(int arr[], int n)
// {
//     struct Pair minmax;    
//     int i;
     
//     // If there is only one element
//     // then return it as min and max both
//     if (n == 1)
//     {
//         minmax.max = arr[0];
//         minmax.min = arr[0];    
//         return minmax;
//     }
     
//     // If there are more than one elements,
//     // then initialize min and max
//     if (arr[0] > arr[1])
//     {
//         minmax.max = arr[0];
//         minmax.min = arr[1];
//     }
//     else
//     {
//         minmax.max = arr[1];
//         minmax.min = arr[0];
//     }
     
//     for(i = 2; i < n; i++)
//     {
//         if (arr[i] > minmax.max)    
//             minmax.max = arr[i];
             
//         else if (arr[i] < minmax.min)    
//             minmax.min = arr[i];
//     }
//     return minmax;
// }

 
int main()
{
    int arr[] = { 121, 68,98,1000,32,8701 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
 
    Pair minmax = getMinMax(arr, arr_size);
 
    cout << "Minimum element is " << minmax.min << endl;
    cout << "Maximum element is " << minmax.max << endl;
 
    return 0;
}