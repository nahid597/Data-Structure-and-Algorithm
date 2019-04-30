
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n, p , store = 0;

    cin >> n >> p;

    int y = n , i =0;

    while(n == 0)
    {
       i++;

       p = pow(p , i);
       n /= p;

       store += y / p;
    }

    cout << store << endl;

    return 0;
}
