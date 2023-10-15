#include <iostream>

using namespace std;


void prob11()
{   
    int n,s=1;
    cin >> n;
    int c1=n%10;
    n = n/10;
    int c2=n%10;
    
    if(c1==c2){s=0;}
    else if(c1<c2){s=-1;}

    while((c1-c2)*s>0 && n >9){c1 = n%10;n = n/10;c2 = n%10;}
    
    cout << s << " " << n << endl;

}
void prob12()
{
    int n,x,m,p=1;
    cin >> n;
    while (x<10)
    {
        int cn=n;
        while (cn!=0)
        {
            int c=cn%10;
            cn = cn/10;

            if (c==x)
            {
                m = c*p+m;
                p = p*10;
            }
            
        }
        x = x+2;
    }
    cout<<m<<endl;
    
}
void prob13()
{
    int x,y,k,i,c,n;
    cin >> x >> y;
    i = x;
    while (i<=y)
    {
        n=i;
        c=0;
        while (n>0&&c==0)
        {
            if (n%2==1){c=1;}
            n = n/10;
        }
        k = k+c;
        i = i+1;  
    }
    cout<<k<<endl;
}
void prob14()
{
    int x,n,y,c;
    while (x!=0)
    {
        y=x;
        c=0;
        while (y>0)
        {
            if (y%10>c){c=y%10;}
            y = y/10;
        }
        n=n*10+c;
        cin>>x;
    }
    cout<<n<<endl;
}

int main()
{
    prob14();
    return 0;
}