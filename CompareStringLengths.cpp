#include<iostream>
using namespace std;
class Compare_String
{
char string1[20], string2[20];
int i,j,m=0,n=0;
public:
    void enterString()
    {
cout<<"Enter a string"<<endl;
cin.getline(string1,20);
for(i=0;string1[i]!=0;i++)
{n++;}
    }
void compare()
{
cout<<"Enter a string to compare"<<endl;
cin.getline(string2,20);
for(j=0;string2[j]!=0;j++)
{m++;}
}
void result()
{
if(n==m)
cout<<"both are equal";
else
if(n>m)
cout<<"First string is bigger than";
else
cout<<"First string is smaller than ";

}
};
int main()
{
Compare_String c1;
c1.enterString();
c1.compare();
c1.result();

return 1;
}
