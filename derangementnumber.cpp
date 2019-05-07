#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;

    cin >> n;

    int dn[n+1], ans = 0;

    dn[0] = 1;
    dn[1] = 0;

    for(int i = 2; i < n; i++)
    {
       dn[i] = ( (n-1) * dn[i-1] ) + ((n-2) * dn[i-2]);
    }

    for(int i = 0; i < n; i++)
    {
        ans += dn[i];
    }

    cout << ans << endl;

    return 0;

}
