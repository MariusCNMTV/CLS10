
#include <fstream>
using namespace std;
int v[100],k,n,m,ok,nr;

ifstream cin("clase.in");
ofstream cout("clase.out");

int main()
{

    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> v[i];
    cin >> m;
    long long x;
    for(int i = 1; i <= m; i++){
        cin >> x;
        int st = 1, dr = n;
        while(st <= dr && ok ==0){
            int mij = (st + dr) / 2;
            if(v[mij] == x){
                ok = 1;
            }
            else
                if(v[mij] < x)
                    st = mij + 1;
                else
                    dr = mij - 1;
        }
        if(ok==1) nr++;
    }
    cout << nr-1;
    return 0;
}
