#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x[100][100];
    int nodenumber,u,v,cost,src,dist;

    cout<<"Enter the number of nodes : ";
    cin >> nodenumber;

    for(int i = 0; i <= nodenumber ; i++){
      for(int j = 0; j <= nodenumber ; j++){

          if(i == j)
            x[i][j] = 0;
          else
            x[i][j] = 10000;
      }
   }

    cout<<"enter 2 nodes continue without end of file"<<endl;
    while(scanf("%d %d",&u,&v)!=EOF)
    {
        cout << "enter cost between 2 nodes"<<endl;
        cin >> cost;
        x[u][v] = cost;
    }

    for(int k = 1; k <= nodenumber ; k++){
      for(int i = 1; i <= nodenumber ; i++){
        for(int j = 1; j <= nodenumber ; j++){
           x[i][j] = min(x[i][j],x[i][k]+x[k][j]);
        }
      }
    }

    cout<<"Enter source node and distinacted node continue until enter endoffile"<<endl;
    while(scanf("%d%d",&src,&dist)!=EOF)
    {
        printf("%d - > %d : minimum cost is :%lld\n",src,dist,x[src][dist]);
    }

    return 0;
}
