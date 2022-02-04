#include<iostream>
#include<string>
using namespace std;
void count(char arr[])
{
    int i;
    int uppercase = 0, lowercase = 0, space = 0;
    for (i = 0; arr[i] != 0; i++)
    {
        if (arr[i] >= 'A' && arr[i] <= 'Z')
        {
            uppercase++;
        }
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            lowercase++;
        }
        if (arr[i] == ' ')
        {
            space++;
        }
    }
    cout << "Number of lowercase letters are " << lowercase << endl;
    cout << "Number of uppercase letters are " << uppercase << endl;
    cout << "Number of spaces are " << space << endl;
}
int main()
{
    char arr[1000];
    cout << "Enter the String:" << endl;
    cin.get(arr, 1000);
    count(arr);
    system("pause");
    return 0;
}