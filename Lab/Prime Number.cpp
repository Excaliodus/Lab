#include <iostream>
using namespace std;
int main()
{
    int i, n, prime = 1;
    cout << "Enter a positive integer: " << endl;
    cin >> n;
    if (n == 0 || n == 1)
    {
        prime = 0;
    }
    else
    {
        for (i = 2; i <= n / 2; ++i)
        {
            if (n % i == 0)
            {
                prime = 0;
                break;
            }
        }
    }
    if (prime == 1)
    {
        cout << n << " is a prime number" << endl;
    }
    else
    {
        cout << n << " is not a prime number" << endl;
    }
    system("pause");
    return 0;
}