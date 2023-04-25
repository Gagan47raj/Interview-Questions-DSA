#include <bits/stdc++.h>
using namespace std;


int pairCount(int arr[], int n, int k)
{
    unordered_map<int,int> map;
    int ans = 0;

    for(int i = 0;i<n;i++)
    {
        int val = k - arr[i];
        if(map[val])
        {
            ans += map[val];
        }
        map[arr[i]]++;
        
    }

    cout<<endl;

    for(auto i : map)
    {
        cout<<i.first<<" "<<i.second<<", " << endl;
    }
    return ans;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 8;
   
    cout<<endl;
    cout << "Number of pairs are : " << pairCount(arr,n,k);
    return 0;
}
