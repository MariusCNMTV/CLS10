#include <iostream>

using namespace std;

int n,exp,k,uc,aux,p=1,prim=1;

void nr1(){
    cin >> n;
    for(int d = 2; d<=n/2; d++){
        exp = 0;
        while(n%d==0){
            n = n/d;
            exp++;
        }
        if(exp % 2 != 0)
            k++;
    }
    cout << k;
}

int main()
{
    cin >> n;
    while(n!=0){
        aux = n;
        p = 1;
        prim = 1;
        while(aux!=0){
            uc = aux%10;
            p = p*uc;
            aux = aux/10;
        }
        for(int d= 2; d<=p/2;d++){
            if(p%d==0 || p == 1 || p==0) { prim = 0; }
        }
        if (prim==1) { cout << p << endl; }
        cin >> n;

    }

    return 0;
}
