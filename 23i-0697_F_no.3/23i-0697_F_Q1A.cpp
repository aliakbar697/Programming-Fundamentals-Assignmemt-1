///////Name: Ali Akbar ; Roll no.:23i0697 ;Assignment no.3
#include <iostream>
#include <iomanip>
using namespace std;
int Sum(int, int, int);
float Average(int, int, int);
int Max(int, int, int);
int Min(int, int, int);
int main()
{
    int x, y, z;
    cout << "Enter the number x : ";
    cin >> x;
    cout << "Enter the number y : ";
    cin >> y;
    cout << "Enter the number z : ";
    cin >> z;
    cout << "Sum = " << Sum(x, y, z) << endl;
    cout << "Average = " << setprecision(3) << Average(x, y, z) << endl;
    cout << "Max = " << Max(x, y, z) << endl;
    cout << "Min = " << Min(x, y, z) << endl;
    return 0;
}
int Sum(int a, int b, int c)
{
    return a + b + c;
}
float Average(int a, int b, int c)
{
    return float(a + b + c) / 3;
}
int Max(int a, int b, int c)
{
    if (a >= b && a >= c)
    {
        return a;
    }
    else if (b >= a && b >= c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int Min(int a, int b, int c)
{
    if (a <= b && a <= c)
    {
        return a;
    }
    else if (b <= a && b <= c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
