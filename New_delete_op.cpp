#include <iostream>
using namespace std;
int main()
{
    int count;
    int *numbers;
    cout << "how many numbers you have to store";
    cin >> count;
    numbers = new (nothrow) int[count];
    for (int i = 0; i < count; i++)
    {
        cout << "\n Enter the numbers :";
        cin >> numbers[i];
    }
    cout << "\n You have entered the following numbers";
    for (int j = 0; j < count; j++)
    {
        cout << numbers[j];
    }
    delete[] numbers;
    return 0;
}