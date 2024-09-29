#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> res1;
    vector<int> res2;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0) {
            res1.push_back(arr[i]);
        }
        else {
            res2.insert(res2.begin() ,arr[i]);
        }
    }
    int rem = n % 2;
    for (int i = 0; i < ((n/2)+rem); i++)
    {   
        cout << res1[i] << " ";
    }
    for (int i = 0; i < n/2; i++)
    {   
        cout << res2[i] << " ";
    }
}

