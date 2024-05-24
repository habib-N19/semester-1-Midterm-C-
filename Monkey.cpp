#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[100005];
    while (cin.getline(str, 100005))
    {
        int len = strlen(str);
        sort(str, str + len);
        for (int i = 0; i < len; i++)
        {
            /* code */
            if (str[i] == ' ')
            {
                continue;
     
            }else{
                cout << str[i];
            }
        }
        cout << endl;
        
    }
    
    return 0;
}