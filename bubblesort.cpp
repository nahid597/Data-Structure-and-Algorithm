#include<iostream>

using namespace std;

int main()
{

    int n;
    cout << "enter how  many number u want to sort: ";

    cin >> n;

    cout << endl;

    int x[n+1];

    cout << "enter numbers: " << endl;

    for(int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    int temp;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - 1; j++)
        {
            if(x[j+1] < x[j])
            {
               temp = x[j];
               x[j] = x[j+1];
               x[j+1] = temp;
            }
        }
    }

    cout << "after sorting..." << endl;

     for(int i = 0; i < n; i++)
    {
        cout << x[i] << " ";
    }

    cout << endl;


    return 0;
}
