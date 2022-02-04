#include<iostream>
#include <string>
#include<cmath>
using namespace std;
void StringManipulation();
void StringLength(string st1);
void StringConcatenation(string st1, string st2);
void Calculator();
void Addition(int x);
void Subtraction(int x);
void Multiplication(int x);
void Division(int x);
void Power(int num, int powe);
string StringCopy(string st1);
string StringEdit(string st1, char a, char b);
void StringManipulation()
{
	int x, y;
	string st1, st2, strcpy;
	char a, b;
	cout << "1) String Length\n2) String Concatenation\n3) String Copy\n4) String Edit" << endl;
	cin >> x;
	if (x == 1)
	{
		cout << "You have chosen string length. Please enter a string." << endl;
		cin.ignore();
		getline(cin, st1);
		StringLength(st1);
	}
	else if (x == 2)
	{
		cout << "You have chosen string concatention. Please enter two strings." << endl;
		cin.ignore();
		getline(cin, st1);
		getline(cin, st2);
		StringConcatenation(st1, st2);
	}
	else if (x == 3)
	{
		cout << "You have chosen string copy. Please enter a string." << endl;
		cin.ignore();
		getline(cin, st1);
		strcpy = StringCopy(st1);
		cout << "The entered string has been copied to the variable 'strcpy' " << endl;
	}
	else if (x == 4)
	{
		cout << "You have chosen string edit. Please enter a string." << endl;
		cin.ignore();
		getline(cin, st1);
		cout << "Enter the number of characters you want to replace in the above entered string." << endl;
		cin >> y;
		for (int i = 0; i < y; i++)
		{
			cout << "Enter the character you want to replace." << endl;
			cin >> a;
			cout << "Enter the character which you want the previous character replaced with." << endl;
			cin >> b;
			st1 = StringEdit(st1, a, b);
		}
		cout << "The edited string is: " << st1 << endl;
	}
	else
	{
		cout << "Invalid Input." << endl;
	}
}
void StringLength(string st1)
{
	cout << "The length of the string is: " << st1.size();
}
void StringConcatenation(string st1, string st2)
{
	string out;
	out = st1 + st2;
	cout << "The concatenated string is: " << out << endl;
}
string StringCopy(string st1)
{
	return st1;
}
string StringEdit(string st1, char a, char b)
{
	int k;
	k = st1.size();
	for (int i = 0; i < k; i++)
	{
		if (st1[i] == a)
		{
			st1[i] = b;
		}
	}
	return st1;
}
void Calculator()
{
	int x, num, powe, out;
	cout << "1) Addition\n2) Subtraction\n3) Multiplication\n4) Division\n5) Power" << endl;
	cin >> x;
	if (x == 1)
	{
		cout << "You have chosen Addition. Please enter the number of variables you would like to add." << endl;
		cin >> x;
		Addition(x);
	}
	else if (x == 2)
	{
		cout << "You have chosen Subtraction. Please enter the number of variables you would like to subtract." << endl;
		cin >> x;
		Subtraction(x);
	}
	else if (x == 3)
	{
		cout << "You have chosen Multiplication. Please enter the number of variables you would like to multiply." << endl;
		cin >> x;
		Multiplication(x);
	}
	else if (x == 4)
	{
		cout << "You have chosen Division. Please enter the number of variables you would like to divide." << endl;
		Division(x);
	}
	else if (x == 5)
	{
		cout << "You have chosen Power function. Please enter number and what power you would like to raise it to." << endl;
		cin >> num;
		cin >> powe;
		Power(num, powe);
	}
	else
	{
		cout << "Invalid Input." << endl;
	}
}
void Addition(int x)
{
	int num, out = 0;
	for (int i = 0; i < x; i++)
	{
		cout << "Enter the number you want to add." << endl;
		cin >> num;
		out = out + num;
	}
	cout << "The sum of the entered numbers is: " << out << endl;
}
void Subtraction(int x)
{
	int num, out = 0;
	for (int i = 0; i < x; i++)
	{
		cout << "Enter the number you want to subtract." << endl;
		cin >> num;
		out = out - num;
	}
	cout << "The difference of the entered numbers is: " << out << endl;
}
void Multiplication(int x)
{
	int num, out = 0;
	for (int i = 0; i < x; i++)
	{
		cout << "Enter the number you want to multiply." << endl;
		cin >> num;
		out = out * num;
	}
	cout << "The multiple of the entered numbers is: " << out << endl;
}
void Division(int x)
{
	int num, out = 0;
	for (int i = 0; i < x; i++)
	{
		cout << "Enter the number you want to divide." << endl;
		cin >> num;
		out = out / num;
	}
	cout << "The division of the entered numbers is: " << out << endl;
}
void Power(int num, int powe)
{
	cout << num << " raised to the power of " << powe << " equals: " << pow(num, powe) << endl;
}
void SortingArray()
{
	int x;
	cout << "1) Bubble Sort\n2) Insertion Sort\n3) Selection Sort" << endl;
	cin >> x;
	if (x == 1)
	{
		cout << "You have chosen Bubble sort. Please enter the ." << endl;
	}
	else if (x == 2)
	{
		cout << "You have chosen string concatention. Please enter two strings." << endl;
		cin.ignore();
		getline(cin, st1);
		getline(cin, st2);
		StringConcatenation(st1, st2);
	}
	else if (x == 3)
	{
		cout << "You have chosen string copy. Please enter a string." << endl;
		cin.ignore();
		getline(cin, st1);
		strcpy = StringCopy(st1);
		cout << "The entered string has been copied to the variable 'strcpy' " << endl;
	}
}
int main()
{
	int x = 1;
	while (x != 5)
	{
		cout << "1) String Manipulation\n2) Calculator\n3) Sorting an Array\n4) Searching in an Array\n5) Exit" << endl;
		cin >> x;
		if (x < 1 || x>5)
		{
			cout << "Incorrect Input. Please enter number again." << endl;
		}
		else if (x == 1)
		{
			cout << "You have chosen String Manipulation." << endl;
			StringManipulation();
		}
		else if (x == 2)
		{
			cout << "You have chosen Calculator." << endl;
			Calculator();
		}
		else if (x == 3)
		{
			cout << "You have chosen Sorting an Array." << endl;

		}
		else if (x == 4)
		{
			cout << "You have chosen Searching in an Array." << endl;

		}
	}
}