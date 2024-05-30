#include <iostream>

using namespace std;
int a[100][100], i, k=3, n=4, j, z;

int main()
{
    z = n;
    while(j<=n){
        for (i=j; i<=n; i++){
           for (j=j; j<=n; j++){
            a[i][j]=k*j;
           }
        }
        j++;
    }

    for (i=1; i<=n; i++){
        for (j=1; j<=n; j++){
           cout << a[i][j] << " " ;
        }
        cout << endl ;
    }
    return 0;
}
