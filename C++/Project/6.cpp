#include <iostream>

long long factorial(int x)
{
    long long y = 1;
    for (int z = 2; z <= x; ++z)
    {
        y *= z;
    }
    return y;
}

int main()
{
    int x;
    std::cout << "Enter a value for n: ";
    std::cin >> x;

    for (long long y = 0; y <= factorial(x); ++y)
    {
        std::cout << y << std::endl;
    }

    return 0;
}
