#include <iostream>
using namespace std;
int main()
{
	double x, power=1;
	int y, z=0;
	cout << "Enter a number x." << endl;
	cin >> x;
	cout << "Enter a number y." << endl;
	cin >> y;
	power = x;
	if (y > 0)
	{
		for (int i = 1; i < y; i += 1)
		{
			power = power * x;
		}
	}
	else if (y == 0)
	{
		power = 1;
	}
	else
	{
		z = y * (-1);
		for (int i = 1; i < z; i += 1)
		{
			power = power * x;
		}
		power = 1 / power;
	}
	cout << x << " power " << y << " of Number is " << power << endl;
}