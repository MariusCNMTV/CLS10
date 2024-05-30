#include <fstream>

using namespace std;

ifstream fin("date.in");
ofstream fout("date.out");

int x, maxx=-9999, minn=9999, n;
int main()
{
    fin >> n;
    for(int i=1; i<= n; i++){
        fin >> x;
        if(x>maxx){
            maxx=x;
        }
        if(x<minn){
            minn=x;
        }
    }
    fout << maxx << endl<< minn;
    return 0;
}
