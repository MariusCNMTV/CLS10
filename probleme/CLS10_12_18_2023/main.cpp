#include <iostream>

using namespace std;

int x,y,i,j,s;

int main()
{

    cin >> x >> y;
    i = x; j = y;
    while(i<=j){
        if(i%2==0) s+=j;
        if(j%2==0) s+=i;
        i++; j--;

    }
    cout << s << endl;
    return 0;
}
