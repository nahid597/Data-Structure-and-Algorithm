#include<bits/stdc++.h>

using namespace std;

int store[10000];
int divisor(int n) {

    int Count = 0,p = 1;

    memset(store, 0, sizeof(store));

   int  root = sqrt(n) + 5;

    for(int i = 2; i<= root; i++)
    {
        Count = 0;

       while(1) {
            if(n % i == 0)
            {
                cout << n << endl;
                Count++;
                n = n / i;
            }
            else
                break;
       }

       store[i] = Count;

    }

    return p;
}

int main()
{

    int n,x[10000],ans = 1,sum =1,Count = 0;
    cin >> n;

    divisor(n);

    memset(x, 1, sizeof(x));

    int  root = sqrt(n) + 2;

    for(int i = 1; i<= root; i++ )
    {
        if(store[i] != 0)
        {
            Count++;
            ans *= store[i] + 1;
           cout << i << "^" << store[i] << endl;

           sum *= (pow(i,store[i]+1)-1) / (i-1);

        }

    }

    cout << ans << " " << sum <<endl;




    return 0;
}
