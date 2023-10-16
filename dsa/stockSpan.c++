#include <iostream>
#include <vector>
using namespace std;

vector<int> calculateSpan(int price[], int n)
{
    // Your code here
    int left_idx = 0;
    vector<int> v(n);
    v[0]=1;
    for (int i = 1; i < n; i++)
    {
        left_idx = i+1;
        for (int j = i; j >= 0; j--)
        {
            if (price[j] > price[i])
            {
                left_idx = i - j;
                cout<<"leftidx"<<left_idx<<endl;
                break;
            }
        }
        v[i] =  left_idx;
    }
    return v;
}

int main()
{
    int n;
    cin >> n;
    int price[n];
    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }
    vector<int> v{calculateSpan(price, n)};
    for (int item : v)
    {
        cout << item << " ";
    }
    return 0;
}