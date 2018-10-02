#include<bits/stdc++.h>
using namespace std;

vector <int > vec;
vector <int > :: iterator it;

void divisor(int n)
{
    int j,c=0,limit = sqrt(n+1);

    for(int i = 1; i<= limit; i++)
    {
        if(n %i ==0)
        {
           vec.push_back(i);
           vec.push_back(n/i);
           c = c+2;

        }

    }

    for( int i = 0; i< c; i++ )
    {
        cout << vec[i]<<" ";
    }




}

int main()
{

    int n;
    cin >> n;
    divisor(n);


    return 0;
}
