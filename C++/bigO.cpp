#include <iostream>
using namespace std;

// Factorial

int main()
{
    int n = 3;
    int a[3] = {1, 2, 3};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == i)
                continue;
            for (int k = 0; k < n; k++)
            {
                if (k == i || k == j)
                    continue;
                cout << a[i] << " " << a[j] << " " << a[k] << endl;
            }
        }
    }

    return 0;
}
