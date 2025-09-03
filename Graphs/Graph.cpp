#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<vector<int>>& graph,int u,int v)
{
    graph[u][v]=1;
    graph[v][u]=1;
}

void displayGraph(vector<vector<int>>graph)
{
    int V=graph.size();

    for(int i=0;i<V;i++)
    {
        for(int j=0;j<V;j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int V=4;
vector<vector<int>> graph(V,vector<int>(V,0));

addEdge(graph,0,1);
addEdge(graph,0,2);
addEdge(graph,1,2);
addEdge(graph,2,3);

cout<<"Display the graph";

displayGraph(graph);
}