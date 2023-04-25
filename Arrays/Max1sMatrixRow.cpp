#include<iostream>
using namespace std;
#define R 4
#define C 4


int rowWithMax1s(int arr[R][C], int m, int n)
{
    if(arr == NULL || n == 0)
    {
        return 0;
    }

    int i = 0;
    int j = m-1;
    int maxRow = -1;

    while(i<n and j>=0)
    {
        if(arr[i][j] == 1)
        {
            maxRow = i;
            j--;
            cout<<"If Condition : "<<maxRow<<" "<<j<<" "<<i << endl;
        }
        else
        {
            i++;
            cout<<"Else Condition : "<<maxRow<<" "<<j<<" "<<i << endl;
        }
    }
    return maxRow;
}


int main()
{
    int arr[R][C] = { {0, 0, 0, 1},
                    {0, 1, 1, 1},
                    {1, 1, 1, 1},
                    {0, 0, 0, 0}};
    
    int m = R;
    int n = C;
  
    cout << "Index of row with maximum 1s is " << rowWithMax1s(arr,m,n);
  
    return 0;
}