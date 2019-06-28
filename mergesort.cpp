#include<bits/stdc++.h>

using namespace std;

void marge(int arr[], int l , int m , int r)
{
    int i , j , k;
    int nl = m - l + 1;
    int nr = r - m;

   // cout << "nl " << l << endl;
   // cout << "nr " << r << endl;
   // cout << "m " << m << endl;

    /// create temp arry

    int L[nl+1], R[nr+1];

    //cout<< "n1 " << l << endl;

    /// copy data into L and R from arr[]

    for(i = 0; i < nl; i++)
    {
        cout << arr[l+i] << endl;
        L[i] = arr[l + i];
    }

    for(j = 0; j < nr; j++)
    {
        //cout << arr[m + j + 1] << endl;
        R[j] = arr[m + j + 1];
    }

    /// marge the temp arry back to arr[]

    i = 0; /// initial first subarray
    j = 0;  /// initail second subaray
    k = l;  /// initail merge array

    while(i < nl && j < nr)
    {
        if(L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }

        else
        {
            arr[k] = R[j];
            j++;
        }

        k++;
    }

    /// copy reaming array

    while(i < nl)
    {
       arr[k] = L[i];
       i++;
       k++;
    }

    while(j < nr)
    {
       arr[k] = R[j];
       j++;
       k++;
    }

}

void margeSort(int arr[], int l , int r)
{
   // cout << "nahid" << endl;

    if(l < r)
    {
         int m = l+ (r-l)/2;

       //  cout << m << endl;
        // cout << "l " << l << " " << "r " << r << endl;

        // Sort first and second halves
        margeSort(arr, l, m);
        margeSort(arr, m+1, r);

        marge(arr, l, m, r);

    }
        // Same as (l+r)/2, but avoids overflow for
        // large l and h



}

void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7, 45};
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    cout << arr_size << endl;

    printf("Given array is \n");
    printArray(arr, arr_size);

     margeSort(arr, 0, arr_size - 1);

    printf("\nSorted array is \n");
    printArray(arr, arr_size);




    return 0;
}
