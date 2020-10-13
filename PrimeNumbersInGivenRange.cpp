#include<iostream>
#include<math.h>
using namespace std;
class Find_Prime
{
int i,n,c=0,a,b;
public:
    void range()
    {
cout<<"Enter range of numbers to find prime "<<endl;
cin>>a>>b;
    }
    void result()
    {
for(n=a; n<=b;n++)
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
int main ()
{
Find_Prime case1, case2;
case1.range();
case1.result();
case2.range();
case2.result();
return 1;
}
