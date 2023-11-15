// Ali Akbar ; Roll no.: 23i-0697 ;Assignment no. 1
#include <iostream>
#include <string>
#include <cmath>
#include <stdlib.h>
#include <string.h>
#include <ctime>
using namespace std;
int main()
{
    bool falg_for_equation = false;
    int bonus_sum_thing = 0;
    int r1, r2, d1, d2, i = 1, z = 0, x = 0, b1, c1, a, b, d3, d4, aa1, aa2, bb1, bb2;
    string str1, str2, e1, e2, z1, z2;
    aa2 = bb2 = 0;
    cout << "Enter name player 1 :";
    getline(cin, str1);
    char last_character_in_plyarer_1 = str1.back();
    if (last_character_in_plyarer_1 >= 'A' && last_character_in_plyarer_1 <= 'Z')
    {
        aa1 = int(last_character_in_plyarer_1) - 'A' + 1;
    }
    else
    {
        aa1 = int(last_character_in_plyarer_1) - 'a' + 1;
    }

    cout << " Enter name player 2 :";
    getline(cin, str2);
    char last_character_in_plyarer_2 = str2.back();
    if (last_character_in_plyarer_2 >= 'A' && last_character_in_plyarer_2 <= 'Z')
    {
        bb1 = int(last_character_in_plyarer_2) - 'A' + 1;
    }
    else
    {
        bb1 = int(last_character_in_plyarer_2) - 'a' + 1;
    }
    do
    {
        cout << "Enter roll no. " << str1 << " : ";
        cin >> r1;
    } while (r1 <= 0);
    int s = r1 % 10;
    r1 = r1 / 10;
    int p = r1 % 10;
    int sum1 = s + p;
    // cout << sum1 << endl;
    do
    {
        cout << "Enter roll no. " << str2 << " : ";
        cin >> r2;
    } while (r2 <= 0);
    int k = r2 % 10;
    r2 = r2 / 10;
    int o = r2 % 10;
    int sum2 = k + o;
    //  cout << sum2 << endl;
    do
    {
        falg_for_equation = false;
        z = 0;
        x = 0;
        cout << "ROUND" << i << endl;
        cout << str1 << " Score : " << aa2 << endl;
        cout << str2 << " Score : " << bb2 << endl;

        int g = 1, h = 1;
        do
        {
            while (1)
            {
                cout << "Press 1 to roll a dice  " << str1 << " : ";
                cin >> e1;
                if (e1 == "1")
                {
                    srand(time(NULL));
                    d1 = rand() % 6 + 1;

                    if (z == d1)
                    {
                        falg_for_equation = true;
                        bonus_sum_thing = z + z;
                    }
                    z = z + d1;
                    cout << z << endl;
                    aa2 += z;
                    break;
                }
            }
            g++;
        } while (g <= 2);

        if (z == sum1) // sum of roll number bonus
        {
            aa2 = aa2 + s;
            cout << "Roll number bonus applied" << endl;
        }
        if (z == aa1) // for same alphabet
        {
            aa2 = aa2 + 5;
            cout << "Alphabet number bonus applied" << endl;
        }
        if (falg_for_equation == true) // Equation Bonus
        {

            int dis = pow(pow(z, 2) - (4 * 1 * z), (1 / 2));
            int answer1 = (-z + dis) / (2);
            int answer2 = (-z - dis) / (2);
            if (answer1 == answer2)
            {
                while (1)
                {
                    cout << "Press 2 to roll a dice  " << str1 << " : ";
                    cin >> e1;
                    if (e1 == "1")
                    {
                        srand(time(NULL));
                        d2 = rand() % 6 + 1;
                        aa2 += d2;

                        cout << "Double same roll bonus applied." << endl;
                        break;
                    }
                }
            }
        }
        falg_for_equation = false;

        do
        {
            while (1)
            {
                cout << "Press 2 to roll a dice  " << str2 << " : ";
                cin >> e2;
                if (e2 == "2")
                {
                    srand(time(NULL));
                    d2 = rand() % 6 + 1;
                    if (d2 == x)
                    {
                        falg_for_equation = true;
                        bonus_sum_thing = x + x;
                    }
                    x = x + d2;
                    cout << x << endl;
                    bb2 += x;
                    break;
                }
            }

            h++;
        } while (h <= 2);

        if (x == sum2) // sum of roll number bonus
        {
            bb2 = bb2 + k;
            cout << "Roll number bonus applied" << endl;
        }
        if (x == bb1) // same alphabet
        {
            bb2 = bb2 + 5;
            cout << "Alphabet number bonus applied" << endl;
        }

        if (falg_for_equation == true) // Equation Bonus
        {

            int dis = pow(pow(z, 2) - (4 * 1 * z), (1 / 2));
            int answer1 = (pow(z, 2) + dis) / (2);
            int answer2 = (pow(z, 2) - dis) / (2);
            if (answer1 == answer2)
            {
                while (1)
                {
                    cout << "Press 2 to roll a dice  " << str2 << " : ";
                    cin >> e2;
                    if (e2 == "2")
                    {
                        srand(time(NULL));
                        d2 = rand() % 6 + 1;
                        bb2 += d2;
                        cout << "Double same roll bonus applied." << endl;
                        break;
                    }
                }
            }
        }
        falg_for_equation = false;
        i++;
    } while (i <= 5);
    // cout << "Score of player 1 : " << aa2 << endl;
    // cout << "Score of player 2 : " << bb2 << endl;

    //**************

    if (aa2 > bb2)
    {
        cout << "Congratulations, " << str1 << ". You win this game. " << endl;
    }
    else if (aa2 < bb2)
    {
        cout << "Congratulations, " << str2 << ". You win this game. " << endl;
    }
    else if (aa2 == bb2)
    {
        do
        {
            z = 0;
            x = 0;
            cout << "Press 1 to roll a dice  " << str1 << " : ";
            cin >> z1;
            if (z1 == "1")
            {
                srand(time(NULL));
                d3 = rand() % 6 + 1;
                z = z + d3;
                cout << z << endl;
                aa2 += z;
            }
            cout << "Press 2 to roll a dice  " << str2 << " : ";
            cin >> z2;
            if (z2 == "2")
            {
                srand(time(NULL));
                d4 = rand() % 6 + 1;
                x = x + d4;
                cout << x << endl;
                bb2 += x;
            }
            i++;
            if (aa2 > bb2)
            {
                cout << "Congratulations, " << str1 << ". You win this game. " << endl;
                break;
            }
            if (bb2 > aa2)
            {
                cout << "Congratulations, " << str2 << ". You win this game. " << endl;
                break;
            }
        } while (1);
    }
    cout << "Score of " << str1 << " : " << aa2 << endl;
    cout << "Score of " << str2 << " : " << bb2 << endl;
    return 0;
}
