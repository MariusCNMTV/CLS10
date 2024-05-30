#include <iostream>

using namespace std;
int a[101][101],n,m,k=0;

int main()
{
    cin>>n>>m;
    cout << k;
    for(int i=1;i<=n;i++){
        k++;
        for(int j=1;j<=m;j++){
            a[i][j]=1;
            if(k%2==0){
               a[i][j]=0;}
            else if(k%2 !=0){
                a[i][j]=0;}

        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
