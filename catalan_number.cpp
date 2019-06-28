#include<iostream>

using namespace std;

int catalan(int n)
{
    int p = n;

    int fac_2n[2*n +1], fac_2n_n[2*n + 1], fac_n[2*n+1];

    for(int i = 1; i <= 2 * n; i++)
    {
        fac_2n[i] = i;
    }


    for(int i = 1; i<= n; i++)
    {
        fac_2n_n[i] = i;
    }

    for(int i = 1; i<= n; i++)
    {
        fac_n[i] = i;
    }

    for(int i = 1; i<= n; i++)
    {
        if(fac_2n_n[i] == fac_2n[i])
        {
            fac_2n[i] = 1;
        }
    }


     for(int i = 1; i<= 2* n; i++)
    {
       for(int j = 1; j <= n; j++)
       {
          if(fac_2n[i] % fac_n[j] == 0)
          {
             fac_2n[i] = fac_2n[i] / fac_n[j];
             fac_n[j] = 1;
          }
       }

    }

    int sum = 1;

    for(int i = 1; i <= 2 * n; i++)
    {
        sum *= fac_2n[i];
    }

    //cout << sum << endl;

    return sum;

}

int main()
{

    int n;

    cin >> n;

    int p = catalan(n);

    int ans = p / (n + 1);

    cout << ans << endl;



    return 0;
}
