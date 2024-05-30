#include <iostream>
using namespace std;
int v[1001], i, j,n;

int main()
{
    cin >> n;
    for(i=1;i<=n; i++)
    cin >> v[i];
    for(i=1;i<n;i++){
        if(v[i]==0){
            for(j=i;j<n;j++){
                v[j]=v[j+1];
                n--;
                i--;
            }
        }
    }
    for(i=1; i<=n; i++)
        cout<<v[i]<<" ";
    return 0;
}
