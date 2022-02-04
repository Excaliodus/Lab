#include<iostream>
using namespace std;
void PrintArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element into the array." << endl;
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int size;
    cout << "Enter the size of the array." << endl;
    cin >> size;
    int a[] = { 0 };
    PrintArray(a, size);
    system("pause");
    return 0;
}