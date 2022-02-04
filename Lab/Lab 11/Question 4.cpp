#include<iostream>
#include<string>
using namespace std;
void rotate(int data[][5])
{
    int temp1, temp;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if ((i == 0) && (j < 4))
            {
                if (j == 0)
                {
                    temp = data[i][j];
                }
                data[i][j] = data[i][j + 1];
            }
            if (j == 0 && i > 0)
            {
                if (i == 1)
                {
                    temp1 = data[4][j];
                }
                data[5 - i][j] = data[4 - i][j];
                if (i == 4)
                    data[1][0] = temp;
            }
            if (i == 4)
            {
                if (j == 1)
                {
                    temp = data[i][4];
                }
                data[i][5 - j] = data[i][4 - j];
                if (j == 4)
                    data[4][1] = temp1;
            }
            if (j == 4)
            {
                if (i != 4)
                    data[i][j] = data[i + 1][j];
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << data[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int data[5][5] = { 0 };
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Enter value in the 5x5 matrix." << endl;
            cin >> data[i][j];
        }
    }
    rotate(data);
    system("pause");
    exit (0);
}
