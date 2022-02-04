#include<iostream>
#include<string>
using namespace std;
void trace(int arr[])
{
    int trace = 0, z = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[z] << " ";
            if (i == j)
            {
                trace = trace + arr[z];
            }
            z++;
        }
        cout << endl;
    }
    cout << "Trace : " << trace << endl;

}
int main()
{
    int arr[9] = { 0 };
    for (int i = 0; i < 9; i++)
    {
        cout << "Enter a number in the array." << endl;
        cin >> arr[i];
    }
    trace(arr);
    system("pause");
    return 0;
}