#include <iostream>
#include <set>
using namespace std;

void removeDuplicates(int arr[], int n)
{
    set<int> s;
    for (int i = 0; i < n; i++) {
        s.insert(arr[i]);
    }
    set<int>::iterator it;
    for (it = s.begin(); it != s.end(); ++it)
        cout << *it << " ";
}

int main()
{
    int arr[] = { 4, 2, 3, 3, 2, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    removeDuplicates(arr, n);
}
