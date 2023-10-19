#include <iostream>

using namespace std;

int x, y, z, uc, s, p, pri, ok = 1, nr;
long long n;

void s_numere_p()
{
    cin >> n;
    while (n > 0)
    {
        uc = n % 10;
        if (uc % 2 == 0)
        {
            s = s + uc;
        }
        n = n / 10;
    }
    cout << s;
}
void p_numere_i()
{
    cin >> n;
    s = 1;
    while (n > 0)
    {
        uc = n % 10;
        if (uc % 2 != 0)
        {
            x = 1;
            s = uc * s;
        }
        else
        {
            x = 0;
        }
        n = n / 10;
    }
    if (x == 0)
    {
        cout << "Nu exista cifre impare" << endl;
    }
    else
    {
        cout << s << endl;
    }
}
void prietenul()
{
    cin >> n;
    p = 1;
    while (n > 0)
    {
        uc = n % 10;
        if (uc % 2 == 0)
        {
            uc++;
        }
        else
        {
            uc--;
        }
        pri = pri + uc * p;
        p = p * 10;
        n = n / 10;
    }
    cout << "Prietenul : " << pri << endl;
}
void pana_0()
{

    // presupunem ca nr este format din nr impare

    cin >> n;
    nr = 0;
    while (n > 0)
    {
        ok = 1;

        while (n > 0 && ok == 1)
        {
            uc = n % 10;
            if (uc % 2 == 0)
            {
                ok = 0;
                break;
            }
            n = n / 10;
        }
        if (ok == 0)
        {
            cout << "NU" << endl;
        }
        else
        {
            cout << "DA" << endl;
        }
    }
}

int main()
{
    s_numere_p();
    return 0;
}