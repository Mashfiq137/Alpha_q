#include<bits/stdc++.h>

using namespace std;

const int N = 1000010;

bool vis[N];

void sieve (){
        for(int i=2;i<N;i++){
                    vis[0]=1;
                    vis[1]=1;
                    if(vis[i]) continue;
                    for(int j=i+i;j<N;j+=i) vis[j]=1;

        }
}

int main(){
        sieve();
        for(int i=0;i<N;i++) {

                    if(vis[i]==0) cout<<i<<" ";

        }
return 0;
}
