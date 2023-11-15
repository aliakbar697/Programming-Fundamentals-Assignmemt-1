// Ali Akbar ; Roll no. 23i-0697 ; Assignment no.1
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 18; i++)
    {
        for (int j = i; j <= 18; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            if (i == j)
            {
                if (i % 2 == 0)
                    cout << "|";
                else
                    cout << "*";
            }
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 1; i <= 18; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (j == 1)
            {
                if (i % 2 == 0)
                {
                    cout << "|";
                }
                else
                    cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
    for (int i = 1; i <= 9; i++)
    {
        for (int j = i; j <= 8; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= i; j++)

        {
            cout << j;
        }
        for (int j = i - 1; j > 0; j--)
        {
            cout << j;
        }
        for (int j = i; j < 9; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    for (int i = 1; i <= 9; i++)
    {
        int r = 1;
        for (int j = 2; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = i; j <= 9; j++)
        {
            cout << r++;
        }
        for (int j = i; j <= 8; j++)
        {
            cout << " ";
        }
        for (int j = 2; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
