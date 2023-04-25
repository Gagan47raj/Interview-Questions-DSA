#include<iostream>

using namespace std;

int OddandEven(int arr[], int n);

int main()
{
   int n, i;
   cout<<"Enter the value of n: ";
   cin>>n;

   int arr[n];

   cout<<"Enter any "<<n<<" numbers: ";
   for(i=0; i<n; i++)
      cin>>arr[i];

   OddandEven(arr,n);

   return 0;
}

int OddandEven(int arr[], int n)
{
    int i;
   cout<<"\nList of Odd Numbers:\n";
   for(i=0; i<n; i++)
   {
      if(arr[i]%2!=0)
         cout<<arr[i]<<" ";
   }
   cout<<endl;

   cout<<"\nList of Even Numbers:\n";
   for(i=0; i<n; i++)
   {
      if(arr[i]%2==0)
         cout<<arr[i]<<" ";
   }
   cout<<endl;

   return 0;
}