#include <iostream>
using namespace std;
int main()
{
    int i, n, j, a[30];
    cout << "enter the no. elements : ";
    cin >> n;
    cout << "\nEnter the values: ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    cout << "\nEnter the position of element to be deleted : ";
    cin >> j;
    for (i = j; i < n; i++)
    {
        a[i - 1] = a[i];
    }
    //n--;
    cout << "the array after deletion is ";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    return 0;
}