#include <iostream>
using namespace std;

int main()
{
	int r = 0, n, x = 0, arm = 0;
	cout << "Enter a number." << endl;
	cin >> n;
	x = n;
	while (x > 0)
	{
		r = x % 10;
		x = x / 10;
		arm = arm + (r * r * r);
	}
	if (arm == n)
		cout << "Number is Armstrong number." << endl;
	else
		cout << "Number is not an armstrong number." << endl;
	system("pause");
	return 0;
}