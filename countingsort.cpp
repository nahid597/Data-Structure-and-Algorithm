#include<bits/stdc++.h>

using namespace std;

void countsort(int arr[], int n)
{

    int output[n+1];

    int mx = INT_MIN;

    for(int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
    }

    int Count[mx+1];

    memset(Count, 0 , sizeof(Count));

   // cout << n << endl;

    for(int i = 0; i < n; i++)
    {
        //cout << arr[i] << endl;
        Count[arr[i]]++;

    }

    for(int i = 1; i <= mx; i++)
    {
        Count[i] = Count[i] + Count[i-1];
    }

    for(int i = 0; i < n; i++)
    {
        output[Count[arr[i]] - 1] = arr[i];
          Count[arr[i]]--;
    }

    for(int i = 0; i < n; i++)
    {
       arr[i] = output[i];
    }


    //cout << mx << endl;
}

int main()
{

   int n;

   while(cin >> n)
   {

       int arr[n+1];

       for(int i = 0; i < n; i++)
       {
           cin >> arr[i];
       }

        int sz =  sizeof(arr) / sizeof(arr[0]);
        countsort(arr, sz - 1 );

        for(int i = 0; i < n; i++)
        {

            cout <<  arr[i] << " ";
        }

        cout << endl;

   }

  return 0;
}
