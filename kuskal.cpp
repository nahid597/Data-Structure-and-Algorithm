


#include<bits/stdc++.h>

using namespace std;

#define _ <<" "<<

struct node
{
	int u,v,cost;
};

vector<node>vect;
vector<node>span;
vector<node> :: iterator it;
int par[100001];

bool cmp1(const node &a,const node &b)
{
	return a.cost<b.cost;
}

int find(int n)
{
	if(n==par[n])
		return n;
	return par[n] = find(par[n]);
}

void minimum()
{
	int a, b;
	//cout<< sum << endl;
	for(it=vect.begin(); it!=vect.end(); it++)
	{
		a = find((*it).u);
		b = find((*it).v);
		if(a!=b)
		{
			par[a] = b;
			span.push_back(*it);
		}
		//cout<< sum << endl;
	}
}

int main()
{

    freopen("kruskal.txt","r",stdin);
	int n, m, a, b, c;
	node tmp;
	//cout << "Number of node:";
    cin >> n;
   // cout << "Number of edges:";
    cin >> m;
    while( m-- )
    {
        cin >> a >> b >> c;
        tmp.u = a;
        tmp.v = b;
        tmp.cost = c;
        vect.push_back(tmp);
    }
    for(int i=0;i<=n;i++) par[i] = i;
    sort(vect.begin(),vect.end(),cmp1);
    minimum();

    cout<<"minimum spanning tree is : "<<endl;
    for(it = span.begin(); it != span.end(); it++)
    {
        cout << (*it).u _ (*it).v _ (*it).cost << endl;
    }
	vect.clear();
    span.clear();
	return 0;
}

