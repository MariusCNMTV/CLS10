#include <fstream>

using namespace std;

ifstream fin("calcul.in");
ofstream fout("calcul.out");

int x,prim,d,nr;

int main()
{
    nr=0;
    while(fin>>x){
        prim=1;
        if(x==0 || x==1) prim=0;
        for(d=2;d<=x/2;d++){
            if(x%d==0)prim=0;
        }
        if(prim==1) nr++;
    }
    if(nr==0)fout << "nu exista nr prime";
    else fout << nr;
    fin.close();
    fout.close();
    return 0;
}
