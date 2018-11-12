
#include<bits/stdc++.h>

using namespace std;

// 1 if not prime
// 0 if prime

int isPrime[100000],nPrime = 0,notPrime[100000];

void seive(int n){

    int limit = sqrt(n) + 2;

    isPrime[nPrime++] = 2;
    notPrime[1] = 1;

    for(int i = 4 ; i * i <= n; i += 2)
    {
        notPrime[i] = 1;
    }

    for(int i = 3; i <= n; i = i + 2)
    {

        if(!notPrime[i])
        {

            isPrime[nPrime++] = i;

            if(i <= limit)
            {
                for(int j = i*i ; j <= n; j += i * 2)
                {
                    notPrime[j] = 1;
                }
            }


        }
    }

    for(int i = 0; i < nPrime; i++)
    {
        cout << isPrime[i] << endl;
    }



}

int main()
{
    int n;
    cin >> n;
    seive(n);



    return 0;
}
