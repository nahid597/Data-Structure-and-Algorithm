#include<bits/stdc++.h>
using namespace std;

int gcd (int a, int b)
{
   if(b == 0) return a;

    if(a % b == 0) return b;

    gcd(b,a%b);
}

int lcm (int a, int b,int g)
{
  int s = (a * b)/g;
  return s;
}

int main()
{
    int a, b,p,q;
    cin >> a >> b;

    p = gcd(a,b);
    q = lcm(a,b,p);

    cout << "gcd is: " << p << endl;
    cout << "lcm is: " << q << endl;




    return 0;
}
