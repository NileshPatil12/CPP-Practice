#include <iostream>
using namespace std;
int main()
{
    int a[30], i, j, n, temp;
    cout << "\nEnter the number of elements to insert ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    j = n - 1;
    for (i = 0; i < j; i++)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        j--;
    }
    for (i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}