#include<iostream>
#include<math.h>
using namespace std;
class Prime500
{
int i,n,c=0;
public:
    void check (int m)
    {


for(n=1; n<=m;n++)
{
c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0){c++;}
    }
    if(c==2){cout<<n<<endl;}
}
    }

};
int main()
{
    Prime500 p1;
    p1.check(500);
    return 1;
}
