#include <iostream>
#include <cmath>

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
void cifra()
{
    cin >> n;
    while (n > 9)
    {
        s = 0;
        while (n > 0)
        {
            uc = n % 10;
            s = s + uc;
            n = n / 10;
        }
        n = s;
    }
    cout << s;
}
void baza_2()
{

    int n1, n2;
    cin >> n1 >> n2;
    int c1 = 0, c2 = 0;
    int temp = n1;

    while (temp > 0)
    {
        if (temp % 2 == 1)
        {
            c1++;
        }
        temp /= 2;
    }
    temp = n2;
    while (temp > 0)
    {
        if (temp % 2 == 1)
        {
            c2++;
        }
        temp /= 2;
    }

    if (c1 > c2)
    {
        cout << n1 << endl;
    }
    else if (c2 > c1)
    {
        cout << n2 << endl;
    }
    else
    {
        cout << min(n1, n2) << endl;
    }
}

int main()
{
    baza_2();
    return 0;
}