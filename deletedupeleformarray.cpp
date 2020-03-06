#include<bits/stdc++.h>

using namespace std;

int main()
{
   int sz = 5,sz2 = 4;

   int arr1[sz] = {2,4,5,7,8};
   int arr2[sz2] = {3,4,2,1};

   int i , j, k, l , n = sz, n2 = sz2;

   for(i = 0; i < n; i++)
   {
      for(j = 0; j < n2; j++)
      {
        if(arr1[i] == arr2[j])
        {
          for(l = i; l < n; l++)
          {
             arr1[l] = arr1[l+1];
          }
          for(k = j; k < n2; k++)
          {
              arr2[k] = arr2[k+1];
          }

          n--;
          n2--;
          j--;
          i--;
        }

      }

   }

   for(int i = 0; i < n; i++)
   {
     cout << arr1[i] << " ";
   }

   cout << endl;

   for(int i = 0; i < n2; i++)
   {
     cout << arr2[i] << " ";
   }

    return 0;
}
