#include<iostream>
using namespace std;
int power(int base, int power)
{
	int pow = base;
	if (power == 0 && base > 0)
	{
		return 1;
	}
	else
	{
		for (int i = 1; i < power; i++)
		{
			pow = base * pow;
		}
		return pow;
	}
}
int main()
{
	int x, y;
	cout << "Enter the base." << endl;
	cin >> x;
	cout << "Enter the power." << endl;
	cin >> y;
	cout << power(x,y);
	return 0;
}