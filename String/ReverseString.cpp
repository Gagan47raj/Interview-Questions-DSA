#include <bits/stdc++.h>
using namespace std;

//using first and last swap
void firstLast(string& str)
{
    int n = str.length();

    for(int i = 0; i< n/2; i++)
    {
        cout<<str[i]<<" "<<str[n-i-1]<<endl;
        swap(str[i],str[n-i-1]);
    }
}

void reverseLoop(string str)
{
    for (int i = str.length() - 1; i >= 0; i--)
        cout << str[i];
}





int main()
{
    string str = "Outline";
    //firstLast(str);
    //reverseLoop(str);
    //reverse(str.begin(), str.end());
    
    cout << str;
    return 0;
}