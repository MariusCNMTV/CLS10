#include <iostream>

using namespace std;

int m,n,p,q,s,x;

void translate2(){
    cin >> m >> n >> p >> q;
    for(x=p; x<=q; x++){
        if(x%m==0 || x%n==0){s+=x;}
        if(x%m==0 && x%n==0){s-=x;}
    }
    cout << s;
}
void prim(){
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> x;
        int prim = 1;
        for(int d=2; d <= n;d++){
            if(x%d==0){prim = 0;}
            if(x==1 || x == 0){prim = 0;}
        }
        if(prim==1){s+=x;}

    }
    cout << s;
}
int main()
{
    prim();
    return 0;
}
