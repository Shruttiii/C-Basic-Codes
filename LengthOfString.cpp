#include<iostream>
using namespace std;
class StringLength
{
char string[20];
int i,n=0;
public:
    void enterSTRING()
    {
cout<<"Enter a string"<<endl;
cin.getline(string,20);
    }
    void calculate()
    {
for(i=0;string[i]!=0;i++)
n++;
    }
void result()
{
cout<<"the length of the string is "<<n;

}
};
int main()
{
StringLength str1,str2;
str1.enterSTRING();
str1.calculate();
str1.result();
str2.enterSTRING();
str2.calculate();
str2.result();
return 1;
}
