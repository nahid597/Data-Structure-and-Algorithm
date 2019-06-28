
#include<bits/stdc++.h>

using namespace std;

int egcd(int a, int  b , int &x, int &y)
{
    if(a == 0)
    {
        x  = 0; y = 1;
        return b;
    }

    int x1, y1;

    int d = egcd(a%b, a , x1, y1);

    x = y1 - (b / a) * x1;

    y = x1;

    cout << x << " " << y;
    cout<< endl;

    return d;

}

int main()
{

    int x , y , a , b;

    cin >> a >> b >> x >> y;

    int p = egcd(a,b,x,y);

    cout << p << endl;

    return 0;
}
