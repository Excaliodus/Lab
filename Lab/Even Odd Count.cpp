#include <iostream>
using namespace std;
int main()
{
	int count = 0, counteven = 0, countodd = 0, num=0, zero = 0;
	while (num >= 0)
	{
		cout << "Enter a number." << endl;
		cin >> num;
		count = count + 1;
		if (num == 0)
		{
			zero = zero + 1;
		}
		else if (num % 2 == 1)
		{
			countodd = countodd + 1;
		}
		else if (num % 2 == 0)
		{
			counteven = counteven + 1;
		}
	}
	cout << "Total numbers entered is " << count << endl;
	cout << "Total even numbers entered is " << counteven << endl;
	cout << "Total odd numbers entered is " << countodd << endl;
	cout << "Total numbers entered which are zero " << zero << endl;
	system("pause");
	return 0;
}