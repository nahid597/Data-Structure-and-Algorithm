#include<bits/stdc++.h>
using namespace std;

int bigmod(int a, int b, int m)
{
    if(b == 0) return 1 % m;

    int x = bigmod(a,b/2,m);

   // cout << "nahid" << endl;

    x = (x * x ) % m;

    if(b % 2 == 1)
        x = ( x * a ) % m;
    return x;
}

int main()
{
    int a, b, m, result;

    cin >> a >> b >> m;

    result = bigmod(a,b,m);
    cout << result<<endl;



    return 0;
}
