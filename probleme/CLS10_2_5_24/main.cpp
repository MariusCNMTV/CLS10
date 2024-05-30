#include <iostream>
using namespace std;
int n, i, j, num, ok, s, v[100];

int main()
{
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> v[i];
        }
    ok=0;
    i=1;
    while(ok==0 && i<=n){
        if(v[i]%2==1)i++;
        else ok=1;
        if(ok==1){
            num = v[i];
            while(num!=0){
                s = num %10;
                num = num/10;
            }
            for(j=n+1;j >i+1; j--){
                v[j]=v[j+1];
                v[i+1]=s;
                n++;
            }
        }
    }

    cout << v[3]<< "Hello world!" << s << endl;
    return 0;
}
