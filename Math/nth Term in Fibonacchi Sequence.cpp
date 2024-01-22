#include <iostream>
using namespace std;

int fib(int n)
{
    if (n < 2)
    {
        return n;
    }
    else
    {
        int a = 0;
        int b = 1;
        int next;
        for (int i = 2; i <= n; i++)
        {
            next = a + b;
            a = b;
            b = next;
        }
        return next;
    }
}

int main()
{
    int n;
    cin >> n;
    int ans = fib(n);
    cout << ans << endl;
}