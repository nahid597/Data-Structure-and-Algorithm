#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;

    cout << " Enter how many number you short:";

    cin >> n;

    int x[100];

    for(int i = 1; i <= n; i++)
    {
        cin >> x[i];
    }


        for(int i = 1; i <= n; i++)
        {
            int p = x[i];

            for(int j = i ; j > 1; j--)
            {
                if(x[j - 1] > p)
                {
                   swap(x[j-1] , x[j]);
                }

            }

        }


        cout << "After sorting:"<<endl;

        for(int i = 1; i <= n; i++)
        {
            cout << x[i] << " ";
        }


    return 0;
}

