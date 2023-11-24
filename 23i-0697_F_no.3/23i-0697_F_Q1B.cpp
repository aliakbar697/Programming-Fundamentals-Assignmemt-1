///////////Name: Ali Akbar ; Rollno.:23i0697 ; Assignment no.3
#include <iostream>
#include <iomanip>
using namespace std;
int i = 0; // Used for correct answers
int j = 0; // Used for Wrong answers
void Add(int, int);
void Sub(int, int);
void Choice(int);
int main()
{
    int choice;
    char c;
    cout << setw(29) << setfill('-') << "Practise Arithmetic " << setw(11) << "\n"
         << "1. Addition \n2.Subtraction " << endl;
    cout << "Enter your choice :";
    cin >> choice;
    Choice(choice); // Call Choice function
    do
    {
        cout << "Do you want to continue (y/n) :";
        cin >> c;
        if (c == 'y') // Continue again
        {
            Choice(choice);
        }
        if (c == 'n') // Not continue again
        {
            cout << "No. of Correct answers : " << ::i << endl;
            cout << "No. of Wrong answers : " << ::j << endl;

            break;
        }
    } while (c = 'y');
    return 0;
}
void Choice(int a) // Choice function
{
    int n1, n2;
    char s;
    switch (a)
    {
    case 1:
    {
        cout << "Enter the number n1 :";
        cin >> n1;
        cout << "Enter the number n2 :";
        cin >> n2;
        Add(n1, n2); // Call Add function
        break;
    }
    case 2:
    {
        cout << "Enter the number n1 :";
        cin >> n1;
        cout << "Enter the number n2 :";
        cin >> n2;
        Sub(n1, n2); // Call Sub function
        break;
    }
    }
}
void Add(int a, int b)
{
    int ans;
    cout << "Enter the answer :";
    cin >> ans;
    int c = a + b;
    {
        if (ans == c)
        {
            ::i++;
            cout << "Correct " << endl;
        }
        else
        {
            ::j++;
            cout << "Wrong " << endl;
        }
    }
}
void Sub(int a, int b)
{
    int ans;
    cout << "Enter the answer :";
    cin >> ans;
    int c = a - b;
    {
        if (ans == c)
        {
            ::i++;
            cout << "Correct " << endl;
        }
        else
        {
            ::j++;
            cout << "Wrong " << endl;
        }
    }
}
