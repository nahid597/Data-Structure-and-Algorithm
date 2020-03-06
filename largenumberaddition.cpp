#include<iostream>

using namespace std;

int main()
{
    string s1, s2, rev1,rev2;

    cin >> s1 >> s2;

    int sz1 = s1.size();
    int sz2 = s2.size();

    int max_size = max(sz1,sz2);

    for(int i = sz1-1; i >= 0; i--)
    {
       rev1 += s1[i];
    }

    for(int i = sz2-1; i >= 0; i--)
    {
       rev2 += s2[i];
    }

    string strev1 = rev1, strev2 = rev2;

    for(int i = sz1; i < max_size; i++)
    {

         strev1 += '0';
    }

    for(int i = sz2; i < max_size; i++)
    {
       strev2 += '0';
    }

    string ans;
    int n = 0;

    //cout << strev1 << endl;
   // cout << strev2 << endl;

    for(int i = 0; i < max_size; i++)
    {
       int p = strev1[i] - 48;
       int q = strev2[i] - 48;

       int sum = p + q + n;
       int m1 = sum % 10;
       //cout << m1 << endl;
       ans += m1 + 48;
       n = sum / 10;
    }

    for(int i = ans.size() - 1; i >= 0; i--)
    {
        cout << ans[i] ;
    }


    cout << endl;


    return 0;
}
