#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.in");

int x,p,nr,u,nrt;

int main()
{
    while(fin>>x){
        nr++;
        if(x>=0){
            if(p==0)p=nr;
            else u=nr;
        }
    }
    nrt=nr-p+1;
    if(nrt>u)cout<< nrt << endl;
    else cout << u;
    return 0;
}
