#include <bits/stdc++.h>
using namespace std;

class Graph {
    int V;
 
    list<int>* adj;
 
    void DFSUtil(int v, bool visited[]);
 
public:
    Graph(int V); 
Graphs(int V); 
    void addEdge(int v, int w);
    void addEdges(int v, int w);

    void DFS(int v);
    void BFS(int s); 
};
Graph::Graphs(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
 
void Graph::addEdges(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
}
 
void Graph::BFS(int s)
{
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for(int i = 0; i < V; i++)
        visited[i] = false;
 
    // Create a queue for BFS
    list<int> queue;
 
    // Mark the current node as visited and enqueue it
    visited[s] = true;
    queue.push_back(s);
 
    // 'i' will be used to get all adjacent
    // vertices of a vertex
    list<int>::iterator i;
 
    while(!queue.empty())
    {
        // Dequeue a vertex from queue and print it
        s = queue.front();
        cout << s << " ";
        queue.pop_front();
 
        // Get all adjacent vertices of the dequeued
        // vertex s. If a adjacent has not been visited, 
        // then mark it visited and enqueue it
        for (i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            if (!visited[*i])
            {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
}
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
 
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);\
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
    
    bool* visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    DFSUtil(v, visited);
}
 void addEdged(vector<int> adj[], int u, int v) 
{ 
    adj[u].push_back(v); 
    adj[v].push_back(u); 
} 
  
// A utility function to print the adjacency list 
// representation of graph 
void printGraphs(vector<int> adj[], int V) 
{ 
    for (int v = 0; v < V; ++v) 
    { 
        cout << "\n Adjacency list of vertex "
             << v << "\n head "; 
        for (auto x : adj[v]) 
           cout << "-> " << x; 
       cout<<endl;
    } 
}
int main()
{

    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    cout <<endl<< "\tFollowing is Depth First Traversal"<<endl;
            cout<<"\t (starting from vertex 2) \n";
    g.DFS(2);
 
  Graph g1(4);
    g1.addEdge(0, 1);
    g1.addEdge(0, 2);
    g1.addEdge(1, 2);
    g1.addEdge(2, 0);
    g1.addEdge(2, 3);
    g1.addEdge(3, 3);
 
    cout <<endl<<endl<< "\tFollowing is Breadth First Traversal ";
         cout<<endl<< "\t(starting from vertex 2) \n";
    g1.BFS(2);
    
    cout<<endl<<endl;
    int V = 5; 
    vector<int> adj[V]; 
    addEdged(adj, 0, 1); 
    addEdged(adj, 0, 4); 
    addEdged(adj, 1, 2); 
    addEdged(adj, 1, 3); 
    addEdged(adj, 1, 4); 
    addEdged(adj, 2, 3); 
    addEdged(adj, 3, 4); 
    printGraphs(adj, V); 
    
    
    
}
