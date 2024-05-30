#include <iostream>
#include <cmath>

using namespace std;

int i,x,nrp,s,n;

void ma_nr_pare()
{
    cin >> n;
    for(i=1;i<=n;i++)
    {
        cin >> x;
        if (x%2==0)
        {
          s = s+x;
          nrp++;
        }
    }
    cout << (float)s/nrp;
}

int main()
{
    ma_nr_pare();
    return 0;
}
