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
    void BFS(int v);
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

void Graph::BFS(int s)
{

    bool *visited = new bool[V];
    for(int i = 0; i < V; i++)
        visited[i] = false;


    list<int> queue;


    visited[s] = true;
    queue.push_back(s);


    list<int>::iterator i;

    while(!queue.empty())
    {

        s = queue.front();
        cout << s << " ";
        queue.pop_front();

        for(i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            if(!visited[*i])
            {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
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
    depth.BFS(1);
    return 0;
}

