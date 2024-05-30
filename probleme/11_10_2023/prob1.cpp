#include <iostream>

using namespace std;

int n,ok,aux,nr,s,c,uc;
float ma;

int main()
{
    cin >> n;
    while(n>0){
        ok=1; aux=n;
        while(n>0){
            uc=n%10;
            if(uc%2==0)ok=0;
            n=n/10;
        }
        if(ok==1){
            s=s+aux;
            nr++;
        }
        cin >> n;
    }
    ma = (float)s/nr;
    cout << ma << "hi";
    return 0;

}
