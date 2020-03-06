#include<bits/stdc++.h>

using namespace std;

int arr[1000];

void Merge(int arr[], int l, int r, int m)
{
    int i , j , k ;

    int nl, nr;

    //cout << "mahid" << endl;

    nl = m - l + 1;
    nr = r - m;

    int la[nl+1], ra[nr+1];

    //cout << nl << endl;

    for( i = 0; i < nl; i++)
    {
        la[i] = arr[l + i];
       // cout << la[i] << endl;
    }

    for( j = 0; j < nr; j++)
    {
        ra[j] = arr[ m + j + 1];
    }

    i = j = 0;
    k = l;

    while(i < nl && j < nr)
    {
        if(la[i] < ra[j])
        {
           arr[k] = la[i++];
           //cout << arr[k] << endl;
           k++;
        }
        else
        {
            arr[k] = ra[j++];
            //cout << arr[k] << endl;
            k++;
        }
    }

    while(i < nl)
    {
      arr[k] = la[i++];
     // cout << arr[k] << endl;
      k++;
    }

    while(j < nr)
    {
      arr[k] = ra[j++];
     // cout << arr[k] << endl;
      k++;
    }

}

void mergesort(int arr[], int l, int r)
{
  if(l < r)
  {
    //cout << l << " " << r << endl;
     int mid = (l+r) / 2;

      mergesort(arr, l, mid);
      mergesort(arr, mid+1, r);
      Merge(arr, l, r, mid);
  }
}

void print(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
   int n;

   cin >> n;

   for(int  i = 0; i < n; i++)
   {
       cin >> arr[i];
   }

   mergesort(arr, 0, n-1);

   print(arr, n);






   return 0;
}
