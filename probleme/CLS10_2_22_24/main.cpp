#include <iostream>
using namespace std;

int n,v1[100],v2[100],i,k,aux,s;

int main()
{
    cin>>n;
    k=0;
    for(int i =1; i<=n; i++){
        cin >> v1[i];
    }
    for(int i=1; i<=n; i++){
        aux = v1[i];
        s = 0;
        while(aux!=0){
            s = s + aux %10;
            aux = aux / 10;
        }
        if(s%2==0){
            k++;
            v2[k]= v1[i];
        }
    }
    cout <<"Afiseaza: ";
    for(int j =1; j<=k; j++){
        cout << v2[j] << " ";
    }
    return 0;
}
