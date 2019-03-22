#include<bits/stdc++.h>
#define Graph_Size 10
using namespace std;
//int graph[10][10];
int main(){

            vector <int> graph[Graph_Size];
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
            for(int i=1;i<=n;i++){
                    for(int j=0;j<graph[i].size();j++){
                            cout<<graph[i][j]<<" ";
            }
                cout<<endl;
}
return 0;
}
