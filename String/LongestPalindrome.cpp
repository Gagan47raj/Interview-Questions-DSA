#include <bits/stdc++.h>
using namespace std;
 

string longestPalindrome(string S)
{
    int n = S.length();
    int start = 0;
    int end = 1;

    for(int i=1; i<n;i++)
    {
        //even substring
        int left = i-1;
        int right = i;

        while(left >= 0 && right < n && S[left] == S[right])
        {
            if(right - left + 1 > end)
            {
                start = left;
                end = right-left+1;
            }
            left--;
            right++;
        }

        //odd substring
         left = i-1;
         right = i+1;

        while(left >= 0 && right < n && S[left] == S[right])
        {
            if(right - left + 1 > end)
            {
                start = left;
                end = right-left+1;
            }
            left--;
            right++;
        }
    }
    string ans = "";
    for(int i = start; i < start + end; i++)
    {
        ans += S[i];
    }
    return ans;
}

 
int main()
{
    string S = "CBABD";
    cout << longestPalindrome(S);
 
    return 0;
}