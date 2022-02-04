#include <iostream>
using namespace std;
int main()
{
    int x, out;
    cout << "Enter a number to output its table." << endl;
    cin >> x;
    for (int i = 1; i <= 10; i += 1)
    {
        out = x * i;
        cout << x << "*" << i << " = " << out << endl;
    }
    system("pause");
    return 0;
}