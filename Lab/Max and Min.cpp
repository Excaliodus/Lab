#include <iostream>
using namespace std;
int main()
{
	int num = 0, max = 0, min = 0;
	while (num >= 0)
	{
		cout << "Enter a number." << endl;
		cin >> num;
		if (num >= 0)
		{
			if (num > max)
			{
				max = num;
			}
			else if (num < min)
			{
				min = num;
			}
		}
	}
	cout << "Maximum is " << max << endl;
	cout << "Minimum is " << min << endl;
    system("pause");
    return 0;
}