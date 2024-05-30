#include <iostream>

using namespace std;

int n,x,k,s,uc,ogl,out,nmax=0,nmin=9999;

void a (){
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>x;
        if(x%10%3==0)s=s+x;
    }
    cout << s;
}
void b (){
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>x;
        for(int d=1;d<=x/2;d++) {
            if(x%d==0)s=s+d;
        }
        if (x==s){
            if (nmax < s){
                nmax=s;
            }
        }
        s=0;
    }
    cout << nmax;
}
void c (){
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> x;
        k = x;
        while (x != 0){
            ogl = ogl * 10 + x % 10;
            x =  x / 10;
        }
        uc = ogl%10;
        if(nmin>uc){
            nmin=uc;
        }
        if(nmin==ogl%10 && nmax < k){
            nmax = k;
        }
        ogl = 0;
    }
    cout << nmax;

}
int main()
{
    c();
    return 0;
}
