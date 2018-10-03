#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pi;
vector<pi> vi[100];
int dist[100];

void disktra(int src)
{
    memset(dist,10000,sizeof(dist));
   dist[src] = 0;

   priority_queue<pi,vector<pi> ,greater<pi> > pq;
   pq.push(make_pair(0,src));

   while(!pq.empty())
   {
       pi p = pq.top();
       pq.pop();
       vector<pi>::iterator it;

       int u = p.second;

       for(it = vi[u].begin();it!=vi[u].end();it++)
       {
       	 int dis = (*it).second;
       	 int cost = (*it).first;
       	 if(dist[u] + cost < dist[dis])
       	 {
       	   dist[dis] = dist[u] + cost;
       	   pq.push(make_pair(dist[dis],dis));
       	 }
       }
   }
}


int main()
{


   // freopen("dijkstra.txt","r",stdin);
    //freopen("dijkstra1.txt","r",stdout);


  int u,v,c,ve,eg;

    cout<<"Enter number of node"<<endl;
    cin >> ve;
    cout<<"Enter number of edges"<<endl;
        cin >> eg;

        for(int i=1;i<=eg;i++)
        {
            cin >> u >> v;
            cin >>c;

        }


  disktra(2);

  cout<<dist[3]<<endl;
  return 0;

}
