#include <iostream>
#include <vector>
using namespace std;

struct Graph{
    int v,e;
    vector<int>* adj;
};
vector<bool> vis;
void dfs(int s,Graph *graph){
    vis[s] = true;
    cout<<s<<" ";
    for(int i=0;i<graph->adj[s].size();i++){
        if(!vis[graph->adj[s][i]]){
            dfs(graph->adj[s][i],graph);
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
//    cout<<graph->adj[1].size();
//    for(int i=1;i<graph->v;i++){
//    	cout<<i+1<<":";
//        for(int j=0;j<graph->adj[i].size();j++){
//            cout<<graph->adj[i][j]<<" ";
//        }
//        cout<<endl;
//  }
    dfs(1,graph);
    vis.clear();
    return 0;
}
