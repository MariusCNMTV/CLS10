#include <iostream>

using namespace std;

int x,y,z,uc,s,p,pri;
long long  n;

void s_numere_p()
{
    cin >> n;
    while(n>0){
        uc = n%10;
        if (uc%2==0){
            s = s+uc;
        }
        n=n/10;
    }
    cout << s;

}
void p_numere_i()
{
    cin >> n;
    s = 1;
    while(n>0){
        uc = n%10;
        if(uc%2!=0){
            x = 1;
            s = uc*s;
        }
        else {x = 0;}
        n = n/10;
    }
    if(x==0){cout << "Nu exista cifre impare" << endl;}
    else{cout << s << endl;}
}
void prietenul()
{
    cin >> n;
    p = 1;
    while(n>0){
        uc = n%10;
        if (uc%2 == 0){uc++;}
        else {uc--;}
        pri = pri+uc*p;
        p = p*10;
        n = n/10;
    }
    cout << "Prietenul : " << pri << endl;
}


int main()
{
    prietenul();
    return 0;
}
