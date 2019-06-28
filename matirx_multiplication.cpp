#include<iostream>

using namespace std;

int main()
{
    int r , c;

    cin >> r >> c;

    int x[r+1][c+1], y[r+1][c+1], store[r+1][c+1];

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin >> x[i][j];
        }
    }

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin >> y[i][j];
        }
    }

    int sum = 0;

    for(int c = 1; c < 3; c++)
    {

        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                for(int k = 0; k < c; k++)
                {
                    sum += x[i][k] * y[k][j];
                }

                store[i][j] = sum;
                x[i][j] = sum;
                cout << x[i][j] << " ";
                sum = 0;

            }

            cout << endl;
        }

    }

    cout << "Result: " << endl;

     for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cout << store[i][j] << " ";
        }

        cout << endl;
    }


    return 0;
}
