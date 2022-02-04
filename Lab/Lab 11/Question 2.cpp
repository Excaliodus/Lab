#include<iostream>
#include<string>
using namespace std;
void reverse_string(char arr[], int start, int end)
{
    char temp;
    for (int i = 0; i <= ((end - start) / 2); i++)
    {
        temp = arr[start + i];
        arr[start + i] = arr[end - i];
        arr[end - i] = temp;
    }
}
int main()
{
    char arr[1000];
    cout << "Enter a string to reverse it word by word" << endl;
    cin.get(arr, 1000);
    int start, end;
    end = 0;
    start = 0;
    while (arr[end])
    {
        for (end = start; (arr[end] && arr[end] != ' '); end++)
        { }
        reverse_string(arr, start, (end - 1));
        start = end + 1;
    }
    cout << arr;
    return 0;
}
