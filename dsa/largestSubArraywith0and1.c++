#include <iostream>
#include <vector>
#include <unordered_map> 
using namespace std;
void findLargest0and1(vector<int> &arr, int n)
{
     unordered_map<int,int> mp;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            arr[i] = -1;
        }
    }
    int length = 0;
    int sum = 0;
    int start = 0;
    int end = -1;
    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        if (currSum == 0)
        {
            start = 0;
            end = i;
            // not complted yet
            if (length < end - start + 1)
            {
                length = end - start + 1;
            }
            break;
        }
       
        
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    findLargest0and1(arr, n);
    return 0;
}