#include <iostream>
#include <windows.h>

using namespace std;

int n,k,x;

string binar(int x) {
    string binar = "";
    if (x == 0) {
        return "0";
    }
    while (x > 0) {
        int aux = x % 2;
        binar = char(aux + '0') + binar;
        x /= 2;
    }
    return binar;
}
int main()
{
    system("Color 0A");
    cin >> n;
    if(n%2==0){
        n = n-1;
    }
    for(int i= n; i>=0; i=i-2){
        k++;
        x = i;
        cout << binar(x) << " ";
        if(k==5){
            cout << endl;
            k = 0;
        }
    }
    return 0;
}
