#include <iostream>
using namespace std;

int main()
{

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1;
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + i;
        }
        cout << endl;
    }

    cout << endl;
    cout << "Here is Floyd's Triangle:" << endl;
    int num = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << num + 1 << " ";
            num++;
        }
        cout << endl;
    }

    cout << endl;
    cout << "Pyramid Pattern: " << endl;
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // num1
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1;
        }

        // num2
        for (int j = i - 1; j >= 0; j--)
        {
            cout << j + 1;
        }
        cout << endl;
    }

    return 0;
}