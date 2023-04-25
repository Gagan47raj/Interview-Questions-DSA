#include<iostream>

using namespace std;

int maxSumSubArray(int arr[],int n)
	{
		int min = INT_MIN;
        int max = 0;

        int start = 0, end = 0, mstart = 0;

        for(int i = 0; i < n; i++)
        {
            max += arr[i];

            if(min < max)
            {
                min = max;
                end = i;
                mstart = start;
            }
            

            if(max < 0)
            {
                max = 0;
                start = i+1;
            }
        }

        cout <<"Start : "<<mstart << endl;
        cout <<"End : "<<end << endl;

        return min;
	}

int main()
{
    int arr[] = {-2,-3,4,-1,-2,1,5,-3};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << maxSumSubArray(arr,n);

    return 0;
}