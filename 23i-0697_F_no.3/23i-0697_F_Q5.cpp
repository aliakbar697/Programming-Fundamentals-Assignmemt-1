////////Name :Ali Akbar ; Rollno: 23i0697 ; Assignment no.3
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void draw(int, int);
void play(int, int arr[][149], int);
void showoutput(int, int);
int main()
{
    srand(time(NULL));
    int n, m, s;
    cout << ">>>>>>Welcome to Game<<<<<<" << endl;
    do
    {
        cout << "Enter the number of rows between 1 and 100 :";
        cin >> n;
    } while (1 > n > 100);
    do
    {
        cout << "Enter the number of columns between 1 and 150 :";
        cin >> m;
    } while (1 > m > 150);
    draw(n, m);
}
void draw(int n, int m)
{
    const int l1 = n, l2 = m;
    int s;
    int arr[l1][149];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = rand() % m;
            if (arr[i][j] < 10)
                cout << "00" << arr[i][j] << " ";
            if (arr[i][j] >= 10 && arr[i][j] < 100)
                cout << "0" << arr[i][j] << " ";
            if (arr[i][j] >= 100)
                cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    while (1)
    {
        cout << "\nEnter the number between 0 and " << n << " :";
        cin >> s;
        if (s > 0 && s < m)
            break;
    }
    play(s, arr, n);
}
void play(int s, int arr[][149], int n)
{
    int q, player_score, k, total_jumps = 0;
    player_score = q = arr[s][0];
    for (k = 0; k <= 100; k++)
    {
        player_score += arr[k][q];
        ++total_jumps;
        if (k == n)
        {
            k = 0;
            // continue;
        }
        if (arr[k][q] == 0)
            player_score = 0;
        if (player_score > 100)
            break;
    }
    showoutput(total_jumps, player_score);
}
void showoutput(int total_jumps, int player_score)
{
    cout << "No. of Jumps is " << total_jumps << endl;
    cout << "Players score is " << player_score << endl;
}
