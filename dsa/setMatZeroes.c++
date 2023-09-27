#include <iostream>
using namespace std;
int main()
{
    int arr[4][4] = {{1, 1, 1, 1}, {1, 0, 1, 1}, {1, 1, 0, 0}, {0, 0, 0, 1}};
    int arr1[4] = {1, 1, 1, 1};
    int arr2[4] = {1, 1, 1, 1};
    // step1 --> find out wher it zeroes persent and add in crete d array
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == 0)
            {
                arr1[i] = 0;
                arr2[j] = 0;
            }
        }
    }
// step2 --> Logic implememnted  whwer we found zeroes in created array then 
//original array make it zeroes correponding postions
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr1[i] == 0 || arr2[j] == 0 || arr1[j] == 0 || arr2[i] == 0)
            {
                arr[i][j] = 0;
            }
        }
    }  // then print 

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
        std:
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}