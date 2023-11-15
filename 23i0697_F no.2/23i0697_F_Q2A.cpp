// ALI AKBAR  ; roll no.:23i-0697 Assignment  NO.2
#include <iostream>
using namespace std;
int main()
{
    int rows = 16, col = 32;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= col; j++)

        {
            if (j == col || i == rows)
            {
                cout << "*";
            }
            else if (j >= (col - 6) && j < col && i == rows - 15)
            {
                cout << "*";
            }
            else if (j == col - 6 && i == rows - 14)
            {
                cout << "*";
            }
            else if (j == col - 6 && i == rows - 13)
            {
                cout << "*";
            }
            else if (j >= (col - 11) && j <= col - 6 && i == rows - 12)
            {
                cout << "*";
            }
            else if (j == col - 11 && i == rows - 11)
            {
                cout << "*";
            }
            else if (j == col - 11 && i == rows - 10)
            {
                cout << "*";
            }
            else if (j >= col - 16 && j <= col - 11 && i == rows - 9)
            {
                cout << "*";
            }
            else if (j == col - 16 && i == rows - 8)
            {
                cout << "*";
            }
            else if (j == col - 16 && i == rows - 7)
            {
                cout << "*";
            }
            else if (j >= col - 21 && j <= col - 16 && i == rows - 6)
            {
                cout << "*";
            }
            else if (j == col - 21 && i == rows - 5)
            {
                cout << "*";
            }
            else if (j == col - 21 && i == rows - 4)
            {
                cout << "*";
            }
            else if (j >= col - 26 && j <= col - 21 && i == rows - 3)
            {
                cout << "*";
            }
            else if (j == col - 26 && i == rows - 2)
            {
                cout << "*";
            }
            else if (j == col - 26 && i == rows - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
