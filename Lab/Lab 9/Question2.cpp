#include <iostream>
#include<ctime>
using namespace std;
float a = 0, b = 0, c = 0, d = 0;
float plusFunc(float a,float b,float c,float d)
{
	float sum;
	sum = a + b + c + d;
	return sum;
}
int main()
{
	int x;
	cout << "How many numbers do you want to input?" << endl;
	cin >> x;
	if (x == 2)
	{
		cout << "Enter a number " << endl;
		cin >> a;
		cout << "Enter a number " << endl;
		cin >> b;
		cout << "The sum is " << plusFunc(a, b, c, d) << endl;
	}
	if (x == 3)
	{
		cout << "Enter a number " << endl;
		cin >> a;
		cout << "Enter a number " << endl;
		cin >> b;
		cout << "Enter a number " << endl;
		cin >> c;
		cout << "The sum is " << plusFunc(a, b, c, d) << endl;
	}
	if (x == 4)
	{
		cout << "Enter a number " << endl;
		cin >> a;
		cout << "Enter a number " << endl;
		cin >> b;
		cout << "Enter a number " << endl;
		cin >> c;
		cout << "Enter a number " << endl;
		cin >> d;
		cout << "The sum is " << plusFunc(a, b, c, d) << endl;
	}
}