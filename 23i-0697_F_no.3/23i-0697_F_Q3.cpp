//////////Name: Ali Akbar ; Roll no. 23i-0697 ; Assignment no.3/////////
#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;
void words();
bool hangman();
bool checkcommon(string, char[], int, const int);
bool checking(string, char[], const int);
void decision(string, char[], int, const int);
int main()
{
    cout << " >>>>>Welcome to Hangman Game<<<<< " << endl;
    srand(time(NULL));
    words();
}
int i = 1;
void words() /////For creating words that guess the user
{
    char str2[100];
    int size;
    cout << "Enter your name : ";
    cin.get(str2, 100);
    int i;
    for (i = 0; str2[i] != '\0'; i++) /// For User name length
        ;
    i = i - 1;
    int l, rnd;
    string str1[] = {"pakistan", "cuba", "victoria", "qatar", "greece", "brookfield", "imrankhan", "cambodia", "austria", "egypt", "billgates"};
    rnd = rand() % 12;
    l = str1[rnd].length();
    decision(str1[rnd], str2, i, l);
}
void decision(string guess, char str2[], int i, const int l) /////To perform the game and take decision
{
    char realword[l];
    char correct;
    bool flag = false, flag2, flag3;
    flag3 = checkcommon(guess, str2, i, l);
    // cout << flag3 << endl;
    char enter_word;
    while (1)
    {
        bool flag1 = false;
        cout << "Enter the word for guessing :";
        cin >> enter_word;
        for (int i = 0; i < l; i++)
        {
            if (guess[i] == enter_word && realword[i] != enter_word)
            {
                cout << "You are guessing the word. " << endl;
                realword[i] = enter_word;
                flag1 = true;
                if (flag3 == true)
                {
                    cout << "There is common word between your name and secret word, so you gain 1 life more due to correct guessing." << endl;
                    ::i = ::i - 1;
                }
                break;
            }
        }
        flag2 = checking(guess, realword, l);
        if (flag2 == true)
        {
            cout << "Congratulation! you guess the word '" << guess << "' and win this game. " << endl;
            break;
        }
        if (flag1 == false)
        {
            if (flag3 == true)
            {
                cout << "There is common word word between your name and secret word, so you lost 2 lives due to wrong guessing." << endl;
                ::i = ::i + 2;
            }
            flag = hangman(); /// For Wrong answer
        }
        if (flag == false)
            continue;
        if (flag == true) ////For finish the game on loss of user
        {
            cout << "The real word is '" << guess << "'." << endl;
            break;
        }
    }
}
bool hangman() /////For drawing the diagram on wrong answer
{
    if (::i <= 1)
    {
        cout << "  +---+\n  |   |\n      |\n      |\n      |\n      |\n=========\n";
    }
    else if (::i == 2)
    {
        cout << "  +---+\n  |   |\n  0   |\n      |\n      |\n      |\n=========\n";
    }
    else if (::i == 3)
    {
        cout << "  +---+\n  |   |\n  0   |\n  |   |\n      |\n      |\n=========\n";
    }
    else if (::i == 4)
    {
        cout << "  +---+\n  |   |\n  0   |\n /|   |\n      |\n      |\n=========\n";
    }
    else if (::i == 5)
    {
        cout << "  +---+\n  |   |\n  0   |\n /|\\  |\n      |\n      |\n=========\n";
    }
    else if (::i == 6)
    {
        cout << "  +---+\n  |   |\n  0   |\n /|\\  |\n /    |\n      |\n=========\n";
    }
    else if (::i >= 7)
    {
        cout << "  +---+\n  |   |\n  0   |\n /|\\  |\n / \\  |\n      |\n=========\n"
             << "You lost this game. \n";
        return true;
    }
    ::i++;
    return false;
}
bool checking(string guess, char realword[], const int l)
{
    for (int i = 0; i < l; i++)
    {
        if (guess[i] == realword[i])
        {
            continue;
        }
        else
            return false;
    }
    return true;
}
bool checkcommon(string guess, char str2[], int i, const int l)
{
    for (int j = 0; j < l; j++)
    {
        for (int k = 0; k < i; k++)
        {
            if (guess[j] == str2[k])
                return true;
        }
    }
    return false;
}