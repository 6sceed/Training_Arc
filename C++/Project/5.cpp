#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Exponential

string decimalToBinary(int n)
{
    if (n == 0)
    {
        return "0";
    }
    string binaryString = "";
    while (n > 0)
    {
        binaryString = (n % 2 == 0 ? "0" : "1") + binaryString;
        n /= 2;
    }
    return binaryString;
}
int main()
{
    int n;
    cout << "Enter a value for n: ";
    cin >> n;
    for (int i = 0; i < pow(2, n); ++i)
    {
        cout << decimalToBinary(i) << endl;
    }
    return 0;
}