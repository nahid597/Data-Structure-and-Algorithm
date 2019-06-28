#include<bits/stdc++.h>

using namespace std;

struct st {
    char name[100];
    int score;
};

//struct st player[500];
//struct st temp;

int main()
{
   st player[100];
   st temp;

    int n;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << "Enter palyer name: " ;
        cin >> player[i].name;
        cout << "Enter palyer score: " ;
        cin >> player[i].score;
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++ )
        {
            if(player[j].score < player[j+1].score)
            {
                temp = player[j];
                player[j] = player[j+1];
                player[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << player[i].name << " " << player[i].score << endl;
    }

    return 0;
}
