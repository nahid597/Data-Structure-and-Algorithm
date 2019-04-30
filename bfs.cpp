
#include<bits/stdc++.h>

using namespace std;

int visited[1000];
vector < int > adj[1000];

// if 0 then it is not visited
// if 1 then it is visited

void bfs(int s , int n)
{
    visited[s] = 1;

    queue < int > Q;

    Q.push(s);

    while(!Q.empty())
    {
        int p = Q.front();

        cout << p <<  " ";
        Q.pop();

        for(int i = 0; i < adj[p]. size(); i++)
        {
            if(visited[adj[p][i]] == 0)
            {
                int st = adj[p][i];
                visited[st] = 1;
                Q.push(st);
            }
        }
    }

}


int main()
{

    int n , edgs , s , a , b ;

    cout << "Enter number of nodes: " << endl;
    cin >> n ;

    cout << "Enter nodes: " << endl;

    int x[n+1];

    for(int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    cout << "Enter number of edged: " << endl;
    cin >> edgs ;

    cout << "Enter edge between two nodes: " << endl;

    for(int i = 0; i < edgs; i++)
    {
        cin >> a >> b ;
        adj[a].push_back(b);
    }

    cout << "Enter start nodes: " << endl;
    cin >> s ;

    bfs(s , n);

    cout << endl;


    return 0;
}
