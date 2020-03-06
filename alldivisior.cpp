#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;

    cin >> n;

    int x[n+1], k = 0;

    for(int i = 1; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
           x[k++] = i;
           if(i != n/i)
            x[k++] = n / i;
        }
    }

    sort(x, x + k);

    for(int i = 0; i < k; i++)
    {
      cout << x[i] << " ";
    }

    cout << endl;

    return 0;
}
