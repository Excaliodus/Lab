#include <iostream>
using namespace std;

int main()
{
	char opt = NULL;
	int count = 0;
	float avg = 0, num, sum = 0;
	while (opt != 'q')
	{
		count += 1;
		cout << "Enter a number." << endl;
		cin >> num;
		sum = sum + num;
		cout << "Enter a character " << endl;
		cin >> opt;
	}
	cout << "The sum of the entered values is " << sum << endl;
	avg = sum / count;
	cout << "The average of the entered numbers is " << avg << endl;
	system("pause");
	return 0;
}