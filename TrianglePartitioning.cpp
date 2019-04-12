#include<bits/stdc++.h>
using namespace std;
const int MAGIC=1000;
int cs;

double getRatio(double ab,double bc,double ac,double ad){

                        double ae,de,ss,bs,ade,abc,chotur,rat;

                        ae = (ac*ad)/ab;

                        de = (bc*ad)/ab;

                        ss=(ad+de+ae)/2.0;

                        bs=(ab+bc+ac)/2.0;

                        ade=sqrt(ss*(ss-ad)*(ss-de)*(ss-ae));

                        abc=sqrt(bs*(bs-ab)*(bs-bc)*(bs-ac));

                        chotur = abc-ade;

                        rat = ade/chotur;

return rat;

}

int main(){

            int t;

            cin>>t;

            while(t--){

            double a,b,c,r,k;

            cin>>a>>b>>c>>r;

              double lo=0,hi=a,mid;

                for(int i=0;i<MAGIC;i++){

                    mid = 0.5*(lo+hi);

                    k=mid;

                    if(getRatio(a,b,c,mid) > r) hi = mid;

                    else lo = mid;

                }

                printf("Case %d: %0.16f\n" , ++cs , (double)k);

            }

return 0;
}
