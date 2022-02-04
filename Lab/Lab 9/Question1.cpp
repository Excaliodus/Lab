#include <iostream>
#include<ctime>
using namespace std;
int plusFunc(int a,int b)
{
	int c;
	c = a + b;
	return c;
}
float plusFunc(float a, float b)
{
	float c;
	c = a + b;
	return c;
}
string plusFunc(string a, string b)
{
	string c;
	c = a + b;
	return c;
}
int main()
{
	float a, b;
	string c, d;
	cout << "Enter a number " << endl;
	cin >> a;
	cout << "Enter a number " << endl;
	cin >> b;
	cout << "The sum is " << plusFunc(a, b) << endl;
	cout << "Enter a string " << endl;
	cin >> c;
	cout << "Enter a string " << endl;
	cin >> d;
	cout << "The sum is " << plusFunc(c, d) << endl;
}