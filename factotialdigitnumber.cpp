#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    float st = 0;

    for(int i = 1; i<= n; i++)
    {
        st += log10(i);
    }


    cout << int(st + 1) << endl;



    return 0;
}
