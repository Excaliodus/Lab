#include <iostream>
using namespace std;

int main()
{
	int num, factorial=1;
	cout << "Enter a number to find its factorial value." << endl;
	cin >> num;
	if (num < 0)
	{
		cout << "Invalid input. Number cannot be negative." << endl;
	}
	else if (num > 30)
	{
		cout << "Pick a smaller number. Number input is too large." << endl;
	}
	else
	{
		for (int i = 1; i<=num; i++)
		{
			factorial = factorial * i;
		}
		cout << "Factorial of number " << num << " is " << factorial << endl;
	}
	system("pause");
	return 0;
}