#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    if (T < 1 || T > 100)
    {
        cout << "Invalid Test" << endl;
        return 0;
    }
    while (T--)
    {
       int n, sum;
         cin >> n >> sum;
        if (n < 1 || n > 100)
        {
            cout << "Invalid Test" << endl;
            return 0;
        }
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                for (int k = j+1; k < n; k++)
                {
                    if (arr[i] + arr[j] + arr[k] == sum)
                    {
                        flag = 1;
                    
                    }

                  }
                    
                    

                }
            }

        (flag== 1) ? cout<< "YES" << endl : cout << "NO" << endl;
        
        

    }
    return 0;
}