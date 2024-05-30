#include <fstream>

using namespace std;

ifstream fin("intrare.txt");
ofstream fout("iesire.txt");

int a,b;
int main()
{
    fin>>a>>b;
    fout<<a+b;
    return 0;
}
