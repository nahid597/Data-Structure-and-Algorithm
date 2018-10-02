#include<bits/stdc++.h>
using namespace std;

int ncr[100][100];


int main()
{

    int n , r;
    cin >> n >>  r;

    ncr[0][0] = 1;

    for(int i = 1; i<= n; i++)
    {
        for(int j = 0; j< n; j++)
        {
            if(j > i)
                ncr[i][j] = 0;
                else if(j ==  i || j == 0)
                    ncr[i][j] = 1;
                else
                    ncr[i][j] = ncr[i - 1][j - 1] + ncr[i - 1][j];
        }
    }

    for(int i = 1; i<= n ;i++)
    {
        for(int j = 0; j < n; j++ )
        {
            cout << ncr[i][j]<<endl;
        }
    }



    return 0;
}
