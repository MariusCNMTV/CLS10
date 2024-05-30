#include <iostream>

using namespace std;

int x,n,k,aux,p=1,nmax,nmin=99999;

void prob1(){
     cin >> n;
    while(n>0){
        if(n%10%2==0){
            aux = aux+n%10*p;
            p*=10;
            }
        n/=10;
    }
    for(int i = 1; i<=aux/2; i++){
        if(aux%i==0) k=k+i;
    }
    if(aux==k) cout << "DA" << endl;
    else cout << "NU" << endl;
}
int main()
{
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> x;
        if (x<nmin){
            nmin = x;
        }
        if (x>nmax){
            nmax = x;
        }
    }
    cout << (float)(nmax + nmin)/2 ;
    return 0;
}
