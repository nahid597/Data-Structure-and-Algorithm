#include<bits/stdc++.h>

using namespace std;

int ncr(int n, int r)
{

    int narr[n+1], n_rarr[n+1], rarr[n+1];
    int ans = 1;

    for(int i = 1; i <= n; i++)
    {
        narr[i] = i;
    }

    int n_r = n - r;

    for(int i = 1; i <= n_r; i++)
    {
        n_rarr[i] = i;
    }

    for(int i = 1; i <= r; i++)
    {
        rarr[i] = i;
    }

    for(int i = 1; i<= n_r; i++)
    {
        if(n_rarr[i] == narr[i])
        {
            narr[i] = 1;
        }
    }

    for(int i = 1; i<= n; i++)
    {
        for(int j = 1; j <= r; j++)
        {
            if(narr[i] % rarr[j] == 0)
            {
                narr[i] = narr[i] / rarr[j];
            }
        }
    }


    for(int i = 1; i <= n; i++)
    {
       cout << narr[i] << endl;
        ans *= narr[i];
    }


    return ans;

}


int main()
{

    int n, r;

    cin >> n >> r;

   int p = ncr(n, r);

   cout << p << endl;

    return 0;
}
