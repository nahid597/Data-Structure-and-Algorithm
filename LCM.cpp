
#include<bits/stdc++.h>

using namespace std;

int GCD(int a, int b)
{
    if(a % b == 0) return b;

    GCD(b,a % b);

}

int LCM(int a, int b)
{
    return a * b;
}


int main()
{

    int n,resultGCD,resultLCM;

    cin >> n;

    int x[n+1];

    for(int i = 0; i < n; i++)
    {
       cin >> x[i];

     //  mul *= x[i];
    }

    resultGCD = x[0];
    resultLCM = x[0];


    for(int i = 1; i< n; i++)
    {

        resultGCD = GCD(resultLCM, x[i]);
       // cout << "gcd " << resultGCD << endl;

        resultLCM = LCM(resultLCM, x[i]);

        resultLCM = resultLCM / resultGCD;
       // cout << "lcm " << resultLCM << endl;

    }

    cout << resultLCM << endl;


    return 0;
}
