#include<bits/stdc++.h>

using namespace std;

int cnt = 0;

int binarySearch(int x[], int l , int h , int r)
{

    int m = (l + h) / 2;

   // if((l + h) & 1)
      // m++;

      cnt ++;

      cout << l << " " << h << endl;

    if(x[m] == r)
    return 0;




    if( r < x[m])
    {
        binarySearch(x, l , m, r);
    }
    else
    {
       cout << "nahid" << endl;
        binarySearch(x, m + 1, h , r);
    }


 return cnt;

}

int main()
{

  int n;

  printf("Enter how may number: ");

  scanf("%d", &n);

  int x[n+1];

  for(int i = 0; i < n; i++)
  {
    scanf("%d", &x[i]);
  }

  sort(x, x + n);

  printf("Which number number you want to find in array: ");

  int r;

  scanf("%d", & r);

  int store = binarySearch(x, 0 , n - 1 , r);

  printf("Number of search in array %d\n", store);


    return 0;
}
