#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
bool vis[N];
vector<int> g[N];
queue<int> que;
void bfs(int vertex){
    vis[vertex]=true;
    
  while(que.size())
  {
      cout<<vertex<<" ";
      for(int child:g[vertex])
      {
          if(!vis[child]) 
          {
            que.push(child);
            vis[child]=true;
          } 
      }
      que.pop();
      bfs(que.front());
  }//O(n+m)  
}

int main(){
    int n,m;
    cin>>n>>m;//n  = vertex m=edges
    for(int i=0;i<m ; ++i)
    {
        int v1,v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    cout<<"BFS:: ";
    que.push(1);
    bfs(1);
}