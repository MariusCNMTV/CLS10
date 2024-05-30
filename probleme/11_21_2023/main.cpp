#include <iostream>

using namespace std;

int a,b,p,nrdiv,nrmax,nrmin,nrmare;

int main()
{
    cin>>a>>b;
    for (int i=a; i<=b; i++){
        nrdiv=0;
        for(d=2; d<=i; d=d+2){
            if(i%d==0) nrdiv++;
            if(nrdiv>nrmax){
                nrmax=nrdiv;
                nrmic=i;
            }
            else if(nrdiv==nrmax)nrmare=i;
        }
    }
    cout << nrmax << nrmic << nrmare<< endl;
    return 0;
}
