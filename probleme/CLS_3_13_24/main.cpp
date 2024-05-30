#include <iostream>

using namespace std;
int n,v[100],i,uc1,uc2,nou,cop1,cop2;
int main()
{
    cin >> n;
    for(i=1; i<=n; i++){
        cin >> v[i];
    }
    for(i=1;i<=n-1;i++){
        if(v[i]%2==v[i+1]%2){
            nou = 0; cop1=v[i]; cop2=v[i+1];
            while(cop1>0 || cop2>0){
                uc1=cop1%10;
                uc2=cop2%10;
                if(uc1>uc2){
                    nou = nou + p*uc1;
                }
                else {
                    nou = nou + p*uc2;

                }
                p *= 10;
                cop1 /= 10;
                cop2 /= 10;
            }
            for(j=n+1; j>=i; j--){

            }
        }
    }
}
