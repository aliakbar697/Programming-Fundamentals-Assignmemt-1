// Ali Akbar ; Roll no. 23i-0697 ; Asignment No.2
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x, n, max, sum, t, u, l, k;
    cout << "enter the value of x : ";
    cin >> x;
    do
    {
        cout << "enter the value of power of x : ";
        cin >> n;
    } while (n < 0);
    if (x < 0)
    {
        x = x * -1;
    }
    u = x;
    k = 4 + 2 * x;
    max = (pow(x, n)) + (pow(x, n - 1));
    for (int i = 0; max >= 0; i++)
    {
        {
            for (int j = 0; j <= k; j++)
            {
                if (j == 0)
                {
                    if (max < 10)
                        cout << "0";

                    cout << max;
                }
                else
                {
                    t = (pow(u, n) + pow(u, n - 1));
                    {
                        if (t == max)
                        {
                            //  cout << '\n'
                            //       << '-' << j << ' ' << u << '\n';
                            if (j == (2 * u + 2))
                            {
                                cout << "*";
                                u = u - 1;
                            }
                            else
                            {
                                cout << ' ';
                            }
                        }
                        else
                            cout << " ";
                    }
                }
            }

            cout << endl;
        }
        max = max - n;
    }
    for (int i = 0; i <= x; i++)
    {
        if (i == 0)
            cout << " ";
        cout << " " << i;
    }
    cout << endl;
    return 0;
}
