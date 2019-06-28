#include<iostream>

using namespace std;

int main()
{

    int n;

    cout << "Enter how may number u want to sort " << endl;

    cin >> n;

    int x[n+1];

    cout << "Enter numbers: " << endl;

    for(int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    for(int i = 0; i < n; i++)
    {
        int p = x[i];

        for(int j = i; j >= 0; j--)
        {
            if(p < x[j])
            {
                x[j + 1] = x[j];
                x[j] = p;
            }
        }


    }

    cout << "After insertion sort " << endl;

    for(int i = 0; i < n; i++)
    {
        cout << x[i] << " ";
    }

    cout << endl;





    return 0;
}
