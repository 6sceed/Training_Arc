#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int logCount = 0, temp = n;
    while (temp > 1)
    {
        temp /= 2;
        logCount++;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= logCount + 1; j++)
        {
            cout << "(" << i << ", " << j << ")" << endl;
        }
    }

    return 0;
}