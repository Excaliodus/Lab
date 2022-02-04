#include <iostream>
using namespace std;

int main()
{
	int n, r, factn = 1, a = 0, facta = 1, perm = 0;
	cout << "Enter the value of n:" << endl;
	cin >> n;
	cout << "Enter the value of r:" << endl;
	cin >> r;
	if (n > r)
	{
		for (int i = 1; i <= n; i++)
		{
			factn = factn * i;
		}
		a = n - r;
		for (int i = 1; i <= a; i++)
		{
			facta = facta * i;
		}
		perm = factn / facta;
		cout << "Permutation = " << perm << endl;
	}
	else
	{
		cout << "n must be greater than r." << endl;
	}
	system("pause");
	return 0;
}