////////Name: AliAkbar ; Rollno.: 23i-0697 ; Assignment no.3
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
bool checking(int[][100], int[][100], const int); /////For checking is matrix symmetrix or not.
int main()
{
    int output[200];
    bool flag;
    int test_cases, N, K;
    while (1)
    {
        //  cout << "Enter the no. of test cases (Testcases<=200):";
        cin >> test_cases;
        if (test_cases > 0 && test_cases <= 200)
            break;
    }
    int i;
    for (i = 1; i <= test_cases; i++)
    {
        while (1)
        {
            // cout << "Enter the array size (1<=Size<=100):";
            cin >> N >> K;
            if ((N >= 1 && N <= 100) && (K >= 1 && K <= 9))
                break;
        }
        srand(time(NULL));
        const int l1 = N;
        int array1[l1][100];
        int array2[l1][100];
        int p;
        for (p = 0; p < l1; p++)
        {
            for (int j = 0; j < l1; j++)
            {
                cin >> array1[p][j];
                // cout << array1[p][j] << " ";
            }
        }
        int u = 0;
        for (; u < l1; u++)
        {
            for (int j = 0; j < l1; j++)
            {
                cin >> array2[u][j];
                //  cout << array2[u][j] << " ";
            }
        }
        flag = checking(array1, array2, l1);
        // cout << flag << endl;
        int count = 0;
        if (flag == true)
        {
            for (int r = 0; r < l1; r++)
            {
                for (int j = 0; j < l1; j++)
                {
                    if (array1[r][j] == array2[r][j])
                    {
                        continue;
                    }
                    else
                        count++;
                }
            }
            count++;
            for (; flag == true;)
            {
                array1[1][0] = rand() % K + 1;
                flag = checking(array1, array2, l1);
                if (flag == false)
                {
                    break;
                }
            }
        }
        else if (flag == false)
        {
            for (int r = 0; r < l1; r++)
            {
                for (int j = 0; j < l1; j++)
                {
                    if (array1[r][j] == array2[r][j])
                    {
                        continue;
                    }
                    else
                        count++;
                }
            }
        }
        output[i - 1] = count;
    }
    for (int i = 0; i < test_cases; i++)
    {
        cout << "Case " << i + 1 << " :" << output[i] << endl;
    }
    return 0;
}
bool checking(int array1[][100], int array2[][100], const int l1)
{
    int array3[l1][l1]; /////For taking transpose of matrix
    for (int i = 0; i < l1; i++)
    {
        for (int j = 0; j < l1; j++)
        {
            array3[j][i] = array2[i][j];
        }
    }
    for (int i = 0; i < l1; i++)
    {
        for (int j = 0; j < l1; j++)
        {
            if (array3[i][j] == array1[i][j])
                continue;
            else
                return false;
        }
    }
    return true;
}