#include <iostream>
using namespace std;

int n,a,b,p=1,s,nr,pi=1,si,nri;

int main()
{
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "n = ";
    cin >> n;

    for(int i =1 ; i <= n/2 ; i ++ )
        if(n % i == 0 && i % 2 == 0){
            s = s+i;
            p = p*i;
            nr++;
            cout<<i<<" ";
        }
        else if(n % i == 0 && i % 2 != 0){
            si = si+i;
            pi = pi*i;
            nr++;
            cout<<i<<" ";
        }
    if (n%2==0){s = s+n;p = p*n;nr++;}
    cout<<n;
    cout << "\nSuma Divizorilor Pari: " << s << " Si Impari: " << si << endl;
    cout << "Produsul Divizorilor Pari: " << p << " Si Impari: " << pi << endl;
    cout << "Numarul De Divizori: "<< nr << endl;

    for(int i=a; i<=b; i++){
        nri = 2;
        for(int d=2; d<=i/2; d++){
            if(i%d==0){
                nri++;
            }
        }
    }
    cout << "Numarul De Divizori Din [a,b]: "<< nri << endl;
    return 0;
}
