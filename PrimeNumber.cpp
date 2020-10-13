#include<iostream>
#include<math.h>
#include<dos.h>
using namespace std;
class PrimeNo
{
bool stop=false;
int i,n,c=0;
public:
    void no_IN()
    {
cout<<"Enter a number to check whether its prime or not"<<endl;
cin>>n;
    }
    void check()
    {
if(n==2)
cout<<"Number is prime"<<endl;
if(n%2==0)
{cout<<"Number is not prime";
c++;
}
else
i=3;
while((i<=sqrt(n))&&(!stop))
{if(n%i==0)
{
stop=true;
cout<<"Number is not prime";
c=1;
break;
}
else
i+=2;
}
if(c==0)
cout<<"Number is prime";
    }
};
int main()
{
PrimeNo p1, p2, p3;
p1.no_IN();
p1.check();
p2.no_IN();
p2.check();
p3.no_IN();
p3.check();

return 1;
}
