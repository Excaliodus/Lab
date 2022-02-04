#include<iostream>
using namespace std;
void PrintArray(int arr[], int size, int number)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element into the array." << endl;
        cin >> arr[i];
    }
    int found = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == number)
        {
            found = 1;
            cout << "Number is found on " << (i + 1) << " element." << endl;
            break;
            break;
        }
    }
    if (found == 0)
    {
        cout << "Number was not found." << endl;
    }
}
int main()
{
    int size, number;
    cout << "Enter the size of the array." << endl;
    cin >> size;
    cout << "Enter the number to be found." << endl;
    cin >> number;
    int a[] = { 0 };
    PrintArray(a, size,number);
    system("pause");
    exit (0);
}