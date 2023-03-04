#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int result = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n % 10;

        result = (pow(2, i) * bit) + result;
        cout<<result<<endl;
        n = n / 10;
        i++;
    }
    cout << result << endl;
}