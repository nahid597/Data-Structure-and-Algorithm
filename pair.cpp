#include<bits/stdc++.h>

using namespace std;

int main()
{

   // pair<int, int> pa[100];
    vector < pair<int, int> > vec;

    int n;

    cin >> n;

    int x[n+1];

    for(int i = 0; i < n; i++)
    {
        cin >> x[i];
        vec.push_back(make_pair(x[i] , i));
    }

    sort(vec.begin() , vec.end());

    for(int i = 0; i < n; i++)
    {
        cout << vec[i].first << " ";
        cout << vec[i].second << endl;
    }




    return 0;
}
