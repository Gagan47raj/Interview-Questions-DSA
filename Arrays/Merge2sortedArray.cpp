#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[], int arr2[], int n, int m) {
    
    int i=n-1;
    int j=0;
    while(i>=0 and j<m)
    {
        if(arr1[i]>=arr2[j])
        {
            swap(arr1[i],arr2[j]);
            i--;
            j++;
        }
        else
        {
            break;
        }
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
}

int main() {
    int arr1[] = {1,4,7,8,10};
	int arr2[] = {2,3,9};
    cout<<"Before merge:"<<endl;
    for (int i = 0; i < 5; i++) {
      cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < 3; i++) {
      cout<<arr2[i]<<" ";
    }
    cout<<endl;
    merge(arr1, arr2, 5, 3);
    cout<<"After merge:"<<endl;
    for (int i = 0; i <5; i++) {
      cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < 3; i++) {
      cout<<arr2[i]<<" ";
    }

  }