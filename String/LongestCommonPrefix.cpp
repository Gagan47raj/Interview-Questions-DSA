#include <bits/stdc++.h>
using namespace std;

//first approach
//We first sort the array of strings.
//Then, we choose the first and last string in the array. 
//[They are supposed to be the most different among all the pairs of strings in the sorted array]
//We just compare how many common characters match from index i = 0 of these two strings.
string longestCommonPrefix(vector<string>& str)
{
    int n = str.size();

    if(n == 0)
    {
        return "";
    }

    string ans = "";

    sort(begin(str),end(str));

    string a = str[0];
    string b = str[n-1];

    for(int  i=0; i<a.size(); i++)
    {
        if(a[i] == b[i])
        {
            ans = ans + a[i];
        }
        else
        {
            break;
        }
    }

    return ans;
}

//simple
string longestCommonPrefixS(vector<string>& str)
{
    string ans = "";

    //for traversing all characters of first string
    for(int i = 0; i<str[0].length();i++)
    {
        char ch = str[0][i];

        bool match = true;

        //for comparing ch with rest of the strings
        for(int j=1; j<str.size(); j++)
        {
            //not match
            if(str[j].size() < i || ch != str[j][i])
            {
                match = false;
                break;
            }
        }

        if(match == false)
        {
            break;
        }else
        {
            ans.push_back(ch);
        }
    }

    return ans;
}

 int main()
    {
        vector<string> v = {"Program","Programmer","Programming"};
        string ans = longestCommonPrefixS(v);
        cout<<"Longest common prefix of given array : "<<ans<<endl;
        return 0;

    }