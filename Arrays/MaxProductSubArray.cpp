#include <iostream>
using namespace std;

int maxProduct(int nums[], int n) {
        int maxi = nums[0];
        int mini = nums[0];
        int ans = nums[0];
        for(int i = 1;i < n;i++){
            if(nums[i] < 0){
                swap(maxi,mini);
            }
            maxi = max(nums[i],maxi*nums[i]);
            mini = min(nums[i],mini*nums[i]);
            ans = max(ans,maxi);
        }
        return ans;
}

int main()
{
    int arr[] = {1, -2, -3, 0, 7, -8, -2};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << maxProduct(arr,n);

    return 0;
}