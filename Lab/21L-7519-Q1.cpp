#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	cout << "Enter a number." << endl;
	cin >> num1;
	cout << "Enter another number." << endl;
	cin >> num2;
	if (num2 < num1)
	{
		cout << "Invalid input. First number should be less than second number." << endl;
	}
	else
	{
		for (int i = num1; i <= num2; i += 1)
		{
			cout << i << endl;
		}
	}
	system("pause");
	return 0;
}