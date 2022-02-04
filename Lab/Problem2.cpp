#include <iostream>
#include<string>
using namespace std;

int main()
{
	int n, fail = 0;
	string pali;
	cout << "Enter a string to check wether it is palindrome or not." << endl;
	cin >> pali;
	n = pali.size();
	for (int i = 0; i < (n - 1) / 2; i++)
	{
		if (pali[i] != pali[n - 1 - i])
		{
			fail++;
		}
	}
	if (fail == 0)
	{
		cout << "Perfect Palindrome." << endl;
	}
	else if (fail < 2 && fail!=0)
	{
		cout<<"Imperfect Palindrome"
	}
	system("pause");
	return 0;
}