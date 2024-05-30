#include <iostream>

using namespace std;
int v[1001], y[1001], n,i,d,j,nrd,schimb;

int main()
{
    cin >> n;
    for(i=1; i<=n; i++){
        cin >> v[i];
    }
    for(i=1; i<=n; i++){
        nrd =1;
        for(j=1; j<=v[i]/2; j++)
            if(v[i]%j==0) nrd++;
        y[i]=nrd;

    }
    // Afisam Vectorul cu Divizorii
    for(i=1;i<=n-1;i++){
        for(j=i+1;j<=n-1;j++){
            if(y[i]>y[j]){
                swap(y[i],y[j]);
                swap(v[i],v[j]);

            }
        }
    }
    for(i=1; i<=n; i++){
        cout << v[i] << " ";
    }
    return 0;
}
