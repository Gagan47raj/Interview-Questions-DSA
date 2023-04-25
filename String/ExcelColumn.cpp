#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int columnIndex(string str)
{
    int ans = 0;
    for(int i = 0; i<str.length(); i++)
    {
        ans *= 26;
        ans += (str[i] - 'A' + 1);
    }
    return ans;
}

int main()
{
    string str = "AB";

    cout << "Index is : "<<columnIndex(str);
}

// int ans = 0;
//     int p = 0;

//     for(int i = str.length() - 1; i>=0; i++)
//     {
//         char c = str[i];
//         int val = (int)c - 65 + 1;
//         ans += val * pow(26,p);
//         p++;
//     }