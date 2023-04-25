#include <bits/stdc++.h>
using namespace std;
 
//reverseMethod but space complexity is linear
string reverseMethod(string S)
{
    string P = S;

    reverse(P.begin(), P.end());
 
    if (S == P) {
        return "Yes";
    }
    else {
        return "No";
    }
}

string firstToLastCheck(string S)
{
    for (int i = 0; i < S.length() / 2; i++) {
 
        if (S[i] != S[S.length() - i - 1]) {
            return "No";
        }
    }
    return "Yes";
}
 
int main()
{
    string S = "ABCDCBA";
    cout << reverseMethod(S);
 
    return 0;
}