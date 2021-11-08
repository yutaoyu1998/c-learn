#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int Factorial(int n)
{
    if (n < 2)
        return 1;
    else
        return n * Factorial(n - 1);
}

int main()
{
    int n;
    cin >> n;
    long result = Factorial(n);
    cout << result;
}