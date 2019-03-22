#include<bits/stdc++.h>
#define Graph_Size 10
using namespace std;
//int graph[10][10];
//BFS: Traversal Algorithm.
vector <int> graph[Graph_Size];
int visited[Graph_Size];
void bfs(int start)
{
    int cur;
    int next;
    queue <int> q;
    q.push(start);
    visited[start]=1;
    while(!q.empty()){
        cur = q.front();
        q.pop();
        for(int i=0;i<graph[cur].size();i++)
        {
        next = graph[cur][i];
        if(!visited[next])
        {
            visited[next]=1;
            q.push(next);
        }
    }
    }

}


int main(){

            int n;
            int m;
            cin>>n>>m;
            //n=vertex,m =edge
            for(int i=0;i<m;i++)
            {
                int x,y;
                cin>>x>>y;
                graph[x].push_back(y);
                graph[y].push_back(x);
            }

            bfs(2);
            for(int i=1;i<=n;i++){
                    for(int j=0;j<graph[i].size();j++){
                            cout<<graph[i][j]<<" ";
            }
                cout<<endl;
                }
return 0;
}

