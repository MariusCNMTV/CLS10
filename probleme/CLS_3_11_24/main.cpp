#include <iostream>
using namespace std;
int v[100],n,p,o,aux,auy;nr;

int main()
{
    cin >> n;
    for(int i=1;i<=n; i++){
        cin >> v[i];
    }
    for(int i=1;i<=n; i++){
        aux = v[i];
        auy = v[i];
        p = 1;
        while(auy!=0){
            ogl = ogl*10+auy%10;
            auy/=10;
        }
        for(int j=1; j<=aux/2; j++){
            if(aux%j==0) p=0;
        }


    }

    return 0;
}

/* cin >> n; p=1;
    for(int i=n;i>=1;i--){
        v[i] = p*p;
        p += 2;
    }
    for(int i=1;i<=n; i++){
        cout << v[i] << " ";
    }
*/
