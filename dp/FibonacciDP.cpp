#include<bits/stdc++.h>

using namespace std;

int memo[1000];

long long fibo(long long int n){

                    if(n==1 || n==0) return 1;

                    if(memo[n]!=-1) return memo[n];

                    return memo[n] = fibo(n-1) + fibo(n-2);


}

int main(){

            long long int n;

            cin>>n;

            memset(memo,-1,sizeof(memo));

            memo[0]=0;
            memo[1]=1;

            cout<<fibo(n)<<endl;


return 0;
}
