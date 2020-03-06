#include<iostream>

using namespace std;

class SelectionSort{

   public:
       int *Sort(int x[], int n)
       {
          int m = x[0];

          int so[n+1];

          for(int i = 0; i < n; i++)
          {
              m = x[i];
              int st = i;
              //cout << st << endl;

             for(int j = i + 1; j < n; j++)
             {
               // cout << m << " " << x[j] << endl;
               //cout << x[j] << endl;
                if(m >= x[j])
                {
                  //cout << "nahid" << endl;
                  m = x[j];
                  st = j;

                }
             }

             so[st] = x[i];
             x[i] = x[st];
             x[st] = so[st];
             //cout << x[i] << endl;
          }


         return x;

       }
};

int main()
{
    SelectionSort obj;

    int n;

    cin >> n;

    int x[n+1];

    for(int i = 0; i < n; i++)
    {
       cin >> x[i];
    }

    int *ans;
    ans = obj.Sort(x, n);

    for(int i = 0; i < n; i++)
    {
       cout << *(ans+i) << " ";
    }

    cout << endl;

}
