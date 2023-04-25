#include <iostream>
using namespace std;
 
int ternarySearch(int l, int r, int key, int ar[])
{
    while (r >= l) {
 
        // Find the mid1 and mid2
        int mid1 = l + (r - l) / 3;
        cout << mid1<<endl;
        int mid2 = r - (r - l) / 3;
        cout << mid2<<endl;
 
        if (ar[mid1] == key) {
            return mid1;
        }

        if (ar[mid2] == key) {
            return mid2;
        }
 
        if (key < ar[mid1]) {
            r = mid1 - 1;
            cout<<"If Condition : "<< r << endl;
        }
        else if (key > ar[mid2]) {
            l = mid2 + 1;
            cout <<"Else If Condition : "<< l << endl;
        }
        else {
            l = mid1 + 1;
            r = mid2 - 1;
            cout <<"Else Condition : "<< l << r << endl;
        }
    }

    return -1;
}
 
int main()
{
    int l, r, p, key;
 
    int ar[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    int n = sizeof(ar)/sizeof(ar[0]);
    l = 0;
    r = n - 1;

    key = 5;
 
    p = ternarySearch(l, r, key, ar);
 
    cout << "Index of "<<key<<" is " << p << endl;

}