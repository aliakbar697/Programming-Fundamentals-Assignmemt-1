///////>>>>>>> Ali Akbar<<<<<<>>>>>> Roll no.: 23i0697<<<<<<>>>>>> Asssignment no.3
#include <iostream>
using namespace std;
bool find(char[], char[], int); ////For finding word int array.
int main()
{
    int sizediffernce;
    bool flag1 = false;
    bool flag2 = false;
    char cfind[100], creplace[100];
    char arr[500];
    cout << "Enter a text :";
    cin.getline(arr, 500);
    int text_length = 0;
    while (arr[text_length] != '\0') // For text length
    {
        text_length++;
    }
    // cout << text_length << endl; // Length of text
    bool user_willing = 1;
    while (user_willing)
    {
        cout << "Please enter a word to find in text :";
        cin >> cfind;
        int find_length = 0;
        while (cfind[find_length] != '\0') // For word length to find
        {
            find_length++;
        }
        // cout << find_length << endl; // length of word to find
        cout << "Please enter a word to replace in text :";
        cin >> creplace;
        int replace_length = 0;
        while (creplace[replace_length] != '\0') // For replace word length
        {
            replace_length++;
        }
        // cout << replace_length << endl; // length of replacing word
        int i, j;
        char result[500]; ////////Another array for changing in user text
        for (i = 0; arr[i] != '\0'; i++)
        {
            result[i] = arr[i];
        }
        result[i] = '\0';
        int r;
        for (i = 0, r = 0; i < text_length;) ///////For checking text first found and then replace
        {
            bool check = 0;
            for (j = 0; j < find_length; j++)
            {
                if (arr[i] == cfind[j])
                {
                    check = find(arr, cfind, i);
                    if (check)
                    {
                        // cout << "\nFound at i = " << i;
                        for (int k = 0; k < replace_length; k++, r++)
                        {
                            result[r] = creplace[k];
                        }
                        i += find_length;
                    }
                }
            }
            if (!check)
            {
                result[r] = arr[i];
                r++;
                i++;
            }
        }
        result[r] = '\0';
        cout << "\n A modified text is following : \n"; ////////Text after replacing the word
        for (int j = 0; result[j] != '\0'; j++)
        {
            cout << result[j];
        }
        cout << endl;
        char input;
        do
        {
            cout << "\nDo you want to continue?\nIf yes enter y and if no enter n.\n";
            cin >> input;
        } while (input != 'y' && input != 'n');
        if (input == 'n')
        {
            user_willing = 0;
        }
        int k_result;
        for (k_result = 0; result[k_result] != '\0'; k_result++)
        {
            arr[j] = result[j];
        }
        arr[k_result] = '\0';
    }
    return 0;
}
bool find(char arr[], char cfind[], int i)
{
    bool flag = false;
    int f = i;
    for (int j = 0; cfind[j] != '\0'; j++, f++)
    {
        if (arr[f] == cfind[j])
        {
            flag = true;
        }
        else
        {
            flag = false;
        }
    }
    return flag;
}