#include <iostream>
#include<ctime>
using namespace std;
float a = 0, b = 0, c = 0, d = 0;
void swap(float a,float b)
{
	cout << "Fist valus is " << b << endl << "Second value is " << a;
}
void swap1(float a, float b)
{
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "Fist valus is " << a << endl << "Second value is " << b;
}
int main()
{
	float a, b;
	cout << "Enter a number " << endl;
	cin >> a;
	cout << "Enter a number " << endl;
	cin >> b;
	swap(a, b);
	cout << endl;
	swap1(a, b);
	cout << endl;
	system("pause");
	return 0;
}