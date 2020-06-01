#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Graph{
    int v,e;
    vector<int>* adj;
};
vector<bool> vis;
void bfs(int s,Graph *graph){
    queue<int> qu;
    qu.push(s);
    vis[s] = true;
    while(!qu.empty()){
        s = qu.front();
        cout<<s<<" ";
        qu.pop();
        for(int i=0;i<graph->adj[s].size();i++){
            if(!vis[graph->adj[s][i]]){
                qu.push(graph->adj[s][i]);
                vis[graph->adj[s][i]] = true;
            }
        }
    }
}


int main(){
    Graph* graph = new Graph();
    cin>>graph->v>>graph->e;
    int u,v;
    graph->adj = new vector<int>[graph->v];
    
    for(int i=0;i<graph->v;i++)
        vis.push_back(false);
    for(int i=0;i<graph->e;i++){
        cin>>u>>v;
        graph->adj[u].push_back(v);
    }
//    for(int i=0;i<graph->e;i++){
//        for(int j=0;j<graph->adj[i].size();j++){
//            cout<<graph->adj[i][j]<<" ";
//        }
//        cout<<endl;
//    }
	bfs(1,graph);
    vis.clear();
    return 0;
}
