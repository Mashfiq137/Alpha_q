#include<bits/stdc++.h>

using namespace std;

int cs,t;

int Triangle_Count(int A[],int n){

                sort(A+0,A+n);
                int num = 0,k;
                for(int i=0;i<n-2;i++){

                    k=i+2;
                    for(int j=i+1;j<n;j++){

                           while(k<n && A[i]+A[j]>A[k]) k++;

                           if(k>j) num+=k-j-1;

                    }

                }

return num;
}
int main(){

    cin>>t;

    int n;

    while(t--){

               cin>>n;

               int ara[n];

               for(int i=0;i<n;i++) cin>>ara[i];

               int p = Triangle_Count(ara,n);

               printf("Case %d: %d\n",++cs,p);

    }


return 0;
}
