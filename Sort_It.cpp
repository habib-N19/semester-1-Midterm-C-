#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    int a;
    cin>>a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }

   sort(arr, arr+a);
    for (int i = 0; i < a; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr, arr+a, greater<int>());
    for (int i = 0; i < a; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    
    

    return 0;
}
