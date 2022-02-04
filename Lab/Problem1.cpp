#include <iostream>
using namespace std;

int main()
{
	int r, sumO = 0, sumE = 0, n;
	cout << "Enter a number." << endl;
	cin >> n;
	while (n > 0) 
	{
		r = n % 10;
		n = n / 10;
		if (r % 2 == 1)
			sumO = sumO + r;
		else
			sumE = sumE + r;
	}
	cout << "The sum of even digits in the number is " << sumE << endl;
	cout << "The sum of odd digits in the number is " << sumO << endl;
	system("pause");
	return 0;
}