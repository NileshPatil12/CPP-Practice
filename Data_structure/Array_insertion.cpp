#include <iostream>
using namespace std;
int main()
{
    int i, n, j, a[30], num;
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
    cout << "\nEnter the position of element to be inserted : ";
    cin >> j;
    for (i = n + 1; i >= j - 1; i--)
    {
        a[i] = a[i - 1];
    }
    n++;
    cout << "\n Number to be inserted :";
    cin >> num;

    a[j - 1] = num;
    cout << "the array after insertion is ";
    for (i = 0; i < n ; i++)
    {
        cout << a[i] << "\n";
    }
    return 0;
}