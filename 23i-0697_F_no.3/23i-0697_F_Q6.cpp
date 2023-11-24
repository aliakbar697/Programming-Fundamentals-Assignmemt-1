//////Name : Ali Akbar ; Roll no. 23i-0697 ; Assignment no.3
#include <iostream>
using namespace std;
bool repeatition(int arr[], int size, int replace);
void rearrange(int arr[], int);
void order(int arr[], int);
void output(int arr[], int);
int main()
{
    int n1, n2, n3;
    cout << "Enter the size of array 1 :";
    cin >> n1;
    const int size1 = n1;
    int arr1[size1];
    cout << "Enter the size of array 2 :";
    cin >> n2;
    const int size2 = n2;
    int arr2[size2];
    cout << "Enter the size of array 3 :";
    cin >> n3;
    const int size3 = n3;
    int arr3[size3];
    for (int i = 0; i < size1; i++)
    {
        do
        {
            cout << "Enter the element " << i + 1 << " in array1 : ";
            cin >> arr1[i];
        } while (arr1[i] < 0);
    }
    order(arr1, size1);
    bool flag1 = repeatition(arr1, size1, -1);
    for (int i = 0; i < size2; i++)
    {
        do
        {
            cout << "Enter the element " << i + 1 << " in array2 : ";
            cin >> arr2[i];
        } while (arr2[i] < 0);
    }
    order(arr2, size2);
    bool flag2 = repeatition(arr2, size2, -2);
    for (int i = 0; i < size3; i++)
    {
        do
        {
            cout << "Enter the element " << i + 1 << " in array3 : ";
            cin >> arr3[i];
        } while (arr3[i] < 0);
    }
    order(arr3, size3);
    bool flag3 = repeatition(arr3, size3, -3);
    bool f1 = false, f2 = false, f3 = false, f4 = false;
    int size = size1 + size2 + size3;
    if (flag1 == true && flag2 == true && flag3 == true)
    {
        size = size + 4;
        f1 = true;
    }
    else if (flag1 == true && flag2 == true)
    {
        size = size + 1;
        f3 = true;
    }
    else if (flag2 == true && flag3 == true)
    {
        size = size + 1;
        f2 = true;
    }
    else if (flag1 == true && flag3 == true)
    {
        size = size + 1;
        f4 = true;
    }
    const int sz = size;
    int result[sz];
    if (flag1 == true && flag2 == true && flag3 == true) ////For All repitition occur
    {
        result[0] = -123;
        result[1] = -23;
        result[2] = -13;
        result[3] = -12;
        int a = 0, i = 4;
        for (; a < size1; i++, a++)
        {
            result[i] = arr1[a];
        }
        int k = i, h = 0;
        for (; h < size2; k++, h++)
        {
            result[k] = arr2[h];
        }
        int u = k, t = 0;
        for (; t < size3; u++, t++)
        {
            result[u] = arr3[t];
        }
    }
    else
    {
        if (flag1 == true && flag2 == true) ////For array1 and array2 repitition
        {
            result[0] = -12;
            int a = 0, i = 1;
            for (; a < size1; i++, a++)
            {
                result[i] = arr1[a];
            }
            int k = i, h = 0;
            for (; h < size2; k++, h++)
            {
                result[k] = arr2[h];
            }
            int u = k, t = 0;
            for (; t < size3; u++, t++)
            {
                result[u] = arr3[t];
            }
        }
        else if (flag1 == true && flag3 == true) ////For array1 and array3 repitition
        {
            result[0] = -13;
            int a = 0, i = 1;
            for (; a < size1; i++, a++)
            {
                result[i] = arr1[a];
            }
            int k = i, h = 0;
            for (; h < size2; k++, h++)
            {
                result[k] = arr2[h];
            }
            int u = k, t = 0;
            for (; t < size3; u++, t++)
            {
                result[u] = arr3[t];
            }
        }
        else if (flag3 == true && flag2 == true) ////For array3 and array2 repitition
        {
            result[0] = -23;
            int a = 0, i = 1;
            for (; a < size1; i++, a++)
            {
                result[i] = arr1[a];
            }
            int k = i, h = 0;
            for (; h < size2; k++, h++)
            {
                result[k] = arr2[h];
            }
            int u = k, t = 0;
            for (; t < size3; u++, t++)
            {
                result[u] = arr3[t];
            }
        }
        else
        {
            int a = 0, i = 0;
            for (; a < size1; i++, a++)
            {
                result[i] = arr1[a];
            }
            int k = i, h = 0;
            for (; h < size2; k++, h++)
            {
                result[k] = arr2[h];
            }
            int u = k, t = 0;
            for (; t < size3; u++, t++)
            {
                result[u] = arr3[t];
            }
        }
    }
    rearrange(result, sz);
    //////////////>>>>>>Outputs<<<<<//////////
    // output(arr1, size1);    // after arranging of array1 only
    // output(arr2, size2);    // after arranging of array2 only
    // output(arr3, size3);   // after arranging of array3 only
    output(result, sz);
    return 0;
}
void order(int arrA[], int size) /////For odd and evens
{
    int i = 1;
    while (i <= size)
    {
        for (int a = 0, b = 1; a < size && b < size; a++, b++)
        {
            if (arrA[a] % 2 != 0 && arrA[b] % 2 == 0)
            {
                int temp = arrA[a];
                arrA[a] = arrA[b];
                arrA[b] = temp;
            }
        }
        i++;
    }
}
bool repeatition(int arr1[], int size, int replace) /////For replacing
{
    bool flag = false;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr1[i] == arr1[j])
            {
                int temp = arr1[j];
                arr1[j] = replace;
                flag = true;
            }
        }
    }
    return flag;
}
void output(int arr[], int size) ////howing outputs
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void rearrange(int arr[], int size) //////Aranging in ascending order
{
    int s = 1;
    while (s <= size)
    {
        for (int a = 0, b = 1; a < size && b < size; a++, b++)
        {
            if (arr[a] > arr[b])
            {
                int temp = arr[a];
                arr[a] = arr[b];
                arr[b] = temp;
            }
        }
        s++;
    }
}
