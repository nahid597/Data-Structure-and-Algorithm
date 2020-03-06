#include<iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int a[10000] = {0};

  for(int i = 0; i < n; i++)
  {
     cin >> a[i];
  }

  int st = 0, ans = 0,s1,s2, sum = 0;

  for(int i = 0; i < n; i++)
  {
     st++;
     for(int j = 0; j < n; j++)
     {
        sum = 0;
        for(int k = 0; k  < st; k++)
        {
            sum += a[j+k];
        }

        if(ans < sum)
        {
           //cout << ans << endl;
            ans = sum;
            s1 = j;
            s2 = j + st;
        }
     }
  }

  cout << "maximum sum " << ans << endl;

  cout << "sub array are: ";

  for(int i = s1; i < s2; i++)
  {
     cout << a[i] << " ";
  }

  cout << endl;








  return 0;
}
