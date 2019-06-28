#include<iostream>

using namespace std;

int number[100], used[100];

void permutation(int pos, int n)
{
   if(pos == n + 1)
   {

      for(int i = 1; i <= n; i++)
      {
         cout << number[i] << " ";
      }

      cout << endl;

      return;
   }

   for(int i = 1; i <= n; i++)
   {
      // cout << "nahi " << i << " pos " << pos <<  endl;
       if(!used[i])
       {
           number[pos] = i;
           used[i] = 1;
           permutation(pos + 1 , n);

           used[i] = 0;

       }
   }
}

int main()
{
   int n;
   cin >> n;

   permutation(1, n);
   cout << endl;

   return 0;
}


