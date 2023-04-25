#include<bits/stdc++.h>

using namespace std;



int majorityElement(int arr[], int n) {

        int majority,count=0;

        for(int i=0;i<n;i++)
        {
            if(count)
            {
                count+=(arr[i]==majority ? 1 : -1);
            }
            else
            {
                majority=arr[i];
                count=1;
            }
        }
        return majority;
    }


int main()
{
    int arr[] = {5,6,2,1,1,1,2,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
   
    cout<< majorityElement(arr, n);

    return 0;
}