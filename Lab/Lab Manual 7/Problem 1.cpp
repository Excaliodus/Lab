#include<iostream>
using namespace std;
int main()
{
	int x, y = 0;
	cout << "Enter a number to output its multiplication table." << endl;
	cin >> x;
	if (x < 0)
	{
		cout << "Invalid input. Enter a number which is greater than 0." << endl;
	}
	else
	{
		for (int i = 1; i <= x; i++)
		{
			cout << i << "*	";
			for (int j = 1; j <= x; j++)
			{
				y = i * j;
				cout << " " << y << " ";
			}
			cout << endl;
		}
	}
	system("pause");
	return 0;
}