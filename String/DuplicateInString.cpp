#include <bits/stdc++.h>
using namespace std;

//using map time O(nlogn) and space o(n)
void usingMap(string str)
{
    map<char, int> count;
    for (int i = 0; i < str.length(); i++) {
        count[str[i]]++;
    }
 
    for (auto it : count) {
        if (it.second > 1)
            cout << it.first << ", count = " << it.second
                 << "\n";
    }
}

//sorting and find duplicates time O(nlogn) and space O(1)
void printDuplicates(string str){
        int len = str.length();
     
    sort(str.begin(), str.end());

    for(int i = 0; i < len; i++) {
        int count = 1;
         
        while(i < len-1 && str[i] == str[i+1]) {
            count++;
            i++;
        }
        
        if(count > 1) {
            cout << str[i] << ", count = " << count << endl;
        }
    }
     
}
/* Driver code*/
int main()
{
    string str = "test string";
    usingMap(str);
    return 0;
}