#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "Enter the number of rows you want to output." << endl;
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		cout << "*************" << endl;
	}
	system("pause");
	return 0;
}