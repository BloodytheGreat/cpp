#include<iostream>
#include<list>


using namespace std;

class Graph
{
    int V;
    list<int> *adj;
    void DFSUtil(int v, bool visited[]);
public:
    Graph(int V);
    void addarc(int v, int w);
    void DFS(int v);
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addarc(int v, int w)
{
    adj[v].push_back(w);
}

void Graph::DFSUtil(int v, bool visited[])
{

    visited[v] = true;
    cout << v << " ";


    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFSUtil(*i, visited);
}


void Graph::DFS(int v)
{

    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;


    DFSUtil(v, visited);
}
int main()
{
    int narcs[1000][2] = {0};
    int num1,num2,arc,max = 0;

    cin >>arc;
    for(int i = 0;i < arc;i++)
    {
        cin >> num1 >> num2;
        if(num1 > num2 && num1 >max)
        {
            max = num1;
        }
        if(num1 < num2 && num2 > max)
        {
            max = num2;
        }
    narcs[i][0] = num1;
    narcs[i][1] = num2;

    }
    Graph depth(max+1);
    for(int i = 0;i < arc;i++)
    {
        depth.addarc(narcs[i][0], narcs[i][1]);
    }
    depth.DFS(1);
    return 0;
}
