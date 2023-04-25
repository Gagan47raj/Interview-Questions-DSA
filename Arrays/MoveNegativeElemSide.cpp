
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

//Naive Approach O(nlogn) O(n)
void move(vector<int>& arrV){
  sort(arrV.begin(),arrV.end());
}

//optimized approach O(n)
void rearrange(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main() {
 
    vector<int> arrV = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };

    int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };

    int n = sizeof(arr) / sizeof(arr[0]);
     // move(arrV);
      rearrange(arr,n);

    for (int e : arr)
    {
        cout<< e << " ";
    }
       
    return 0;
}