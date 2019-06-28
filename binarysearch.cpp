#include<iostream>

using namespace std;

int cnt =0, x[100];

int bs(int l , int r)
{
   cnt++;
   while(l < r)
   {

    int mid = l + (r-l) / 2;

    if(bs(m))
    {
       r = m;
    }
    else
      l = m + 1;

   }

   return cnt;

}

int main()
{
   int n;

   cin >> n;

   for(int i = 0; i < n; i++)
   {
      cin >> x[i];
   }

   int p = bs(0, n -1);

   cout <<  p  <<  endl;



     return 0;
}
