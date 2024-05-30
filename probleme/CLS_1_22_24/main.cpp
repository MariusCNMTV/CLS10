#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.txt");

int x,y,nr,ok=0;

int main()
{
    fin>>x;
    nr=1;
    while(fin>>y){
        if(nr==2){ cout<<x<<" "; nr=1; ok=1;}
        else if(x==y)nr++;
        x=y;
    }
    if(ok==0)cout<<"Nu sunt numere" << endl;
    fin.close();
    return 0;
}
